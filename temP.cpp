#include <iostream>
using namespace std;

int main(){

int temp;
bool sunny = false;

cout <<"Enter a temperature: ";
cin >>temp;

if(temp <= 0 || temp >= 35){
    cout <<"It is Hot to Go Outside"<<'\n';
}
else{
    cout <<"It is Good to Go Outside!"<<'\n';
} 

if(!sunny){
    cout <<"It is Cloudy!";
}
else{
    cout <<"It is Sunny!";
}
    return 0;
}