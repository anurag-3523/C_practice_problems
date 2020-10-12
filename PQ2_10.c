/*
 * PQ2_10.c
 *
 *  Created on: 12-Oct-2020
 *      Author: hp
 */
//Write a program to find the second largest and the second smallest element in an array.

#include<stdio.h>
int main(){
	int a,ar[]={10,14,3,6,40,32,14};
	int n=sizeof(ar)/sizeof(ar[0]);
	for(int i=0;i<n;++i){
		for(int j=i+1;j<n;++j){
			if(ar[i]<ar[j]){
				a=ar[i];
				ar[i]=ar[j];
				ar[j]=a;
			}
		}
	}
	printf("Second largest number is = %d\n",ar[1]);
	printf("Second smallest number is = %d",ar[n-2]);

	return 0;
}

