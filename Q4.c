/*Question No: 2
Single File Programming Question
Problem Statement



In a bustling city, Alex discovered an old notebook with a mysterious message inviting them to embark on a journey celebrating the power of human connection. Intrigued, he decided to create a program that prompts individuals to share their name and age, fostering a sense of belonging and celebrating their individuality.



Write a program that prompts the user to enter their name and age, and displays a heartfelt greeting message on the console, with the entered name and age.

Input format :
The first line of input consists of string representing the name of the individual.

The second line of input is an integer representing the age of the individual.

Output format :
The output should print a formatted welcome message, incorporating the provided name and age.



The output format should be: "Hello, <name>! You are <age> years old. Welcome to our journey of human connection."



Refer to the sample output for the formatting specifications.

Code constraints :
The name can have a maximum length of 249 characters.

The age is a positive integer.

Sample test cases :
Input 1 :
John
25
Output 1 :
Hello, John! You are 25 years old. Welcome to our journey of human connection.
Input 2 :
Janice
64
Output 2 :
Hello, Janice! You are 64 years old. Welcome to our journey of human */

// You are using GCC
#include <stdio.h>

int main(){
    char name[249];
    int age;
    
    scanf(" %[^\n]", &name);
    scanf("%d", &age);
    
    printf("Hello, %s! You are %d years old. Welcome to our journey of human connection.", name, age);
}
