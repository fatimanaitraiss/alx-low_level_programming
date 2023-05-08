#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* main - program that copies the content of a file to another file
* @argc: num argument
* @argv: string argument
* Return: 0
*/
int main(int argc, char *argv[])
{
    if (argc != 3)
    {
        dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", argv[0]);
        exit(97);
    }
    int fd_from = open(argv[1], O_RDONLY);
    if (fd_from == -1)
    {
        dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
        exit(98);
    }
    int fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
    if (fd_to == -1)
    {
        dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
        exit(99);
    }
    char buf[BUF_SIZE];
    ssize_t nread;
    while ((nread = read(fd_from, buf, BUF_SIZE)) > 0)
    {
        if (write(fd_to, buf, nread) != nread)
       	{
            dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
            exit(99);
        }
    }
    if (nread == -1)
    {
        dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
        exit(98);
    }
    if (close(fd_from) == -1)
    {
        dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from);
        exit(100);
    }
    if (close(fd_to) == -1)
    {
        dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to);
        exit(100);
    }
    return 0;
}

