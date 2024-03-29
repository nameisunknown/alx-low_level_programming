#ifndef LISTS_H
#define LISTS_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stddef.h>

typedef struct list_s
{
    char *str;
    unsigned int len;
    struct list_s *next;
} list_t;

size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
size_t len(const char *str);
list_t *add_node(list_t **head, const char *str);
size_t lengthOf(const char *str);
list_t *add_node_end(list_t **head, const char *str);

#endif
