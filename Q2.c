/*Question No: 2
Single File Programming Question
Problem Statement



﻿You are creating a simple digital tool to help individuals keep track of their daily expenses. The tool will allow users to input their expenses for the day and display the entered expenses for better financial awareness. 



Write a program that takes an integer as input, and prints the same.

Input format :
The input consists of an integer.

Output format :
The output prints the given integer.



Refer to the sample output for the exact format.

Sample test cases :
Input 1 :
50
Output 1 :
Your expense for the day is 50.
Input 2 :
589
Output 2 :
Your expense for the day is 589.*/

// You are using GCC
#include <stdio.h>

int main(){
    int i;
    scanf("%d", &i);
    printf("Your expense for the day is %d.", i);
}