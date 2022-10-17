//
//  main.cpp
//  Lab6
//
//  Created by Brenna Pavlinchak on 10/11/22.
//

#include <iostream>
#include <iomanip>
#include <ctime>
#include <cstdlib>

#include "BankAccount.h"
#include "SavingsAccount.h"
#include "CheckingAccount.h"
#include "SavingsAccount.h"
#include "CreditAccount.h"

using namespace std;

int menu()
{
    int choice;
    
    while(true)
    {
        cout << "1.Deposit :" << endl;
        cout << "2.Withdraw " << endl;
        cout << "Enter Choice :";
        cin >> choice;
        
        if(choice == 1 || choice == 2)
        {
            break;
        }
        else
        {
            cout << "* Invalid.Must be either 1 or 2 *" << endl;
        }
    }
    return choice;
}

int main(int argc, const char * argv[])
{
    srand(time(NULL));
    int choice;
    double amount;
    SavingsAccount savings;
    CheckingAccount checking;
    CreditAccount credit;
    
    while(true)
    {
        cout << "\n:: MENU ::" << endl;
        cout << "1. Savings Account" << endl;
        cout << "2. Checking Account" << endl;
        cout << "3. Credit Account" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter Choice :";
        cin >> choice;
        
        switch(choice)
        {
            case 1:
            {
                choice = menu();
                switch(choice)
                {
                    case 1:
                    {
                        cout <<"Enter amount to deposit :$";
                        cin >> amount;
                        savings.Deposit(amount);
                        cout <<"Your Balance :$"<< savings.GetBalance() << endl;
                        break;
                    }
                    case 2:
                    {
                        cout << "Enter amount to withdraw :$";
                        cin >> amount;
                        savings.Withdraw(amount);
                        cout << "Your Balance :$"<<savings.GetBalance() << endl;
                        break;
                    }
                }
                continue;
            }
            case 2:
            {
                choice = menu();
                switch(choice)
                {
                    case 1:
                    {
                        cout <<"Enter amount to deposit :$";
                        cin >> amount;
                        checking.Deposit(amount);
                        cout << "Your Balance :$" << checking.GetBalance() << endl;
                        break;
                    }
                    case 2:
                    {
                        cout << "Enter amount to withdraw :$";
                        cin >> amount;
                        checking.Withdraw(amount);
                        cout << "Your Balance :$" << checking.GetBalance() << endl;
                        break;
                    }
                }
                continue;
            }
            case 3:
            {
                int shoppingBill = rand()%(5) + 1;
                cout << "Your Shopping Amount is :$" << shoppingBill << endl;
                credit.Withdraw(shoppingBill);
                cout << "You Limit in Credit Account :$" << credit.getLimit() << endl;
                continue;
            }
            case 4:
            {
                break;
            }
            default:
            {
                cout << "* Invalid Choice *" << endl;
                continue;
            }
        }
        break;
    }
    return 0;
}
