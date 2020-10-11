/*
 * PQ2_4.c
 *
 *  Created on: 10-Oct-2020
 *      Author: hp
 */

/*Write a program to reverse the elements of an array.*/
#include<stdio.h>
int main(){
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	int i,j,temp,n,a[]={1,2,3,4,5};
	n=sizeof(a)/sizeof(a[0]);

	printf("Elements in array are\n");
	for(i=0;i<n;++i){
		printf("%d ",a[i]);
	}
    i=0;
    j=n-1;
    for(i=0;i<j;i++,j--)
	{
		temp=a[i];
		a[i]=a[j];
		a[j]=temp;
		i++;
		j--;
	}
	printf("\nReversed array is\n");
	for(i=0;i<n;i++){
		printf("%d ",a[i]);
	}
 return 0;

}
