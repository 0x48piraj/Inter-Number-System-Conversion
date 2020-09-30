/*
Author      : Mohan kumar
Synopsis    : "Swaps two variable using third variable"
How2Compile : gcc swap2var3.c -o swap2var3.out
Usage       : ./swap2var.out
gcc version : 5.4.0
*/
//without using third variable

#include<stdio.h>
int main()
{
	int a,b,c;
	printf ("enter two variables\n",a,b);
	scanf ("%d %d",&a,&b);
    printf("Before Swapping\nFirst variable = %d\nSecond variable = %d\n", a, b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf ("After Swapping\nFirst variable = %d\nSecond variable = %d\n", a, b);
	return 0;
}
