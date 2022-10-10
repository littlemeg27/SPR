//
//  main.cpp
//  Lab4
//
//  Created by Brenna Pavlinchak on 10/9/22.
//

#include <iostream>
#include "Helper.h"

int main(int argc, const char * argv[])
{
    cout << "Took valid int input: " << helper::GetValidatedInt("Enter int: ", 1, 5) << endl;
    cout << "Took valid password for sign up: " << helper::GetValidatedPasswordForSignUp("Enter password for sign up: ", 8) << endl;
    cout << "Took valid email: " << helper::GetValidatedEmail() << endl;

    return 0;
}
