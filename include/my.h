/*
** EPITECH PROJECT, 2024
** my.h
** File description:
** my lib
*/

#include <stdarg.h>
#include <stdio.h>
#include <stddef.h>
#include <float.h>
#include <stdlib.h>
#include <unistd.h>
#include <dirent.h>
#include <errno.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

#ifndef MY_LIB
    #define MY_LIB
void my_putchar(char c);
int my_isneg(int nb);
int my_put_nbr(int nb);
void my_swap(int *a, int *b);
int my_putstr(char const *str);
int my_strlen(char const *str);
void my_sort_int_array(int *tab, int size);
int my_compute_power_rec(int nb, int power);
int my_compute_power_it(int nb, int p);
int my_compute_square_root(int nb);
int my_is_prime(int nb);
int my_find_prime_sup(int nb);
char *my_strcpy(char *dest, char const *src);
char *my_strncpy(char *dest, char const *src, int n);
char *my_revstr(char *str);
char *my_strstr(char *str, char const *to_find);
int my_strcmp(char const *s1, char const *s2);
int my_strncmp(char const *s1, char const *s2, int n);
char *my_strupcase(char *str);
char *my_strlowcase(char *str);
int my_str_isalpha(char const *str);
int my_str_isnum(char const *str);
int my_str_islower(char const *str);
int my_str_isupper(char const *str);
int my_str_isprintable(char const *str);
char *my_strcat(char *dest, char const *src);
char *my_strncat(char *dest, char const *src, int nb);
int my_put_oct(unsigned int nb);
int my_putabs(unsigned int nb);
int my_put_sign(int nb);
int my_put_space(int nb);
int my_put_hexa(unsigned int nb);
int my_put_hexa_maj(unsigned int nb);
int my_put_pointer(void *ptr);
int my_put_float(double nb);
int my_put_float_maj(double nb);
int my_put_nbr_long(long long nb);
int my_put_nbr_ulong(unsigned long long nb);
int my_put_hexa_ll(unsigned long long nb);
int my_put_oct_long(unsigned long long nb);
int my_write_sci(float nb);
int my_write_sci_maj(float nb);
int my_put_hexa_maj_ll(unsigned long long nb);
int zero(long cast);
int flag_e(char const *format, int *i, va_list args);
int flag_q(char const *format, int *i, va_list args);
int flag_l(char const *format, int *i, va_list args);
int flag_ll(char const *format, int *i, va_list args);
int flag_h(char const *format, int *i, va_list args);
int flag_hh(char const *format, int *i, va_list args);
int flag_f(char const *format, int *i, va_list args);
int flag_0(char const *format, int *i, va_list args);
int my_opti_float(float nb);
int my_opti_notation(float nb);
int display_nbr(int nb, int *count_nb);
int my_count_nbr(int nb);
int my_printf(const char *format, ...);
void flag_hashtag(char const *format, int *i, va_list args);
int flag_p(char const *format, int *i, va_list args);
int flag_hexa(char const *format, int *i, va_list args);
void flag_space(char const *format, int *i, va_list args);
int flag_o(char const *format, int *i, va_list args);
int flag_i_d_u(char const *format, int *i, va_list args);
int flag_s_c(char const *format, int *i, va_list args);
int flag_percentage(char const *format, int *i);
int flag_hh(char const *format, int *i, va_list args);
int flag_h(char const *format, int *i, va_list args);
int flag_l(char const *format, int *i, va_list args);
int flag_ll(char const *format, int *i, va_list args);
int flag_q(char const *format, int *i, va_list args);
int flag_g(char const *format, int *i, va_list args);
void flag_adjustment(char const *format, int *i, va_list args);
void flag_plus(char const *format, int *i, va_list args);
int flag_0_di(char const *format, int *i, va_list args, int limit);
void my_put_f_sign(va_list args);
void my_put_f_maj_sign(va_list args);
void my_put_e_sign(va_list args);
void my_put_e_maj_sign(va_list args);
int my_countabs(unsigned int);
int my_count_pointer(void *ptr);
int my_count_oct(unsigned int nb);
int my_put_positif(int nb);
int mini_printf(const char *format, ...);
char *my_strdup(char const *src);
#endif
