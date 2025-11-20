/*Question No: 1
Single File Programming Question
Problem Statement



Sarah went on a shopping spree and bought some items from her favorite store. She kept track of the total cost of her purchases using a decimal value. 



However, when she wanted to split the bill with her friends, they preferred to have the amount as a whole number. To accommodate their request, help Shara to round off them to an integer.



Write a program that takes a decimal as input and prints it as an integer.

Input format :
The input consists of a decimal number.

Output format :
The output prints the given value as an integer in the format "The converted integer value is <integer>".



Refer to the sample output for the formatting specifications.

Sample test cases :
Input 1 :
45.33
Output 1 :
The converted integer value is 45.
Input 2 :
150.75
Output 2 :
The converted integer value is 150.*/

// You are using GCC
#include <stdio.h>

int main(){
    float i;
    scanf("%f", &i);
    
    printf("The converted integer value is %d.", (int)i);
}