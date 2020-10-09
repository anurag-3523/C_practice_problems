/*
 * PQ-5.c
 *
 *  Created on: 09-Oct-2020
 *      Author: hp
 */
/*Write a program to find the sum of first and last digit of a number. Assume that the number is a
positive integer number.
Sample Input : 33456
Sample Output : 3 + 6 = 9;*/

#include <stdio.h>
int main(){
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

    int num,sum, firstdigit, lastdigit;

        printf("Enter number to find sum of first and last digit: ");
        scanf("%d", &num);

        lastdigit = num % 10;

        firstdigit = num;
        while(num>=10){
        	num=num/10;
        }
        firstdigit = num;


        sum = firstdigit + lastdigit;
    printf("Sum of first and last digit is %d + %d = %d",firstdigit,lastdigit, sum);
    return 0;
    }

