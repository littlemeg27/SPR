//
//  BankAccount.h
//  Lab6
//
//  Created by Brenna Pavlinchak on 10/11/22.
//

#ifndef BankAccount_h
#define BankAccount_h

#include <string>
#include <iostream>

using namespace std;
class BankAccount
{
    
    protected :
    int noOfWithdrawls;
    
private:
    
    
    float balance;
    static unsigned int numAccounts;
    
public:
    
    BankAccount();
    BankAccount(float bal);
    void Withdraw(float amount);
    void Deposit(float amount);
    float GetBalance() const;
    
};

#endif /* BankAccount_h */
