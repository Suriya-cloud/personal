/*Question No: 1
Single File Programming Question
Problem Statement



In a school, each student is identified by a unique combination of a class section and a roll number. 



Write a program that takes input for the class section (either uppercase or lowercase character) and the roll number (an integer). The program should then output a message indicating the student's roll number in the specified class section.

Input format :
The first line of input is a character c, representing the class section (A-Z or a-z).

The second line of input is an integer d, representing the roll number.

Output format :
The output displays a message indicating the roll number and class section in the format: "Roll number d in Section c".



Refer to the sample output for formatting specifications.

Code constraints :
In this scenario, the test cases will fall under the following constraints:

1 ≤ d ≤ 50

The class section must be a letter in either uppercase or lowercase.

Sample test cases :
Input 1 :
A
30
Output 1 :
Roll number 30 in Section A
Input 2 :
D
50
Output 2 :
Roll number 50 in Section D
Input 3 :
z
25
Output 3 :
Roll number 25 in Section z
Whitelist
Set 1:
char
Set 2:
int*/


// You are using GCC
#include <stdio.h>

int main(){
    char a;
    int b;
    scanf("%c %d", &a, &b);
    printf("Roll number %d in Section %c", b, a);
    

    
}
