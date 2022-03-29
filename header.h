#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

char *ft_strcat(char *src1, char *src2);
int ft_strlen(char *str);
void ft_check_for_00(char **argv, int *res);
void ft_strdup(char *dest, char *src);
int ft_get_width(char *colle);
int ft_get_height(char *colle);
char *ft_get_buffer();
void ft_get_chars(char *chars, char *str, int height, int width);
char ft_get_first(char *str);
char ft_get_second(char *str, int width);
char ft_get_third(char *str, int width, int height);
char ft_get_last(char *str, int width, int height);
char ft_get_lines(char *str);
char ft_get_cols(char *str, int width);
void ft_check(int *res, char *chars);
char *ft_get_colle00(int width, int height);
char *ft_get_colle01(int width, int height);
char *ft_get_colle02(int width, int height);
char *ft_get_colle03(int width, int height);
char *ft_get_colle04(int width, int height);
void ft_putstr(char *str);
