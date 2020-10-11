/*
 * PQ2_8.c
 *
 *  Created on: 11-Oct-2020
 *      Author: hp
 */
/*
 Write a program that stores the ID and the balance of a customer in two different arrays.
Takes an ID number from the user and then checks the ID against a list of customers in the
database. If the customer exists, it uses that array element to check their current balance,
and warns the user if the balance is more than 100.
 */
#include<stdio.h>
int main(){
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	int id[]={101,102,103,104,105,106};
	int bal[]={100,98,48,300,200,50};
	int i,a,flag=0,n=sizeof(id)/sizeof(id[0]);
	printf("Enter The ID of a customer\n");
	scanf("%d",&a);
	for(i=0;i<n;++i){
		if(a==id[i]){

			flag=1;
			printf("Current balance is = %d\n",bal[i]);

			if(bal[i]>100){
				printf("Warning balance is more then 100 ");
			}
		}
	}
	if(flag==0){
		printf("Customer not exist");
	}


return 0;
}
