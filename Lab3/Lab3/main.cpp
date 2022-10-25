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

enum Color
{
    Red,
    White
};

struct Car
{
    char make[32];
    char model[32];
    int year;
    Color carColor;
    int mileage;
};

void print(int val, int* address);
void repaintCar(Car *car, Color color);
void printCar(Car c);
void addMileage(Car *car, int mileage);
void printCarPointer(Car *c);


int main(int argc, const char * argv[])
{
    int array[15];
    
    for(int i=0;i<15;i++)
    {
        printf("Value and Memory address of %d are:%d\t%p\n",i+1,array[i],&array[i]);
    }

    for(int i=0;i<15;i++)
    {
        array[i] = rand()%1000;
    }

    for(int i=0;i<15;i++)
    {
        print(array[i],&array[i]);
    }
    
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
                car[i].carColor = Red;
            }
            else
            {
                car[i].carColor = White;
            }
            car[i].mileage = rand();
        }
    
        int carnum;

        cout << "\nEnter car number (1,2 or 3) to repaint : ";
        cin >> carnum;
        cout << "\t1. Red\n\t2. White";
        cout << "\n\tEnter car colour : ";
        int check;
        cin >> check;
    
        if (check == 1)
        {
            car[carnum].carColor = Red;
        }
        else
        {
            car[carnum].carColor = White;
        }

        for (int i = 0; i < 3; i++)
        {
            cout << "\nCar " << (i + 1) << " - ";
            printCar(car[i]);
        }

        for (int i = 0; i < 3; i++)
        {
            cout << "\nCar " << (i + 1) << " - ";
            printCarPointer(&car[i]);
        }

        cout << "\n\nChanging Mileage-";

        for (int i = 0; i < 3; i++)
        {
            addMileage(&car[i], 500);
        }

        for (int i = 0; i < 3; i++)
        {
            cout << "\nCar " << (i + 1) << " - ";
            printCar(car[i]);
        }

    return 0;
}

void print(int value, int* address)
{
    cout << "The value and address are: " << value << " " << address << endl;
}

void repaintCar(Car *car, Color color)
{
    car-> carColor = color;
}

void printCar(Car c)
{
    string carColor = "Red";

    if(c.carColor == 1)
    {
        carColor = "White";
        cout << c.year << " " << carColor << " " << c.make << " " << c.model << " with " << c.mileage << " miles.";
    }
}

void printCarPointer(Car *c)
{
    string carColor = "Red";

    if(c -> carColor == 1)
    {
        carColor = "White";
        cout << c -> year << " " << carColor << " " << c ->make << " " << c ->model << " with " << c -> mileage << " miles.";
    }
}

void addMileage(Car *car, int mileage)
{
    car -> mileage = mileage;
}
