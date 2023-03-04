#include <iostream>


 namespace first{
    int y = 16;
 }
 namespace second{
   int y = 12;
 }

 namespace third{
    int y = 2004;
 } 
int main(){

    int y = 18;
   std::cout << second::y;
    return 0;
}