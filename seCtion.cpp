#include <iostream>
using namespace std;

int main(){
char stn;

 cout <<"Enter you want section?: ";
 cin >>stn;

 switch(stn){
    case 'A':
    cout <<"You are now in Section A!";
    break;

    case 'B':
    cout <<"You are now in Section B!";
    break;

    case 'C':
    cout <<"You are now in Section C!";
    break;

    case 'D':
    cout <<"You are now in Section D!";
    break;

    default:
    cout <<"Enter Only Letter [A-D]";

 }
    return 0;

}
