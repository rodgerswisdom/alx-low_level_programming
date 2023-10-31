#ifndef MAIN_H
#define MAIN_H
int _putchar(char c);
char *create_array(unsigned int size, char c);
char *_strdup(char *str);
int **alloc_grid(int width, int height);
int is_space(char c);
int word_count(char *str);
char **allocate_memory(char *str, int count);
#endif
