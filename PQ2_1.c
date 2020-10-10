/*
 * PQ2_1.c
 *
 *  Created on: 10-Oct-2020
 *      Author: hp
 */
#include<stdio.h>
int main(){
	 int arr[]={5,10,30,20,25};
	 int n=sizeof(arr)/sizeof(arr[0]);
	 for(int i=1;i<n;++i)
	 {
		 if(arr[0]<arr[i])
		 {
			 arr[0]=arr[i];
		 }

	 }
	 printf("Largest Number in Array is = %d",arr[0]);
	 return 0;
}
