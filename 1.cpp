//Write a program to calculate the area of a rectangle. The program should ask the user for the length and width of the rectangle, and then calculate and output the area.

# include <iostream>
using namespace std ; 
int main () {

    int length , width,  area ; 

    cout << " please enter the length" ;
    cin >> length ; 
    cout << "please enter the width " ;
    cin >> width ; 
    area = length * width ;
    cout  << "the area of the rectangle is " << area << endl ;
  
}