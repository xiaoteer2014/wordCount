/*************************************************************************
	> File Name: get_word.c
	> Author: 
	> Mail: 
	> Created Time: Mon 03 Aug 2015 09:20:51 PM CST
 ************************************************************************/

#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>
#include"get_word.h"

int get_word(char *buf, int buf_size, FILE *fp) {
    int len;
    int ch;

    while ((ch = getc(fp)) != EOF && !isalnum(ch))
        ;
    if (ch == EOF)
        return EOF;

    len = 0;
    do {
        buf[len] = ch;
        len++;
        if (len >=buf_size) {
            fprintf(stderr, "word too long.\n");
            exit(1);
        }
    } while ((ch = getc(fp)) != EOF && isalnum(ch));
    buf[len] = '\0';
}
