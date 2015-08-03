/*************************************************************************
	> File Name: word_manage_p.h
	> Author: 
	> Mail: 
	> Created Time: Wed 29 Jul 2015 09:12:29 AM CST
 ************************************************************************/

#ifndef _WORD_MANAGE_P_H
#define _WORD_MANAGE_P_H
#include"word_manage.h"
typedef struct {
    char *name;
    int count;
} Word;

#define WORD_NUM_MAX (10000)

extern Word word_array[];
extern int num_of_word;
#endif
