/*File Name:Question 2
Author: Kolins
Date:26.5.22
Description:Write a C program to check whether a given number is even or odd?*/

#include <stdio.h>

int main()
{
int num;
printf("Enter a integer:");
scanf("%d", &num);

(num % 2 == 0) ? printf("%d is Even.", num) : printf("%d is Odd.", num);

  return 0;
}