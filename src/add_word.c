/*************************************************************************
	> File Name: add_word.c
	> Author: 
	> Mail: 
	> Created Time: Wed 29 Jul 2015 09:16:50 AM CST
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"word_manage_p.h"

static void shift_array(int index) {
    int src;
    
    for (src = num_of_word - 1; src >= index; src--)
        word_array[src + 1] = word_array[src];
    num_of_word++;
}

static char *my_strdup(char *src) {
    char *dest;
    
    dest = malloc(sizeof(char) * (strlen(src) + 1));
    strcpy(dest, src);

    return dest;
}

void add_word(char *word) {
    int i;
    int result;

    for (i = 0; i < num_of_word; i++) {
        result = strcmp(word_array[i].name, word);
        if (result >= 0)
            break;
    }
    if (num_of_word != 0 && result == 0)
        word_array[i].count++;
    else {
        shift_array(i);
        word_array[i].name = my_strdup(word);
        word_array[i].count = 1;
    }
}
