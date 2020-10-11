/*
 * PQ2_6.c
 *
 *  Created on: 11-Oct-2020
 *      Author: hp
 */

#include<stdio.h>
int main(){
	for(int i=1;i<=5;++i)
	{
		for(int j=5;j>=i;--j)
		{
			printf("%d ",j);
		}
		printf("\n");


	}
	return 0;
}
