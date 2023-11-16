/*
** EPITECH HACKATHON, 2023
** hackacthon-v2
** File description:
** READ INPUT LINES
*/

#include <stdio.h>
#include <stdlib.h>

char *read_line()
{
    size_t buffer_size = 1024;
    char *buffer = (char *)malloc(buffer_size);
    size_t input_length = 0;
    int c = 0;

    if (buffer == NULL) {
        fprintf(stderr, "Error allocating memory\n");
        return NULL;
    }

    while ((c = getchar()) != EOF) {
        buffer[input_length++] = (char)c;
        if (input_length >= buffer_size) {
            buffer_size *= 2;
            buffer = (char *)realloc(buffer, buffer_size);
            if (buffer == NULL) {
                fprintf(stderr, "Error allocating memory\n");
                return NULL;
            }
        }
    }
    buffer[input_length] = '\0';
    return buffer;
}

int main()
{
    char *line = read_line();
    if (line == NULL) {
        fprintf(stderr, "Error reading line\n");
        return 1;
    }
    free(line);
    return 0;
}
