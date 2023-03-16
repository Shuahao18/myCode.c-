#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(){
    char v, a, r, c, q;
    std::string choice;

    while (true)
    {
        cout <<"*********************Menu**********************\n";
        cout <<"1 view, 2 add, 3 remove, 4 clear, 5 quit"<<'\n';
        getline(cin, choice);
        

        if(stoi(choice) == 1){
            if(v){
                cout <<"Viewing the list";
                cin >>choice;
            } 
            else{
                cout <<"(no tasks)";

            }
        }
        else if(stoi(choice) == 2){
            cout <<"To-DO-List";

        }
        else if(stoi(choice) == 3){
            cout <<"Removing to the list";
        }
        else if(stoi(choice) == 4){
            cout <<"Clearing from the list";
        }
        else if(stoi(choice) == 5){
            cout <<"Quiting...";
        }
        else {
            cout <<"Enter only # 1-5";
        }
       
      

    }


return 0;
}
//"<<"2 add "<<"3 remove "<<"4 clear "<<"5 quit ";