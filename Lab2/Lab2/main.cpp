//
//  main.cpp
//  Lab2
//
//  Created by Brenna Pavlinchak on 9/6/22.
//

#include <iostream>
#include <cmath>
using namespace std;

int TurnOn(int, int);
int TurnOff(int, int);
int Toggle(int, int, int);
int Negate(int);
void CheckNegate(int);
void LeftShift();
void RightShift();

string toBinary1(int leftShift1, int leftShift2)
{
    string binary;
    for(unsigned i = (1 << leftShift2 - 1); i > 0; i = i / 2)
    {
        binary += (leftShift1 & i) ? "1" : "0";
    }
    
    return binary;
}

string toBinary2(int rightShift1, int rightShift2)
{
    string binary;
    for(unsigned i = (1 << rightShift2 - 1); i > 0; i = i / 2)
    {
        binary += (rightShift1 & i) ? "1" : "0";
    }
    
    return binary;
}

int main(int argc, const char * argv[])
{
    int turnOn1 = 4;
    int turnOn2 = 2;
    int turnOff1 = 15;
    int turnOff2 = 4;
    int leftShift1 = 20;
    int rightShift1 = 20;
    int leftShift2 = 32;
    int rightShift2 = 32;
    int n = rand();
    int i = 0;
    
    unsigned int toggle1 = 50;
    unsigned int toggle2 = 2;
    unsigned int toggle3 = 5;
    
    TurnOn(turnOn1, turnOn2);
    TurnOff(turnOff1, turnOff2);
    Toggle(toggle1, toggle2, toggle3);
    Negate(i);
    CheckNegate(n);
    LeftShift();
    RightShift();
    
    cout << TurnOn(turnOn1, turnOn2);
    cout << TurnOff(turnOff1, turnOff2);
    cout << Toggle(toggle1, toggle2, toggle3);

    CheckNegate(n);
    CheckNegate(n);
    CheckNegate(n);
    
    cout << "The binary representation of " << leftShift1 << " is " << toBinary1(leftShift1, leftShift2);
    cout << "The binary representation of " << rightShift1 << " is " << toBinary2(rightShift1, rightShift2);

    return 0;
}

int TurnOn(int turnOn1, int turnOn2)
{
    if (turnOn2 <= 0)
    {
        cout << "The Bit has been Turned On";
        return turnOn1;
        
    }
       return (turnOn1 | (1 << (turnOn2 - 1)));
}

int TurnOff(int turnOff1, int turnOff2)
{
    if (turnOff2 <= 0)
    {
        cout << "The Bit has been Turned Off";
        return turnOff1;
    }
        return (turnOff1 & ~(1 << (turnOff2 - 1)));
}

int Toggle(int toggle1, int toggle2, int toggle3)
{
    int num = ((1 << toggle3) - 1) ^ ((1 << (toggle2 - 1)) - 1);
    
    return (toggle1 ^ num);
}

int Negate(int i)
{
    return 1 + (i >> 31) - (-i >> 31);
}

void CheckNegate(int n)
{
    string stringArrayType[] = { "negative", "zero", "positive" };
    
    int value = Negate(n);
    
    cout << n << " is " << stringArrayType[value] << endl;
}

void LeftShift()
{
    int numberSquared = 1;
        
    for(int i = 0; i < 32; i++)
    {
        numberSquared = sqrt(numberSquared);
    }
}

void RightShift()
{
    int numberSquared = 1;
    
    for(int i = 0; i < 32; i--)
    {
        numberSquared = sqrt(numberSquared);
    }
}



