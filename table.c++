# include <iostream>
using namespace std;

int main()
{

    int table = 0;
    int result = 0;
 
    cout << "Table:";
    cin >> table; 
    cout << endl;
    for(int i = 1; i<=10; i++)
    {
        result *= table;
        cout << table << "*" << i << "=" << result << endl;
    }
    cout << endl;
 return 0;
}
 