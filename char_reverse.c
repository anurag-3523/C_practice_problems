/*
 * char_reverse.c
 *
 *  Created on: 06-Oct-2020
 *      Author: hp
 */
#include <stdio.h>
 int main()
 {
    char char1 = 'x';
    char char2 = 'm';
    char char3 = 'l';

	printf("The reverse of %c%c%c is %c%c%c\n",
		char1, char2, char3,
		char3, char2, char1);

	return(0);
}
