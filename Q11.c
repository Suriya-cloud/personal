/*Question No: 5
Single File Programming Question
Problem Statement



Reo, a diligent student, is working on a program to keep track of student information including name, marks, and grade. Help Reo develop a program that takes input for a student's name, marks, and grade, and then prints a report format

Input format :
The first line of input consists of a string, representing the name of the student.

The second line of input consists of a float value, representing the mark of the student.

The third line of input consists of a character, representing the grade of the student.

Output format :
The output prints the given name, mark(rounded up to 2 decimal places), and grade of the student in the following format:

"Name: <name>

Mark: <marks>

Grade: <grade>"



Refer to the sample output for the formatting specifications.

Code constraints :
The name can have a maximum length of 249 characters.

0.0 <= marks <= 100.0

The grade is a single character.

Sample test cases :
Input 1 :
Alan
56.5
D
Output 1 :
Name: Alan
Mark: 56.50
Grade: D
Input 2 :
Bob
98.35
A
Output 2 :
Name: Bob
Mark: 98.35
Grade: A*/


// You are using GCC
#include <stdio.h>

int main(){
    char name[100];
    float mark;
    char grade;
    
    scanf("%[^\n]", name);
    scanf("%f", &mark);
    scanf(" %c", &grade);
    printf("Name: %s\n", name);
    printf("Mark: %.2f\n", mark);
    printf("Grade: %c", grade);
}