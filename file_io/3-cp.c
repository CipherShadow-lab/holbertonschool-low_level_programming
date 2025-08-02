#include "main.h"

/**
 * main - function copies contents of a file to another file
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	int fd_from, fd_to;
	ssize_t r, w;
	char buf[1024];

	if (argc != 3)
		handle_error("Usage: cp file_from file_to\n", 97, -1);

	fd_from = open(argv[1], O_RDONLY);

	if (fd_from == -1)
		handle_error("Error: Can't read from file %s\n", argv[1], 98, -1);

	fd_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	if (fd_to == -1)
		handle_error("Error: Can't write to %s\n", argv[2], 99, fd_from);

	while ((r = read(fd_from, buf, 1024)) > 0)
	{
		w = write(fd_to, buf, r);

		if (w != r)
			handle_error("Error: Can't write to %s\n", argv[2], 99, fd_from);
	}

	if (r == -1)
		handle_error("Error: Can't read from file %s\n", argv[1], 98, fd_from);

	if (close(fd_from) == -1)
		handle_error("Error: Can't close fd %d\n", NULL, 100, -1);

	if (close(fd_to) == -1)
		handle_error("Error: Can't close fd %d\n", NULL, 100, -1);

	return (0);
}
