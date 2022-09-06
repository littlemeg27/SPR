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
    ArrayOfChars();
    ArrayOfInts();
    Equations();
    Ranges();
    ArrayOfCharName();
    AgeCheck();
    VerifyEvenNumber();
    EvenlyDivide();
    PopsiscleColor();
    GameLevels();
    
    return 0;
}

//Calls Program 1-1
void ArrayOfChars()
{
    int i = 0;
    int j = 0;
    
    for (int k = 0; k < 2; k++)
    {
        int userAge [j];
        char userInitials[i];
    
            for (i = 0; i < 1; i++)
            {
                cout << "Please enter your Initials \n";
                cin >> userInitials[i];
                cin.ignore(1000);
            }
            if(cin.fail())
            {
                cin.clear();
            }
                
            if(!cin.fail())
            {
                break;
            }
            for (j = 0; j < 1; j++)
            {
                cout << "Please enter your Age \n";
                cin >> userAge[j];
                cin.ignore(1000);
            }
        
        int newUserAge =  userAge[j] * 365;
        cout << userInitials[i] << "did know you might be least " << newUserAge << "days old??";
    }
}

//Calls Program 1-2
void ArrayOfInts()
{
    int i;
    int randomNumbers[4];

        for (i = 0; i <= 4; i++)
        {
            cout << "Please enter a Random Number \n";
            cin >> randomNumbers[i];
            cin.ignore(1000);
        }
    cout << randomNumbers[i] << "Your Random Numbers are: ";
}

//Calls Program 1-3
void Equations()
{
    int i;
    int equationArray[3];
    int equationOne;
    int equationTwo;

        for (i = 0; i <= 3; i++)
        {
            cout << "Please enter a Random Number \n";
            cin >> equationArray[i];
            cin.ignore(1000);
        }
    equationOne = equationArray[0] + 1 * equationArray[1] + 2 - equationArray[2];
    equationTwo = (equationArray[0] + 1) * (equationArray[1] + 2) - equationArray[2];
    
    cout << "The anwser to Equation 1 is: " << equationOne;
    cout << "The anwser to Equation 2 is: " << equationTwo;
}

//Calls Program 1-4
void Ranges()
{
    
}

//Calls Program 1-5
void ArrayOfCharName()
{
    char nameArray[32];
    string randomQuotes[4] = {"In three words I can sum up everything I've learned about life: it goes on.",
                              "To live is the rarest thing in the world. Most people exist, that is all.",
                              "Good friends, good books, and a sleepy conscience: this is the ideal life.",
                              "Sometimes the questions are complicated and the answers are simple."};
    
        for (int i = 0; i < 1; i++)
        {
            cout << "Please enter your full name \n";
            cin.getline(nameArray,32);
            cin.ignore(1000);
        }
    
        for (int j = 0; j < 32; j++)
        {
            for (int k = 0; k < 4; k++)
            {
                cout << nameArray[j] << randomQuotes[k];
            }
        }
}

//Calls Program 1-6
void AgeCheck()
{
    int ageCheck1 = 13;
    int ageCheck2 = 21;
    int randomAge = 0;
    
    cout << "Enter a random age!";
    cin >> randomAge;
    cin.ignore(1000);

    if(ageCheck1 >= randomAge)
    {
        cout << "Mom said your not allowed!";
    }
    else if (ageCheck2 <= randomAge)
    {
        cout << "It's Ok. You can go!";
    }
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
