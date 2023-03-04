#include <iostream>
using namespace std;

int main(){

char op;
int num1, num2;
double result;

cout << "-------------------Calculator---------------------"<< '\n';

cout <<"Enter operation you want [+ - * /]: ";
cin >>op;

cout <<"Enter #1: ";
cin >>num1;

cout <<"Enter #2: ";
cin >>num2;

switch(op){
    case '+':
    result = num1 + num2;
    cout <<'\n'<<"result: "<< result;
    break;

    case '-':
    result = num1 - num2;
    cout <<'\n'<<"result: "<< result;
    break;

    case '*':
    result = num1 * num2;
    cout <<'\n'<<"result: "<< result;
    break;

    case '/':
    result = num1 / num2;
    cout <<'\n'<<"result: "<< result;
    break;
}

    return 0;

}