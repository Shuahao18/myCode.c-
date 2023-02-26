#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double amount, balance = 0;
    int choice;
    
    cout << fixed << setprecision(2); // money 
do {
    // display menu 
    cout <<"\n₱₱₱₱₱ Atm Machine ₱₱₱₱₱\n\n";
    cout <<"1. Balance\n";
    cout <<"2. Deposit\n";
    cout <<"3. Withdrawal\n";
    cout <<"4. Quit\n";
    cout <<"\nEnter Your Selection: ";

    // Get Selection 
             cin >> choice;

    // Evaluate Option 
    switch (choice) {
    case 1: 
            cout << "View Your Balance: ₱" << balance;
        break;
    case 2:
             cout << "How Much Your Deposit ? ₱";
             balance+=amount;
        break;
    case 3:
            cout << "How Much You Want To Withdraw ?₱ " << endl;
             cin >> amount;
        if (balance - amount >= 0)
            balance -= amount;
        else 
             cout << "Inufficient Balance" << endl;
        break;
    case 4:
            cout << "Godbless\n";
            break;

    default:
             cout << "Invalid Selection\n";

        
    }
} while (choice != 4);
        choice+= amount;

    
    return 0;
}