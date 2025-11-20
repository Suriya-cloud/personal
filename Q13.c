/*Question No: 2
Single File Programming Question
Problem Statement



Singam, a diligent token counter at a cinema theatre, needs a program to track the number of tokens issued. Design a program that takes input as the tokens issued by Singam and output displays the okens.

Input format :
The input consists of an unsigned integer representing the number of tokens issued by Singam.

Output format :
The output displays the message "Number of tokens: " followed by the tokens.



Refer to the sample output for the formatting specifications.

Code constraints :
0 <= Tokens <= 4,294,967,295

Sample test cases :
Input 1 :
145698
Output 1 :
Number of tokens: 145698
Input 2 :
2751
Output 2 :
Number of tokens: 2751
Input 3 :
0
Output 3 :
Number of tokens: 0*/



// You are using GCC
#include <stdio.h>

int main(){
    unsigned i;
    scanf("%u", &i);
    printf("Number of tokens: %u", i);
}