/*
 * Quotient_and_Remainder.c
 *
 *  Created on: 08-Oct-2020
 *      Author: hp
 */
//Program to Compute Quotient and Remainder//

#include<stdio.h>
int main(){
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	int dividend, divisor, quotient, remainder;
	printf("Enter dividend:- ");
	scanf("%d",&dividend);
	printf("Enter divisor:- ");
	scanf("%d",&divisor);

	quotient = dividend / divisor;
	remainder = dividend % divisor;
    printf("quotient = %d\n", quotient);
    printf("remainder = %d",  remainder);
    return 0;

}
