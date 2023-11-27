#include "main.h"
/**
 *append_text_to_file - appends text
 *@filename: file
 *@text_content: content to append
 *Return: 0
 */
int append_text_to_file(const char *filename, char *text_content)
{
    ssize_t bytes_written;
    size_t content_len;
    int fd;

if (filename == NULL)
    return (-1);

if (text_content == NULL)
    return (1);

fd = open(filename, O_WRONLY | O_APPEND);
if (fd == -1)
{
    if (errno == ENOENT || errno == EACCES)
        return (-1);
    else 
    {
        perror("open");
        return (-1);
    }
}
content_len = strlen(text_content);
bytes_written = write(fd, text_content, content_len);
close(fd);

if (bytes_written == -1 || (size_t)bytes_written != content_len)
{
    perror("write");
    return (-1);
}
return (1);
}
