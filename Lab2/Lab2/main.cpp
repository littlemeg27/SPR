//
//  main.cpp
//  Lab2
//
//  Created by Brenna Pavlinchak on 9/6/22.
//

#include <iostream>
using namespace std;

void TurnOn();
void TurnOff();
void Toggle();
void Negate();
void LeftShift();
void RightShift();

unsigned int unsignedBitNumber = 0;

string toBinary(int n, int len)
{
    
    string binary;
    for (unsigned i = (1 << len - 1); i > 0; i = i / 2)
    {
        binary += (n & i) ? "1" : "0";
    }
    
    return binary;
}


int main(int argc, const char * argv[])
{
    TurnOn();
    TurnOff();
    Toggle();
    Negate();
    LeftShift();
    RightShift();
    
    int n = 20;
    int len = 32;
    
    cout << "The binary representation of " << n << " is " << toBinary(n, len);
    
       return 0;
}

void TurnOn()
{

}

void TurnOff()
{

}

void Toggle()
{

}

void Negate()
{


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


}



