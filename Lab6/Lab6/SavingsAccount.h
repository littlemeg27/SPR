//
//  SavingsAccount.h
//  Lab6
//
//  Created by Brenna Pavlinchak on 10/11/22.
//

#ifndef SavingsAccount_h
#define SavingsAccount_h

#include <string>
#include "BankAccount.h"

class SavingsAccount : public BankAccount
{
    
public:
    
    SavingsAccount(float balance);
    SavingsAccount();
    void Withdraw(float amount);
    
private:
    
};

#endif /* SavingsAccount_h */
