#include <iostream>
using namespace std;

int balance = 0, deposite = 0, withdrow = 0, password = 0000, choice = 0;

void wellcome()
{
    cout << "*******wellcome**********" << endl;
    cout << "Please Enter your choice " << endl;
    cout << " 1- Balance " << endl;
    cout << " 2- deposite " << endl;
    cout << " 3- Withdrow " << endl;
    cout << " 4- Exit " << endl;
    cout << "************************" << endl;
}

void prossece()
{

    cout << " Enter password ";
    cin >> password;

    do
    {

        if (password == 222)
        {

            switch (choice)
            {
            case 1:
                cout << " Your amount is " << balance << endl;
                cout << " Enter your choice or 4 to Exit ";
                cin >> choice;
                break;
            case 2:
                cout << " Enter your deposite : " << endl;
                cin >> deposite;
                balance += deposite;
                cout << "your New Balance is " << balance << endl;
                cout << " Enter your choice or 4 to Exit ";
                cin >> choice;
                break;
            case 3:
                cout << " Enter your withdrow : " << endl;
                cin >> withdrow;
                balance -= withdrow;
                cout << "your New Balance is " << balance << endl;
                cout << " Enter your choice or 4 to Exit ";
                cin >> choice;
                break;
            default:
                cout << " Please Enter choice or 4 for Exit " << endl;
                cin >> choice;

            } // end of switch
        }
        else if (password != 222)
        {
            char option;
            cout << " Wrong password! try again ? (Y) or (N) ";
            cin >> option;
            if (option == 'N' || option == 'n')
            {
                cout << " thanx for using " << endl;
                choice = 4;
            }
            else if (option == 'Y' || option == 'y')
            {
                cout << "Enter password " << endl;
                cin >> password;
            }
        }

    } while (choice != 4); // end of while
}

int main()
{

    wellcome();
    prossece();

    return 0;
}