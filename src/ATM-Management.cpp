#include <iostream>
#include <stdlib.h>
#include <string.h>

using namespace std;

class Bank {

private:

    string name;

    long long accnumber;

    char type[10];

    long long amount = 0;

    long long tot = 0;

public:

    void setvalue()

    {

        cout << "Enter name:\n";

        cin.ignore();

        getline(cin, name);

        cout << "Enter account number:\n";

        cin >> accnumber;

        cout << "Enter accouny type:\n";

        cin >> type;

        cout << "Enter balance:\n";

        cin >> tot;

    }

    void showdata()

    {

        cout << "Name:" << name << endl;

        cout << "Account number:" << accnumber << endl;

        cout << "Account type:" << type << endl;

        cout << "Balance:" << tot << endl;

    }

    void deposit()

    {

        cout << "\nEnter amount to deposit:\n";

        cin >> amount;

    }

    void showbal()

    {

        tot = tot + amount;

        cout << "\nTotal balance: " << tot;

    }

    void withdrawl()

    {

        int a, avai_balance;

        cout << "Enter amount to withdraw:\n";

        cin >> a;

        avai_balance = tot - a;

        cout << "Available balance:" << avai_balance;

    }
};

int main()
{

    Bank b;

    int choice;

    while (1) {

        cout << "\n Welcome to CodeMaster7000's ATM."

             << "\n\n";

        cout << "Select operation\n";

        cout << "\t1. Enter name/Account "

             << "number/Account type\n";

        cout << "\t2. Balance enquiry\n";

        cout << "\t3. Deposit\n";

        cout << "\t4. Balance Information\n";

        cout << "\t5. Withdraw\n";

        cout << "\t6. Cancel\n";

        cin >> choice;

        switch (choice) {

        case 1:

            b.setvalue();

            break;

        case 2:

            b.showdata();

            break;

        case 3:

            b.deposit();

            break;

        case 4:

            b.showbal();

            break;

        case 5:

            b.withdrawl();

            break;

        case 6:

            exit(1);

            break;

        default:

            cout << "\nInvalid input.\n";

        }

    }
}
