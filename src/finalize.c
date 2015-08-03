/*************************************************************************
	> File Name: finalize.c
	> Author: 
	> Mail: 
	> Created Time: Mon 03 Aug 2015 08:52:56 PM CST
 ************************************************************************/

#include<stdlib.h>
#include "word_manage_p.h"

void word_finalize(void) {
    int i;

    for (i=0; i<num_of_word; i++) {
        free(word_array[i].name);
    }
    num_of_word = 0;
}

