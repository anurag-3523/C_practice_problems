/*
 * PQ2_5.c
 *
 *  Created on: 11-Oct-2020
 *      Author: hp
 */

#include<stdio.h>
int main(){
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	 int i,j=0;
	 char str[]="Hello",str2[]="World";
	 char str3[20];
	 for(i=0;str[i]!='\0';++i,++j){
		 str3[j]=str[i];
	 }
	 for(i=0;str2[i]!='\0';++i,++j){
		 str3[j]=str2[i];
	 }
	 str3[j]='\0';

     printf("1st String is = %s\n",str);
     printf("2nd String is = %s\n",str2);
	 printf("concatenated string is =  %s",str3);

	 return 0;

}

