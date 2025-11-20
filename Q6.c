/*Question No: 2
Single File Programming Question
Problem Statement



Yazhan is working on a program to display scooter details. He needs a tool that can take the model name and mileage of a scooter as input and then print a message showing the scooter’s model and its mileage.



Help Yazhan by writing the code that captures this information and displays it in the required format.

Input format :
The first line consists of a string representing the model name of the scooter. The model name may contain spaces.

The second line consists of an integer representing the mileage of the scooter in kilometers per hour (km/hr).

Output format :
The output should print a formatted string indicating the model name and mileage of the scooter.

The output format should be: "The scooter <model_name> gives mileage of <mileage> km/hr."



Refer to the sample output for the formatting specifications.

Code constraints :
The model name can have a maximum length of 250 characters.

1 ≤ mileage ≤ 103

Sample test cases :
Input 1 :
TVS Scooty Zest
62
Output 1 :
The scooter TVS Scooty Zest gives mileage of 62 km/hr.
Input 2 :
Vespa VXL 125
40
Output 2 :
The scooter Vespa VXL 125 gives mileage of 40 km/hr.*/


// You are using GCC
#include <stdio.h>

int main(){
    char a[250];
    int i;
    scanf("%[^\n]", &a);
    scanf("%d", &i);
    printf("The scooter %s gives mileage of %d km/hr.", a, i);
    
}