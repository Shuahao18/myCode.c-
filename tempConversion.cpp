#include <iostream>
using namespace std;

int main(){
double temp;
char unit;
cout <<" *********************Temperature conversion************************\n";

cout <<"F = Fahrenheit\n";
cout <<"C = Celsius\n";
cout <<"Enter a unit of Temperature C or F: ";
cin >> unit;
cout <<"*********************************************************************\n";

if(unit == 'F' || unit == 'f'){
    cout <<"Enter a temperature in fahrenheit: ";
    cin >> temp;

    temp = (1.8 * temp) + 32.0;
    cout << "Temperature is " <<temp <<" Celsius\n";
}
else if(unit =='C' || unit == 'c'){
    cout  <<"Enter a temperature in Celsius: ";
    cin >> temp;

    temp =(temp -32) / 1.8;
    cout << "Temperature is  "<< temp <<" Fahrenheit\n";
}

else {
    cout << "Please enter C and F!";
}

cout << "*********************************************************************";

    return 0;
}