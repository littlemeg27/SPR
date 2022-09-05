//
//  main.cpp
//  Lab 1
//
//  Created by Brenna Pavlinchak on 9/3/22.
//
#include <iostream>
using namespace std;

void ArrayOfChars();
void ArrayOfInts();
void Equations();
void Ranges();
void ArrayOfCharName();
void AgeCheck();
void VerifyEvenNumber();
void EvenlyDivide();
void PopsiscleColor();
void GameLevels();

// cout <<
// cin >>

int main(int argc, const char * argv[])
{
    return 0;
}

//Calls Program 1-1
void ArrayOfChars()
{
    for (int i = 0; i < 20; i++)
    {
        char userInitials[i];
        
        cout << "Please enter your Initials";
        cin >> userInitials[i];
        
        if(cin.fail())
        {
            cin.clear();
        }
            
        if(!cin.fail())
            break;
    }
    
    for (int i = 0; i < 20; i++)
    {
        int userAge [i];
        
        cout << "Please enter your Age";
        cin >> userAge[i];
        
        if(cin.fail())
        {
            cin.clear();
        }
            
        if(!cin.fail())
            break;
    }

}


//Calls Program 1-2
void ArrayOfInts()
{
    
}

//Calls Program 1-3
void Equations()
{
    
}

//Calls Program 1-4
void Ranges()
{
    
}

//Calls Program 1-5
void ArrayOfCharName()
{
    
}

//Calls Program 1-6
void AgeCheck()
{
    
}

//Calls Program 1-7
void VerifyEvenNumber()
{
    
}

//Calls Program 1-8
void EvenlyDivide()
{
    
}

//Calls Program 1-9
void PopsiscleColor()
{
    
}

//Calls Program 1-10
void GameLevels()
{
    
}
