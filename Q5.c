/*Question No: 1
Single File Programming Question
Problem Statement



You're developing a straightforward app that enables users to share short notes with each other. The app aims to facilitate quick information exchange for daily tasks, reminders, and updates. Your goal is to create a user-friendly system for users to input and display short notes.



Write a program that takes a string as input, and prints the same string.

Input format :
The input consists of a string.

Output format :
The output prints the given string.

Sample test cases :
Input 1 :
Hello, Don't forget to take your medicines.
Output 1 :
Hello, Don't forget to take your medicines.
Input 2 :
Hi, Welcome to C Programming Lab!
Output 2 :
Hi, Welcome to C Programming Lab!*/


// You are using GCC
#include <stdio.h>

int main(){
    char c[100];
    scanf("%[^\n]", &c);
    printf("%s", c);
    return 0;
}