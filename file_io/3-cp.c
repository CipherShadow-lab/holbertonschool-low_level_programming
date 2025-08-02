#include "main.h"
#include <string.h>

/**
 * handle_error - handles errors with copying files
 * @msg: error message
 * @file: file related to error
 * @code: exit error code
 * @fd: file descriptor
 *
 * Return: void
 */
void handle_error(const char *msg, const char *file, int code, int fd)
{
	if (file)
		dprintf(STDERR_FILENO, msg, file);
	else if (strchr(msg, '%') && strchr(msg, 'd'))
		dprintf(STDERR_FILENO, msg, fd);
	else
		dprintf(STDERR_FILENO, "%s", msg);

	if (fd >= 0)
		close(fd);

	exit(code);
}

/**
 * main - function copies contents of file to another file
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int fd_from, fd_to;
	ssize_t r, w, total;
	char buf[1024];

	if (argc != 3)
		handle_error("Usage: cp file_from file_to\n", NULL, 97, -1);

	fd_from = open(argv[1], O_RDONLY);

	if (fd_from == -1)
		handle_error("Error: Can't read from file %s\n", argv[1], 98, -1);

	fd_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	if (fd_to == -1)
		handle_error("Error: Can't write to %s\n", argv[2], 99, fd_from);
	while (1)
	{
		r = read(fd_from, buf, 1024);
		if (r == -1)
			handle_error("Error: Can't read from file %s\n", argv[1], 98, fd_from);
		if (r == 0)
			break;

		total = 0;
		while (total < r)
		{
			w = write(fd_to, buf + total, r - total);
			if (w == -1)
				handle_error("Error: Can't write to %s\n", argv[2], 98, fd_to);
			total += w;
		}
	}
	if (close(fd_from) == -1)
		handle_error("Error: Can't close fd %d\n", NULL, 100, fd_from);

	if (close(fd_to) == -1)
		handle_error("Error: Can't close fd %d\n", NULL, 100, fd_to);

	return (0);
}
