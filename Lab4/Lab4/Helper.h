//
//  Header.h
//  Lab4
//
//  Created by Brenna Pavlinchak on 10/9/22.
//

#ifndef Header_h
#define Header_h
#include <iostream>

using namespace std;

namespace helper
{
    int GetValidatedInt(const char* strMessage, int nMinimumRange = 0, int nMaximumRange = 0)
    {
        cout << strMessage;
        int input;
        cin >> input;
        cin.clear();
        cin.ignore(1000, '\n');
        if((nMinimumRange == 0 && nMaximumRange == 0) || (input >= nMinimumRange && input <= nMaximumRange))
        {
            return input;
        }
        return GetValidatedInt(strMessage, nMinimumRange, nMaximumRange);
    }

    string GetValidatedPasswordForSignUp(const char* strMessage, const int min_pass_length)
    {
        int number_flag=false, symbol_flag=false, lower_flag=false, upper_flag=false;
        cout << strMessage;
        string password;
        cin >> password;
        cin.clear();
        cin.ignore(1000,'\n');
        
        for(int i = 0; i < password.length(); i++)
        {
            if(password[i] >= 'a' && password[i] <= 'z')
            {
                lower_flag = true;
            }
            else if(password[i] >= 'A' && password[i] <= 'Z')
            {
                upper_flag = true;
            }
            else if(password[i] >= '0' && password[i] <= '9')
            {
                number_flag = true;
            }
            else
            {
                symbol_flag = true;
            }
        }
        if(number_flag && symbol_flag && lower_flag && upper_flag && password.length() >= min_pass_length)
        {
            return password;
        }
        return GetValidatedPasswordForSignUp(strMessage, min_pass_length);
    }

    string GetValidatedEmail()
    {
        int at_pos= -1, dot_pos = -1;
        cout << "Enter email: ";
        string email;
        cin >> email;
        cin.clear();
        cin.ignore(1000,'\n');
        
        for(int i = 0; i < email.length(); i++)
        {
            if(email[i] =='@')
            {
                at_pos = i;
            }
            else if(email[i] =='.')
            {
                dot_pos = i;
            }
        }
        
        if(at_pos == -1 || dot_pos == -1 || dot_pos-at_pos <= 1 || at_pos == 0 || dot_pos == email.length() -1)
        {
            return GetValidatedEmail();
        }
        return email;
    }
}

#endif /* Header_h */
