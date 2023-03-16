#include <iostream>
#include <String>
using namespace std;

    string word;
    int num1;
    int main(){
    
    cout<<"Enter #: ";
    cin >> num1;
    cin.ignore();

    cout<<"Enter a word: ";
    getline(cin, word);
    
    cout<< endl;
    cout<< num1 ;
    cout <<" na "<< word;

    return 0;
}