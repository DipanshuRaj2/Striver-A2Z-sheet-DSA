/*Prasad is developing a program to convert a given integer into its corresponding Excel column name. He wants to create a function that takes an integer as input and returns its corresponding Excel column name. In Excel, column names are represented using capital letters from A to Z, and then AA, AB, and so on. For example, 1 corresponds to "A", 2 corresponds to "B", 26 corresponds to "Z", 27 corresponds to "AA", and so forth.



Prasad's function should handle the conversion accurately. Can you help Prasad write this program?



Note: Ensure that the returned string is in the upper case.

Input format :
The input consists of a single integer n, representing the column number.

Output format :
The output consists of a string representing the Excel column name corresponding to the given column number.



Refer to the sample output for the formatting specifications.

Code constraints :
1 ≤ n ≤ 5000

Sample test cases :
Input 1 :
956
Output 1 :
AJT
Input 2 :
26
Output 2 :
Z
Input 3 :
52
Output 3 :
AZ*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n = 956 % 26;
    cout<<n;

    return 0;
}