//
//  main.cpp
//  Lab2
//
//  Created by Brenna Pavlinchak on 9/6/22.
//

#include <iostream>
#include <cmath>
#include <string>
#include <stdio.h>
#include <cstdlib>
#include <cstdio>
#include <ncurses.h>

using namespace std;

int RightShift(int bitField);
int LeftShift(int bitField);
int Negate(int bitField);
int Toggle(int bitField, int bitNumber);
int TurnOff(int bitField, int bitNumber);
int TurnOn(int bitField, int bitNumber);

int main(int argc, const char * argv[])
{
    int bitField = 0;
    int nSelectedBit = 0;
    std::string stringBits = "Bits: ";
    
    //TurnOff(bitField, bitNumber);
    
    while (true)
    {
        //Console::Lock(true);
        system("cls");
        
        std::cout << "Bitfield Value: " << (int)bitField << "\n\n";
        std::cout << "F1: Turn On\t\tF2: Turn Off\nF3: Toggle\t\tF4: Negate\nLShift: Shift Left\tRShift: Shift right";
        std::cout << "\n\n" << stringBits;
        //std::cout << intToBinaryString(bitField, 16) << "\n";
        
        //Console::SetCursorPosition(stringBits.length() + 15 - nSelectedBit, Console::CursorTop() + 1);
        std::cout << "^";
        
        if (GetAsyncKeyState(VK_LEFT))
        {
            if (nSelectedBit < 7)
            {
                ++nSelectedBit;
            }
        }
        if (GetAsyncKeyState(VK_RIGHT))
        {
            if (nSelectedBit > 0)
            {
                --nSelectedBit;
            }
        }
        if (GetAsyncKeyState(VK_F1))
        {
            bitField = TurnOn(bitField, nSelectedBit);
        }
        if (GetAsyncKeyState(VK_F2))
        {
            TurnOn(bitField, int bitNumber);
        }
        if (GetAsyncKeyState(VK_F3))
        {
            Toggle(bitField, int bitNumber);
        }
        if (GetAsyncKeyState(VK_F4))
        {
            Negate(bitField);
        }
        if (GetAsyncKeyState(VK_LSHIFT))
        {
            LeftShift(bitField);
        }
        if (GetAsyncKeyState(VK_RSHIFT))
        {
            RightShift(bitField);
        }
        
        Console::Lock(false);
        Sleep(100);
    }
    
    return 0;
}

int RightShift(int bitField)
{
    bitField = bitField >> 1;
    return bitField;
}

int LeftShift(int bitField)
{
    bitField = bitField << 1;
    return bitField;
}

int Negate(int bitField)
{
    bitField = ~bitField;
    return bitField;
}

int Toggle(int bitField, int bitNumber)
{
    
    if (bitField & (1 << bitNumber))
    {
        bitField & = ~(1 << bitNumber);
    }
    else
    {
        bitField | = (1 << bitNumber);
    }
    return bitField;
}

int TurnOff(int bitField, int bitNumber)
{
    bitField & = ~(1 << bitNumber);
    return bitField;
}

int TurnOn(int bitField, int bitNumber)
{
    bitField | = (1 << bitNumber);
    return bitField;
}
