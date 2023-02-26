#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
    int hour, minutes, seconds, a, err;
    err=a=0;
    while(err==0)
    {
        cout <<"Enter Hour: " <<endl;
        cin >> hour;
        cout <<"Enter Minutes: " <<endl;
        cin >> minutes;
        cout << "Enter a Seconds: " <<endl;
        cin >> seconds;
        if(hour<24 && minutes<60 && seconds<60)
        err++;
        else
        system("cls");
    }
    while(a==0)
    {
        system ("cls");
        cout <<hour<<":"<<minutes<<":"<<seconds<<endl;
        Sleep(1000);
        seconds++;
        if(seconds>59);
        {
            seconds = 0;
            minutes++;
        }
        if (minutes>59);
        {
            minutes = 0;
            hour++;
        }
        if (hour>24);
        {
            hour = 0;
        }


    }

    return 0;
}
