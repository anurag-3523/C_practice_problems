/*
 * ASCII_Value.c
 *
 *  Created on: 07-Oct-2020
 *      Author: hp
 */
//Program to Print ASCII Value

#include<stdio.h>
int main(){
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);
	char c;
	printf("Enter a character:- ");
	c = getchar();
	printf("The ASCII value of %c is:- %d",c,c);
	return 0;
}
