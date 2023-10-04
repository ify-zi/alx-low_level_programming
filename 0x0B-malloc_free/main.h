#ifndef MAIN
#define MAIN

extern char *create_array(unsigned int size, char c);
extern char *_strdup(char *str);
extern char *str_concat(char *s1, char *s2);
extern int **alloc_grid(int width, int height);
extern void free_grid(int **grid, int height);

#endif
