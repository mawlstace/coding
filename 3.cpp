//Write a program that converts temperatures between Celsius and Fahrenheit. The program should ask the user for a temperature in either Celsius or Fahrenheit, and then convert it to the other scale.

# include <iostream>
using namespace std ; 

int main ()
{
char choices  ;
int temperature  , number; 
cout << " please choices between C or F " ; 
cin >> choices ; 
cout << " please enter the number to convert " ;
cin >> number ;  
if (choices =='c' || choices =='C' )
    
    {
        float temperature = (number - 32) * 5 / 9;
        cout << number << " Celsius is equal to " << temperature << " Fahrenheit" << endl;
    }

else if (choices == 'F' || choices == 'f') {
    float temperature = (number * 9 / 5) + 32;
    cout << number << " Celsius is equal to " << temperature << " Fahrenheit" << endl;
    }

else {
        cout << "Invalid choice. Please enter 'C' or 'F'" << endl;
    }
  return 0;

}
