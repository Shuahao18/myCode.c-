#include <iostream>

using namespace std;

int main()
{

    string ship[] = {"Wonder of the Seas", "Symphony of the Seas", "Oasis of the Seas", "Harmony of the Seas", "MS lona"};

    int sz = sizeof(ship) / sizeof(ship [0]);
    cout << sz;

    for(int i = 0; i < sz; i++)
    {
        cout << ship[i] << endl;
    }
    return 0;
}
