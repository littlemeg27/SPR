//
//  CheckingAccount.h
//  Lab6
//
//  Created by Brenna Pavlinchak on 10/11/22.
//

#ifndef CheckingAccount_h
#define CheckingAccount_h

#include <string>
#include "BankAccount.h"


class CheckingAccount : public BankAccount
{
    
public:

    CheckingAccount(float balance);
    CheckingAccount();
    void Withdraw(float amount);
    
private:
    
};

#endif /* CheckingAccount_h */
