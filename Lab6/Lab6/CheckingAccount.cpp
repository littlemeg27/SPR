//
//  CheckingAccount.cpp
//  Lab6
//
//  Created by Brenna Pavlinchak on 10/11/22.
//

#include <stdio.h>
#include <iostream>
#include <string>
#include "CheckingAccount.h"

using namespace std;

CheckingAccount::CheckingAccount(float balance):BankAccount(balance)
{
    
}

CheckingAccount::CheckingAccount()
{

}

void CheckingAccount::Withdraw(float checkingAmount)
{
    if(noOfWithdrawls > 10)
    {
        BankAccount::Withdraw(checkingAmount + 5);
        noOfWithdrawls++;
    }
    else
    {
        BankAccount::Withdraw(checkingAmount);
        noOfWithdrawls++;
    }
}
