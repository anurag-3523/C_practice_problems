/*A palindrome is a number or a text phrase that reads the same backward
as forward. For example, each of the following five-digit integers is a palindrome: 12321,
55555, 45554 and 11611. Write a program that reads in a five-digit integer and determines whether
or not it’s a palindrome.*/

#include <stdio.h>
int main() {
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

    int n,a,b,c,d,e;

    printf( "Enter one 5 digit number: \n" );
    scanf( "%d", &n );
    a = n / 10000;
    b = n / 1000 % 10;
    c = n / 100 % 10;
    d = n / 10 % 10;
    e = n % 10;

    if ( a == e && b == d ) {
        printf( "Its a Palindrome number!\n" );
        }
    if ( a != e || b != d ) {
        printf( "Its Not a palindrome number.. :(\n" );
        }
  return 0;
  }
