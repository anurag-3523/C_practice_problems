/*Write a program that inputs three different integers from the keyboard,
 * then prints the sum, the average, the product, the smallest and the largest of these numbers.*/

#include<stdio.h>
int main(){
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	int num1,num2,num3,sum,product;
	float average;
	printf("Enter three integers\n");
	scanf("%d",&num1);
	scanf("%d",&num2);
	scanf("%d",&num3);

	sum=num1+num2+num3;
	average = (float)(num1 + num2 + num3)/3;
	product=num1*num2*num3;

	printf("Sum = %d\n",sum);
	printf("average = %.2f\n",average);
	printf("product = %d\n",product);

	if((num1<num2) && (num1<num3))
		printf("Smallest number is = %d\n",num1);
	else if(num1<num2)
		printf("Smallest number is = %d\n",num2);
	else
		printf("Smallest number is = %d\n",num3);
	if((num1>num2) && (num1>num3))
		printf("Largest number is = %d\n",num1);
	else if(num1>num2)
		printf("Largest number is = %d\n",num2);
	else
		printf("Largest number is = %d\n",num3);
	return 0;

}
