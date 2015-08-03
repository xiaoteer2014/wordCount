/*************************************************************************
	> File Name: word_manage.h
	> Author: 
	> Mail: 
	> Created Time: Wed 29 Jul 2015 09:04:25 AM CST
 ************************************************************************/

#ifndef _WORD_MANAGE_H
#define _WORD_MANAGE_H
#include<stdio.h>
void word_initialize(void);
void add_word(char *word);
void dump_word(FILE *fp);
void word_finalize(void);
#endif
