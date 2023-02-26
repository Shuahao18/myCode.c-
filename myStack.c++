#include <iostream>
#include <stack>
using namespace std;
int main()
{


    stack<int> myStack;

      myStack.push(24);
      myStack.push(2);
      myStack.push(4);
      myStack.push(17);
      myStack.push(45);

      cout << "The size of the stack is: "<< myStack.size() << endl;
      cout << "The value at the top is : "<< myStack.top() << endl;

    while(!myStack.empty()){
        cout << endl;
        cout << "The value at the top is: " <<myStack.top() << endl;
        myStack.pop();
        cout  << "Top most value is successfully removed. \n";
    }

}
