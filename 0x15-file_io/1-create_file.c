#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/stat.h>
#include <sys/types.h>
/**
 * create_file - function that creates a file.
 * @filename: variable pointer
 * @text_content: content file
 * Description: Create a function that creates a file.
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
    if (filename == NULL)
    {
        return -1;
    }
    int fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
    if (fd == -1)
    {
        return -1;
    }
    if (text_content != NULL)
    {
        size_t len = strlen(text_content);
        ssize_t num_written = write(fd, text_content, len);
        if (num_written != (ssize_t)len)
       	{
            close(fd);
            return -1;
        }
    }
    close(fd);
    return 1;
}

