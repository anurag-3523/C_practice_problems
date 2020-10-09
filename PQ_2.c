/*
 * PQ_2.c
 *
 *  Created on: 08-Oct-2020
 *      Author: hp
 */
/*Write a program that inputs one five-digit number, separates
the number into its individual digits and prints the digits separated from one another by three
spaces each.*/

#include<stdio.h>
int main(){
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);
	int num;
	printf("Enter five-digit number\n");
	scanf("%d",&num);
	printf("%d   ",num/10000);
	printf("%d   ",num/1000%10);
	printf("%d   ",num/100%10);
	printf("%d   ",num/10%10);
	printf("%d",num/1%10);

	return 0;
}
