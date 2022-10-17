//
//  CreditAccount.h
//  Lab6
//
//  Created by Brenna Pavlinchak on 10/11/22.
//

#ifndef CreditAccount_h
#define CreditAccount_h

#include <string>
#include "BankAccount.h"

class CreditAccount : public BankAccount
{
public:

    CreditAccount();
    void Withdraw(float amount);
    double getLimit();
    
private:
    
    const static double LIMIT;
    float charge;
    float amount;
};

#endif /* CreditAccount_h */
