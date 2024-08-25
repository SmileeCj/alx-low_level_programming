#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

#define BUF_S 1024

#define ERR_ARG "Usage: cp file_from file_to\n"
#define ERR_RD "Error: Can't read from file %s\n"
#define ERR_WR "Error: Can't write to %s\n"
#define ERR_CLOSE "Error: Can't close fd %d\n"

int _putchar(char c);
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);





#endif
