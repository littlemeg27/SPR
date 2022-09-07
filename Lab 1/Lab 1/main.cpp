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
    cout << "The anwser to Equation 2 is: " << equationTwo << "\n";
}

//Calls Program 1-4
void Ranges()
{


}

//Calls Program 1-5
void ArrayOfCharName()
{
    char nameArray[32];
    string randomQuotes[5] = {" In three words I can sum up everything I've learned about life: it goes on.",
                              " To live is the rarest thing in the world. Most people exist, that is all.",
                              " Good friends, good books, and a sleepy conscience: this is the ideal life.",
                              " Sometimes the questions are complicated and the answers are simple."};

        cout << "\n\n\nPlease enter your full name \n";
        cin.get(nameArray,32);

    for (int i = 0; i < 1; i++)
    {
        cout << nameArray << ", "<< randomQuotes[i];
    }
    
}

//Calls Program 1-6
void AgeCheck()
{
    int ageCheck1 = 13;
    int ageCheck2 = 21;
    int randomAge = 0;
    
    cout << "\n\nEnter a random age!\n";
    cin >> randomAge;

    if(ageCheck1 >= randomAge)
    {
        cout << " Mom said your not allowed!";
    }
    else if (ageCheck2 <= randomAge)
    {
        cout << " It's Ok. You can go!";
    }
    else
    {
        cout << " The more the years go by, the more difficult it gets. I'm getting old.";
    }
}

//Calls Program 1-7
void VerifyEvenNumber()
{
    int evenNumber;
    cout << "\n\nEnter a random number!\n";
    cin >> evenNumber;
    
    if (evenNumber % 2 == 0)
    {
        cout << "First number " << evenNumber << " is divisible by second number " << 2;
    }
    else
    {
        cout << "First number " << evenNumber << " is not divisible by second number " << 2;
    }
}

//Calls Program 1-8
void EvenlyDivide()
{
    int number;
    
    cout << "\n\nEnter a number to see if it is divisible!\n";
    cin >> number;

    for(int i = 1; i <= number; ++i)
    {
        if(number %i ==0)
        {
            cout << " " << i;
        }
    }
}

//Calls Program 1-9
void PopsiscleColor()
{
    int colorChoice;
    
    cout << "\n\nEnter a number from 1-8 to pick a Popsicle Color!\n";
    cin >> colorChoice;
    
    switch (colorChoice)
    {
        case 1:
            cout << "Violet";
        break;
        case 2:
            cout << "Green";
        break;
        case 3:
            cout << "Pink";
        break;
        case 4:
            cout << "Yellow";
        break;
        case 5:
            cout << "Blue";
        break;
        case 6:
            cout << "Orange";
        break;
        case 7:
            cout << "Red";
        break;
        case 8:
            cout << "Purple";
        break;
    }
}

//Calls Program 1-10
void GameLevels()
{
    int gameLevel;
    
    cout << "\n\nEnter a number from 1-3 to pick a Game Level!\n";
    cin >> gameLevel;
    
    switch (gameLevel)
    {
        case 1:
            cout << "3";
        break;
        case 2:
            cout << "11";
        break;
        case 3:
            cout << "25";
        break;
    }
}
