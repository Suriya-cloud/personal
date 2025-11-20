/*Question No: 3
Single File Programming Question
Problem Statement



Imagine you are working as a software developer for an online messaging platform. 



As part of an enhancement to the platform's messaging system, you are tasked with creating a program that performs character transformation. The program should prompt the user to enter a lowercase letter, convert it to uppercase, and display the transformed letter on the console.



Write a program to convert a lowercase letter to uppercase and display it.

Input format :
The input consists of a lowercase letter.

Output format :
The output prints the given character in uppercase.

Sample test cases :
Input 1 :
t
Output 1 :
T
Input 2 :
k
Output 2 :
K*/

// You are using GCC
#include <stdio.h>
#include <ctype.h>

int main(){
    char a;
    scanf("%c", &a);
    printf("%c", toupper(a));
}
