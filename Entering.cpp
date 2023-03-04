#include <iostream>
using namespace std;

int  main(){
    std:: string name;
    int age;

    std::cout <<"What was your name?: ";
    std::cin >> name;

    std::cout <<"what was your age?: ";
    std ::cin >>age;

    std::cout <<"Good to Know! "<<name <<'\n';
    std::cout <<"you are "<<age<< " years old Keep Going!"<<'\n' ;
  
  if(age >=18){
    cout << "You are Eligable To Enter";
    cin >>age; 
    
  }
  else {
    cout <<"Your are Not Eligable to Enter";
    cin >>age;
   
  }

    return 0;
}