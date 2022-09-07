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
    int newUserAge;
    int userAge;
    char userInitials[5];

    cout << "Please enter your Initials \n";
    cin >> userInitials;
    cout << "Please enter your Age \n";
    cin >> userAge;

    
    if(!cin)
    {
        cout << "That was no integer! Please enter an integer: ";
        cin.clear();
        cin >> userAge;
    }

    newUserAge = userAge * 365;
    cout << userInitials << " did know you might be least " << newUserAge << " days old??";
}

//Calls Program 1-2
void ArrayOfInts()
{
    int i;
    int randomNumbers[5];

    for (i = 0; i <= 4; i++)
    {
        cout << "\nPlease enter a Random Number ";
        cin >> randomNumbers[i];
    }

        cout << "Your Random Numbers are: " << randomNumbers[0] << ", " << randomNumbers[1] << ", " << randomNumbers[2] << ", " << randomNumbers[3] << ", " << randomNumbers[4];

    
}

//Calls Program 1-3
void Equations()
{
    int i;
    int equationArray[4];
    int equationOne;
    int equationTwo;

        for (i = 0; i < 3; i++)
        {
            cout << "\nPlease 3 different numbers for the Equation! \n";
            cin >> equationArray[i];
        }
    equationOne = equationArray[0] + 1 * equationArray[1] + 2 - equationArray[2];
    equationTwo = (equationArray[0] + 1) * (equationArray[1] + 2) - equationArray[2];
    
    cout << "The anwser to Equation 1 is: " << equationOne << " \n";
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
    string randomQuotes[4] = {" In three words I can sum up everything I've learned about life: it goes on.",
                              " To live is the rarest thing in the world. Most people exist, that is all.",
                              " Good friends, good books, and a sleepy conscience: this is the ideal life.",
                              " Sometimes the questions are complicated and the answers are simple."};
    
    for (int i = 0; i < 1; i++)
    {
        cout << "\n\n\nPlease enter your full name \n";
        cin.getline(nameArray,) << ;
    }
}

//Calls Program 1-6
void AgeCheck()
{
    int ageCheck1 = 13;
    int ageCheck2 = 21;
    int randomAge = 0;
    
    cout << " Enter a random age!";
    cin >> randomAge;
    cin.ignore(1000);

    if(ageCheck1 >= randomAge)
    {
        cout << " Mom said your not allowed!";
    }
    else if (ageCheck2 <= randomAge)
    {
        cout << " It's Ok. You can go!";
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
