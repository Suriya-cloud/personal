/*Question No: 4
Single File Programming Question
Problem Statement



Alex is working on a cryptography project where he needs to perform operations on ASCII values of characters. He wants to write a program that takes a character as input and converts it into its corresponding ASCII value. 



Help Alex in implementing the program.

Input format :
The input consists of a character.

Output format :
The output prints the ASCII value of the given character.



Refer to the sample output for the exact format.

Sample test cases :
Input 1 :
A
Output 1 :
ASCII value of 'A' is 65.
Input 2 :
a
Output 2 :
ASCII value of 'a' is 97.*/


// You are using GCC
#include <stdio.h>

int main(){
    char a;
    scanf("%c", &a);
    printf("ASCII value of '%c' is %d.", a, a);
}