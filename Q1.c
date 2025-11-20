/*Question No: 1
Single File Programming Question
A university wants to develop a student record system where students provide their basic details. You are required to write a C program that collects and prints the following information for a student:

Roll Number (Integer)

GPA (Float)

CGPA (Double)

First Letter of Name (Character)

Total Marks (Long Integer)

Age (Short Integer)

Enrollment Number (Unsigned Integer)

Total Credits Earned (Long Long Integer)

Scholarship Amount (Unsigned Long Integer)

Student's Full Name (String)

The system should accept valid values and display them correctly.

Input format :
<int> (Roll Number)

<float> (GPA)

<double> (CGPA)

<char> (First Letter of Name)

<long> (Total Marks)

<short> (Age)

<unsigned int> (Enrollment Number)

<long long> (Total Credits Earned)

<unsigned long> (Scholarship Amount)

<string> (Student's Full Name)



Output format :
The program should display the student's details as follows:

Student Record:

Roll Number: <int>

GPA: <float>

CGPA: <double>

First Letter of Name: <char>

Total Marks: <long>

Age: <short>

Enrollment Number: <unsigned int>

Total Credits Earned: <long long>

Scholarship Amount: <unsigned long>

Full Name: <string>



Code constraints :
Valid Ranges: Ensures input values remain within their respective limits.

Edge Cases: Covers minimum, maximum, and zero values.

Negative Values Handling: Checks for invalid inputs.

Floating-Point Precision: Validates how decimal values are handled.

String Input Handling: Ensures special characters and spaces in names are properly captured.

Sample test cases :
Input 1 :
101  
3.75  
8.4321  
A  
50000  
22  
20231234  
145  
50000  
JohnDoe  
Output 1 :
Roll Number: 101
GPA: 3.750000
CGPA: 8.432100
First Letter of Name: A
Total Marks: 50000
Age: 22
Enrollment Number: 20231234
Total Credits Earned: 145
Scholarship Amount: 50000
Full Name: JohnDoe  
Input 2 :
1  
0.00  
0.0000  
X  
0  
18  
1  
0  
0  
A  
Output 2 :
Roll Number: 1
GPA: 0.000000
CGPA: 0.000000
First Letter of Name: X
Total Marks: 0
Age: 18
Enrollment Number: 1
Total Credits Earned: 0
Scholarship Amount: 0
Full Name: A  */


#include <stdio.h>

int main(){
    int rolNumber;
    float gpa;
    double cgpa;
    char fl;
    long totalMarks;
    short age;
    unsigned Enroll;
    long long totalc;
    unsigned long ScholarAmount;
    char fullname[100];
    
    scanf("%d", &rolNumber);
    scanf("%f", &gpa);
    scanf("%lf", &cgpa);
    scanf("  %c", &fl);
    scanf("%ld", &totalMarks);
    scanf("%hd", &age);
    scanf("%u", &Enroll);
    scanf("%lld", &totalc);
    scanf("%lu", &ScholarAmount);
    scanf(" %[^\n]", &fullname);
    
    printf("Roll Number: %d\n", rolNumber);
    printf("GPA: %f\n", gpa);
    printf("CGPA: %lf\n", cgpa);
    printf("First Letter of Name: %c\n", fl);
    printf("Total Marks: %ld\n", totalMarks);
    printf("Age: %hd\n", age);
    printf("Enrollment Number: %u\n", Enroll);
    printf("Total Credits Earned: %lld\n", totalc);
    printf("Scholarship Amount: %lu\n", ScholarAmount);
    printf("Full Name: %s", fullname);
}