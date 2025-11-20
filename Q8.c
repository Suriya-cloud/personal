/*Question No: 2
Single File Programming Question
Problem Statement:



In a simulation system used by a software engineering team, you need to track and display the simulated "memory addresses" associated with different variables.



This simulation includes three types of input data: an integer, a floating-point number, and a character. The goal is to print these simulated locker addresses before and after performing simple operations on the integer and character variables.

Input format :
The input consists of three separate lines.

Each line contains one value: an integer as i, a float as j, and a character as k respectively.

Output format :
The output consists of the following lines:



"Original locker address in i = <value of i>"

"Original locker address in j = <value of j (with two decimal places) >"

"Original locker address in k = <ASCII value of k>"

"New locker address in i = <value of i + 1>"

"New locker address in k = <ASCII value of k + 1>"



Refer to the sample output for formatting specifications.

Code constraints :
1 ≤ i ≤ 109

0.0 ≤ j ≤ 109.00

a ≤ k ≤ z

Sample test cases :
Input 1 :
4
2.6
a
Output 1 :
Original locker address in i = 4
Original locker address in j = 2.60
Original locker address in k = 97
New locker address in i = 5
New locker address in k = 98
Input 2 :
2
0.5
f
Output 2 :
Original locker address in i = 2
Original locker address in j = 0.50
Original locker address in k = 102
New locker address in i = 3
New locker address in k = 103*/

// You are using GCC
#include <stdio.h>
#include <ctype.h>

int main(){
    int i;
    float j;
    char k;
    scanf("%d", &i);
    scanf(" %f ", &j);
    scanf(" %c", &k);
    printf("Original locker address in i = %d\n", i);
    printf("Original locker address in j = %.2f\n", j);
    printf("Original locker address in k = %d\n", k);
    printf("New locker address in i = %d\n", i+1);
    printf("New locker address in k = %d\n", k+1);
}