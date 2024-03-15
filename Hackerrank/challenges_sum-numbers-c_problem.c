// Your task is to take two numbers of int data type, two numbers of float data type as input and output their sum:

// Declare  variables: two of type int and two of type float.
// Read  lines of input from stdin (according to the sequence given in the 'Input Format' section below) and initialize your  variables.
// Use the  and  operator to perform the following operations:
// Print the sum and difference of two int variable on a new line.
// Print the sum and difference of two float variable rounded to one decimal place on a new line.
#include <stdio.h>


int main()
{
	int a;int b;float c; float d;
    scanf("%d %d",a,b);
    scanf("%f %f",c,d);
    a=2;
    b=3;
    c=5.4;
    d=5.1;
    
    printf("sum of the int points=",a+b);
    printf("difference of the int points=",a-b);
    printf("sum of the floating points",c+d);
    printf("difference of the floating points",c-d);
    
    return 0;
}