/*
 * PQ2_2.c
 *
 *  Created on: 10-Oct-2020
 *      Author: hp
 */

#include<stdio.h>
int main(){
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);
	int i=0;
	int flag=0;
	char str1[20];
	char str2[20];
	printf("Enter 1st string :- ");
	scanf("%s",str1);
	printf("Enter 2nd string :- ");
	scanf("%s",str2);
	while(str1[i]!='\0' || str2[i]!='\0')
	{
		if(str1[i]==str2[i])
		{
			i++;

		}
		else if((str1[i]=='\0' && str2[i]!='\0')
				|| (str1[i]!='\0' && str2[i]=='\0')
				|| str1[i]!=str2[i] )
		{
			flag=1;
			printf("String is not equal");
			break;
		}
	}
	if(flag==0){
		printf("String is equal");
	}

	return 0;
}
