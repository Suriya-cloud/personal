/*Question No: 1
Single File Programming Question
Problem Statement



You are developing a fun and interactive avatar creation tool for a gaming platform. As part of this tool, you're implementing a feature that allows users to choose the first letter of their avatar's name. This initial letter will be prominently displayed on the avatar's virtual clothing.



Write a program that takes a character as input, and prints the same.

Input format :
The input consists of a character.

Output format :
The output prints the given character.



Refer to the sample output for the exact format.

Sample test cases :
Input 1 :
A
Output 1 :
Initial letter of your Avatar is A.
Input 2 :
t
Output 2 :
Initial letter of your Avatar is t.*/


// You are using GCC
#include <stdio.h>

int main(){
    char a;
    scanf("%c", &a);
    printf("Initial letter of your Avatar is %c.", a);
}