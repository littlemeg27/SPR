//
//  SavingsAccount.cpp
//  Lab6
//
//  Created by Brenna Pavlinchak on 10/11/22.
//

#include <stdio.h>
#include <iostream>
#include <string>
#include "SavingsAccount.h"

using namespace std;

SavingsAccount::SavingsAccount(float balance):BankAccount(balance)
{

}

SavingsAccount::SavingsAccount()
{

}

void SavingsAccount::Withdraw(float amount)
{
    if(noOfWithdrawls <3)
    {
        BankAccount::Withdraw(amount);
        noOfWithdrawls++;
    }
}


