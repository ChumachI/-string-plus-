#ifndef MY_STRING_H_
#define MY_STRING_H_
#define _GNU_SOURCE

#include <ctype.h>
#include <float.h>
#include <locale.h>
#include <math.h>
#include <regex.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <wchar.h>

#include "my_sprintf.h"
#include "my_sscanf.h"

#define BUFFER 2048
#define my_NULL (void *)0
typedef long unsigned my_size_t;

/* 1. Ищет первое вхождение символа "c" в области памяти str, размером n байтов.
Если символ найден, функция возвращает указатель на его позицию в str; в
противном случае возвращается my_NULL.
*/
void *my_memchr(const void *str, int c, my_size_t n);
/* 2. Сравнивает две области памяти, на которые указывают str1 и str2, на
протяжении n байтов.
*/
int my_memcmp(const void *str1, const void *str2, my_size_t n);
/* 3. Копирует n символов из области памяти, на которую указывает src, в область
памяти, на которую указывает dest
 */
void *my_memcpy(void *dest, const void *src, my_size_t n);
/* 4. Копирует символ c  в первые n символов строки, на которую указывает
 аргумент str.
*/
void *my_memset(void *str, int c, my_size_t n);
/* 5. Добавляет строку, на которую указывает src, в конец строки, на которую
указывает dest, копируя до n символов.
*/
char *my_strncat(char *dest, const char *src, my_size_t n);
/* 6. Выполняет поиск первого вхождения символа c в строке str и возвращает
   указатель на первое вхождение или my_NULL, если символ не найден.
 */
char *my_strchr(const char *str, int c);
/* 7. Cравнивает не более первых n байтов двух строк str1 и str2:*/
int my_strncmp(const char *str1, const char *str2, my_size_t n);
/* 8. Копирует до n символов из строки, на которую указывает src, в dest.*/
char *my_strncpy(char *dest, const char *src, my_size_t n);
/* 9. Вычисляет длину начального сегмента строки str1, который состоит из
  символов, отсутствующих в строке str2*/
my_size_t my_strcspn(const char *str1, const char *str2);
/* 10. Выводит сообщения об ошибках*/
char *my_strerror(int errnum);
/* 11. Вычисляет длину строки str, не включая завершающий нулевой символ.*/
my_size_t my_strlen(const char *str);
/* 12. Функция проходит по каждому символу в строке str1 и проверяет,
 содержится ли этот символ в строке str2. Если символ находится, то функция
 возвращает указатель на этот символ в str1. Если же функция не находит
 соответствующих символов, то она возвращает нулевой указатель my_NULL.*/
char *my_strpbrk(const char *str1, const char *str2);
/* 13. Выполняет поиск последнего вхождения символа c (беззнаковый тип) в строке
 str*/
char *my_strrchr(const char *str, int c);
/* 14. Ищет первое вхождение подстроки needle в строке haystack.*/
char *my_strstr(const char *haystack, const char *needle);
/* 15. Разбивает строку str на ряд токенов, разделенных delim. */
char *my_strtok(char *str, const char *delim);
/* 16. Доп функция для strtok. Вычисляет длину начального сегмента str1, который
 * полностью состоит из символов str2.*/
my_size_t my_strspn(const char *str1, const char *str2);
/* 17. Доп функция для sprintf Копирует строку, на которую указывает src, в dest
 */
char *my_strcpy(char *dest, const char *src);
/* 18. Доп функция для sprintf Обрабатывает выход за область памяти, что
означает, что она корректно копирует данные, даже если источник и назначение
разного размера.
*/
void *my_memmove(void *dest, const void *src, my_size_t n);
/* 19. Возвращает копию строки (str), преобразованной в верхний регистр.
В случае какой-либо ошибки следует вернуть значение NULL*/
void *my_to_upper(const char *str);
/* 20. Возвращает копию строки (str), преобразованной в нижний регистр.
В случае какой-либо ошибки следует вернуть значение NULL*/
void *my_to_lower(const char *str);
/* 21. Возвращает новую строку, в которой указанная строка (str)
вставлена в указанную позицию (start_index) в данной строке (src).
В случае какой-либо ошибки следует вернуть значение NULL*/
void *my_insert(const char *src, const char *str, my_size_t start_index);
/* 22. Возвращает новую строку, в которой удаляются все начальные и
конечные вхождения набора заданных символов (trim_chars) из данной строки (src).
В случае какой-либо ошибки следует вернуть значение NULL*/
void *my_trim(const char *src, const char *trim_chars);

#endif  // MY_STRING_H_