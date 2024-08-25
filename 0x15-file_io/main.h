#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

#define BUF_S 1024

#define ERR_ARG "Usage: cp file_from file_to\n"
#define ERR_RD "Error: Can't read from file NAME_OF_THE_FILE\n"
#define ERR_WR "Error: Can't write to NAME_OF_THE_FILE\n"
#define ERR_CLOSE "Error: Can't close fd %d\n"
#define PERMS (S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH)

int _putchar(char c);
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);





#endif
