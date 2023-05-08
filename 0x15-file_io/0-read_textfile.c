#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

/**
 * read_textfile - that reads a text file and prints
 * @filename: variable pointer
 * @letters: size letters
 * Description: Write a function that reads a text file and prints it
 * to the POSIX standard output.
 * Return: the actual number of letters it could read and print, 0 otherwise
 */

ssize_t read_textfile(const char *filename, size_t letters) {
    if (filename == NULL) {
        return 0;
    }
    int fd = open(filename, O_RDONLY);
    if (fd == -1) {
        return 0;
    }
    char *buffer = malloc(sizeof(char) * letters);
    ssize_t bytes_read = read(fd, buffer, letters);
    if (bytes_read == -1) {
        close(fd);
        free(buffer);
        return 0;
    }
    ssize_t bytes_written = write(STDOUT_FILENO, buffer, bytes_read);
    if (bytes_written == -1 || bytes_written != bytes_read) {
        close(fd);
        free(buffer);
        return 0;
    }
    close(fd);
    free(buffer);
    return bytes_written;
}

