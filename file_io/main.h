#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);

/**
 * handle_error - function handles errors in 3-cp.c
 * @msg: error message to display
 * @file: file name
 * @code: exit status
 * @fd: file descriptor
 *
 * Return: void
 */

void handle_error(const char *msg, const char *file, int code, int fd);

#endif
