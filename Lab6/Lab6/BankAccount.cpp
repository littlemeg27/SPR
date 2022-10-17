//
//  BankAccount.cpp
//  Lab6
//
//  Created by Brenna Pavlinchak on 10/11/22.
//

#include <stdio.h>
#include <iostream>
#include <string>
#include "BankAccount.h"

using namespace std;

BankAccount::BankAccount()
{
    this -> balance = 0;
}

BankAccount::BankAccount(float bankBalance)
{
    this -> balance = bankBalance;
}

void BankAccount::Withdraw(float bankAmount)
{
    if(balance - bankAmount >= 0)
    {
        this -> balance -= bankAmount;
        noOfWithdrawls++;
    }
    else
    {
        cout << "_Insufficient funds_" << endl;
    }
}

void BankAccount::Deposit(float bankAmount2)
{
    this -> balance += bankAmount2;
}

float BankAccount::GetBalance() const
{
    return balance;
}


