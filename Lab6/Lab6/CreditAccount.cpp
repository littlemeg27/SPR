//
//  CreditAccount.cpp
//  Lab6
//
//  Created by Brenna Pavlinchak on 10/11/22.
//

#include <stdio.h>
#include <iostream>
#include <string>
#include "CreditAccount.h"

using namespace std;

const double CreditAccount::LIMIT=40;

CreditAccount::CreditAccount()
{
    this -> charge = 0;
    this -> amount = LIMIT;
}

void CreditAccount::Withdraw(float creditAmount)
{
    if(LIMIT - amount < 0)
    {
        this -> charge += 4000;
    }
    else
    {
        this -> amount -= creditAmount;
    }
}

double CreditAccount::getLimit()
{
    cout << "Charges :$" << charge << endl;
    return amount;
}
