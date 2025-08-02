#include "main.h"

/**
 * handle_error_str - Handles errors with messages that include a string
 * @msg: Error message format (expects a %s)
 * @file: File name to insert into message
 * @code: Exit error code
 * @fd: File descriptor to close before exiting (or -1 to skip)
 */
void handle_error_str(const char *msg, const char *file, int code, int fd)
{
	dprintf(STDERR_FILENO, msg, file);
	if (fd >= 0)
		close(fd);
	exit(code);
}

/**
 * handle_error_fd - Handles errors with messages that include an integer fd
 * @msg: Error message format (expects a %d)
 * @fd_val: The fd value to insert into message
 * @code: Exit error code
 * @fd_to_close: File descriptor to close before exiting (or -1 to skip)
 */
void handle_error_fd(const char *msg, int fd_val, int code, int fd_to_close)
{
	dprintf(STDERR_FILENO, msg, fd_val);
	if (fd_to_close >= 0)
		close(fd_to_close);
	exit(code);
}

/**
 * main - Copies contents from one file to another
 * @argc: Argument count
 * @argv: Argument vector
 *
 * Return: 0 on success, exits with error codes on failure
 */
int main(int argc, char *argv[])
{
	int fd_from, fd_to;
	ssize_t r, w, total;
	char buf[1024];

	if (argc != 3)
		handle_error_str("Usage: cp file_from file_to\n", "", 97, -1);

	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
		handle_error_str("Error: Can't read from file %s\n", argv[1], 98, -1);

	r = read(fd_from, buf, sizeof(buf));
	if (r == -1)
		handle_error_str("Error: Can't read from file %s\n", argv[1], 98, fd_from);

	fd_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fd_to == -1)
		handle_error_str("Error: Can't write to %s\n", argv[2], 99, fd_from);

	while (r > 0)
	{
		total = 0;
		while (total < r)
		{
			w = write(fd_to, buf + total, r - total);
			if (w == -1)
				handle_error_str("Error: Can't write to %s\n", argv[2], 99, fd_to);
			total += w;
		}
		r = read(fd_from, buf, sizeof(buf));
		if (r == -1)
			handle_error_str("Error: Can't read from file %s\n", argv[1], 98, fd_from);
	}
	if (close(fd_from) == -1)
		handle_error_fd("Error: Can't close fd %d\n", fd_from, 100, -1);

	if (close(fd_to) == -1)
		handle_error_fd("Error: Can't close fd %d\n", fd_to, 100, -1);

	return (0);
}
