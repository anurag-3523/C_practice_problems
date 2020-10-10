
/*
 * PQ2_3.c
 *
 *  Created on: 10-Oct-2020
 *      Author: hp
 */

#include<stdio.h>
int main(){
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	int a,b[]={5,10,15,20,25};
	int flag=0;
	int n=sizeof(b)/sizeof(b[0]);
	for(int i=0; i<n;i++){
		printf("%d,",b[i]);
	}
	printf("\nEnter the element want to deleted = ");
	scanf("%d",&a);
	for(int i=0; i<n; i++){
		if(a==b[i]){
			for(int j=i;j<n;j++){
				b[j]=b[j+1];

			}
			for(int j=0; j<n;j++){
				b[n-1]=0;
				flag=1;
				printf("%d,",b[j]);
			}
		}
	}
	if(flag==0){
		printf("Error");
	}

return 0;
}
