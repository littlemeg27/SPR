//
//  main.cpp
//  Lab3
//
//  Created by Brenna Pavlinchak on 10/7/22.
//

#include <iostream>
#include <cmath>
#include <stdlib.h>
#include <time.h>
#include <string>
using namespace std;

int ArrayOfInts();
int Pointer();
void CreateCars();
void RepaintCar();
void Print(int, &int);
void PrintCarPointer();

enum Color
{
    Red,
    White,
    Blue,
    Purple
};

struct Car
{
    char make[32];
    char model[32];
    int year;
    Color color;
    int mileage;
};


int main(int argc, const char * argv[])
{
    ArrayOfInts();
    Pointer();
    CreateCars();
    RepaintCar();
    PrintCarPointer();

    static Car car[3];

    srand(time(NULL));

    return 0;
}

int ArrayOfInts()
{
    int randomArray1[15];

    for(int i = 0; i < 15; i++)
    {
        randomArray1[i] = rand() %1000;
    }

    for(int i = 0; i < 15; i++)
    {
        printf("Value and Memory address of %d are:%d\t%p\n", i + 1, randomArray1[i], &randomArray1[i]);
    }

    return 0;
}

int Pointer()
{
    int randomArray2[15];

    for(int i = 0; i < 15; i++)
    {
        randomArray2[i] = rand() %1000;
    }

    for(int i = 0; i < 15; i++)
    {
        Print(randomArray2[i], &randomArray2[i]);
    }
    return 0;
}

void Print(int value, int* address)
{
    cout << "The value and address are: " << value << " "<< address << endl;;
}

void CreateCar()
{
    //to store cars info

    static Car car[3];

    srand(time(NULL));

    for (int i = 0; i < 3; i++)
    {
        cout << "\nCars " << (i + 1) << " - ";
        cout << "\n\tEnter car make : ";
        cin >> car[i].make;
        cout << "\tEnter car model : ";
        cin >> car[i].model;
        cout << "\tEnter car year : ";
        cin >> car[i].year;
        cout << "\t1. Red\n\t2. White";
        cout << "\n\tEnter car colour : ";
        int check;
        cin >> check;
        
        if (check == 1)
        {
            car[i].color = Red;
        }
        else
        {
            car[i].color = White;
        }
        
        car[i].mileage = rand();
    }

    for (int i = 0; i < 3; i++)
    {
        string color = "Red";
        
        if (car[i].color == 1)
        {
            color = "White";
            cout << "\nCar " << (i + 1) << " - " << car[i].year << " " << color << " " << car[i].make << " " << car[i].model << " with " << car[i].mileage << " miles.";
        }
    }
}

void RepaintCar(Car *car, Color color)
{
    car -> color = color;
}

void PrintCar(Car c)
{
    string color = "Red";
    
    if (c.color == 1)
    {
        color = "White";
        cout << c.year << " " << color << " " << c.make << " " << c.model << " with " << c.mileage << " miles.";
    }
}

void PrintCarPointer(Car *c)
{
    string color = "Red";
    
    if (c -> color == 1)
    {
        color = "White";
        cout << c -> year << " " << color << " " << c -> make << " " << c -> model << " with " << c -> mileage << " miles.";
    }
}

void StoreCar()
{
    static Car car[3];
    srand(time(NULL));

    for (int i = 0; i < 3; i++)
    {
        cout << "\nCars " << (i + 1) << " - ";
        cout << "\n\tEnter car make : ";
        cin >> car[i].make;
        cout << "\tEnter car model : ";
        cin >> car[i].model;
        cout << "\tEnter car year : ";
        cin >> car[i].year;
        cout << "\t1. Red\n\t2. White";
        cout << "\n\tEnter car colour : ";
        int check;
        cin >> check;
        
        if (check == 1)
        {
            car[i].color = Red;
        }
        else
        {
            car[i].color = White;
        }
        
        car[i].mileage = rand();
    }
}

void ShowCars()
{
    static Car car[3];
    int carNumber;
    int check;
    cout << "\nEnter car number (1,2 or 3) to repaint : ";
    cin >> carNumber;
    cout << "\t1. Red\n\t2. White";
    cout << "\n\tEnter car colour : ";
    cin >> check;
    
        if (check == 1)
        {
            car[carNumber].color = Red;
        }
        else
        {
            car[carNumber].color = White;
        }

    for (int i = 0; i < 3; i++)
    {
        cout << "\nCar " << (i + 1) << " - ";
        PrintCar(car[i]);
    }

    for (int i = 0; i < 3; i++)
    {
        cout << "\nCar " << (i + 1) << " - ";
        PrintCarPointer(&car[i]);
    }
}
