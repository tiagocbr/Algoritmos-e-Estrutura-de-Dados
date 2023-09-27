#ifndef ITEM_H
#define ITEM_H

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

typedef struct item_ ITEM;

ITEM *item_criar(char chave);
bool item_apagar(ITEM **item);
void item_imprimir(ITEM *item);
char item_get_chave(ITEM *item);
bool item_set_chave(ITEM *item, char chave);

#endif