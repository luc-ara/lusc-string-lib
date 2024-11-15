#ifndef STRINGS_H
#define STRINGS_H

#include <stddef.h>
#include <stdbool.h>

typedef struct String_S String_T ;

size_t size_of_utf8(char *s);
size_t count_utf8(char *s);

size_t size_string(String_T *s);
size_t len_string(String_T *s);
bool equal_string(String_T *s1, String_T *s2);

String_T *new_string(char *s);

void print_string(String_T *s);
String_T *dup_string(String_T *s);
String_T *concat_string(String_T *s1, String_T *s2);
size_t find_string(String_T *s1, String_T *s2);
String_T *take_string(String_T *s, size_t n);
String_T *drop_string(String_T *s, size_t n);
int compare_string(String_T *s1, String_T *s2);
String_T *substring(String_T *s, size_t start, size_t len);
String_T *to_upper(String_T *s);
String_T *to_lower(String_T *s);
String_T *reverse_string(String_T *s);


String_T *trim(String_T *s);
String_T *pad_left(String_T *s, size_t len, char pad_char);
String_T *pad_right(String_T *s, size_t len, char pad_char);


#endif