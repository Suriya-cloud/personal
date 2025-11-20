/*Question No: 2
Single File Programming Question
Problem Statement



John is eager to create a simple program for gathering and presenting personal details. Write a program that prompts users to provide the initial letter of their name (a character), age (an integer), and height in meters (a floating-point number).



After collecting this information, display it in a well-organized format.

Input format :
The input consists of three space-separated values, representing the first letter of the name (character), age (integer), and height in meters (floating point value), separated by spaces.

Output format :
The first line prints the initial of the name in the format "Initial: [initial]"

The second line prints the age in the format "Age: [age] years"

The third line prints the height of the person, rounded to two decimal places, in the format "Height: [height] meters"



Refer to the sample output for formatting specifications.

Code constraints :
In the given scenario, the test cases will fall under the following constraints:

10 ≤ Age ≤ 50

0.01 ≤ Height ≤ 1.80

Sample test cases :
Input 1 :
A 10 1.358
Output 1 :
Initial: A
Age: 10 years
Height: 1.36 meters
Input 2 :
b 25 1.70
Output 2 :
Initial: b
Age: 25 years
Height: 1.70 meters
Input 3 :
Z 28 1.80
Output 3 :
Initial: Z
Age: 28 years
Height: 1.80 meters
Code Size : 1024 kb
Whitelist
Set 1:
int
Set 2:
char
Set 3:
float*/


// You are using GCC
#include <stdio.h>

int main(){
    char a;
    int b;
    float c;
    scanf("%c %d %f", &a, &b, &c);
    printf("Initial: %c\n", a);
    printf("Age: %d years\n", b);
    printf("Height: %.2f meters", c);
    
}

