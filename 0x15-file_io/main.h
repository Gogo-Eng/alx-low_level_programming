#ifndef FILE_H
#define FILE_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

int create_file(const char *filename, char *text_content);


#endif
