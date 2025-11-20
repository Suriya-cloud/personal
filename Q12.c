/*Input format :
The input is a single integer n, representing the numerical value provided by Alex.

Output format :
The first line prints the octal representation of the entered number in the following format: "In octal: [Octal value]".

The second line prints the hexadecimal representation of the entered number in the following format: "In hexadecimal: [Hexadecimal value]".



Refer to the sample output for formatting specifications.

Code constraints :
In the given scenario, the test cases will fall under the following constraints:

1 ≤ n ≤ 1000

Sample test cases :
Input 1 :
10
Output 1 :
In octal: 12
In hexadecimal: A
Input 2 :
134
Output 2 :
In octal: 206
In hexadecimal: 86
Input 3 :
1000
Output 3 :
In octal: 1750
In hexadecimal: 3E8
Whitelist
Set 1:
scanf
printf*/


// You are using GCC
#include <stdio.h>

int main(){
    int i;
    scanf("%d", &i);
    printf("In octal: %o\n", i);
    printf("In hexadecimal: %x", i);