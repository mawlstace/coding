//Write a program to calculate the sum and average of three numbers. The program should ask the user for three numbers, calculate their sum and average, and output the results.

# include <iostream>
using namespace std ; 

int main()
{
    int a,  x , y ,z  ;
    double b ; 
    cout  << "please enter the first number " << endl ; 
    cin >> x ;
    cout  << "please enter the second number " << endl ; 
    cin >> y ;
    cout  << "please enter the third number " << endl ; 
    cin >> z ;
    a = x+y+z ; 
    b = (x+y+z)/3 ; 
    cout  << " the sum of the 3 numbers is :" << a << endl ; 
    cout  << " the average of the 3 numbers is:" << b << endl ; 
}