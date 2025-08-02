#include "main.h"

/**
 * handle_error - helper function to handle errors in cp program
 * @msg: error message to display
 * @file: file associated with error
 * @code: exit code
 * @fd: file descriptor
 *
 * Return: void
 */

void handle_error(const char *msg, const char *file, int code, int fd)
{
	if (file)
		dprintf(STDERR_FILENO, msg, file);
	else
		dprintf(STDERR_FILENO, msg, fd);

	exit(code);
}
