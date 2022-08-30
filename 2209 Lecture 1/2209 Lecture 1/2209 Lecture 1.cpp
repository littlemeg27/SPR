// 2209 Lecture 1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

void Print(); // function prototype
void Program1(); // function protype

int main()
{
    // if statements - watch out for accidentally assigning in if statement
    /*int x = 10;
    if (x = 11)
    {
        std::cout << "it is 11" << std::endl;
    }*/

    // switches don't forget breaks
   /* int x = 10;
    switch (x)
    {
    case 10:
    {
        int y = 20;
        std::cout << "it is " << x << std::endl;
        break;
    }
    case 11:
    {
        std::cout << "it is 11" << std::endl;
        break;
    }
    }*/

    // enums - there is no membership operator ( it is not a class )
   /* enum Color {Red, White};
    Color color = Color::White;
    std::cout << "Color = " << color << std::endl;
    switch (color)
    {
    case Color::Red:
    {
        std::cout << "Red" << std::endl;
        break;
    }
    case Color::White:
    {
        std::cout << "White" << std::endl;
        break;
    }
    }*/

    //Print();

    // cin and cout
    // insertion operator just reads in from console until it sees white space
    /*char name[32];
    std::cin >> name;
    std::cout << "name = " << name << std::endl;

    char name2[32];
    std::cin >> name2;
    std::cout << "name = " << name2 << std::endl;*/

    // cin.getline gets a whole
    //char name[6] = "Jason";
    //std::cout << "enter you name:";
    //std::cin.getline(name, 32);
    ////name[5] = 'h'; // mess up the null terminator
    //std::cout << "name = " << name << std::endl;

    // numeric input
    //int x;
    //std::cin >> x;
    //std::cout << "x = " << x << std::endl;
    //// check to see if cin failed
    //if (std::cin.fail())
    //{
    //    std::cin.clear(); // clears any error flags
    //}
    //std::cin.ignore(INT_MAX, '\n'); // flush INT_MAX characters until we see a \n

    //int y;
    //std::cin >> y;
    //std::cout << "y = " << y << std::endl;

    // Lab
    //int array1[5] = { 0,1,2,3,4 };
    //std::cout << "array1 = " << array1 << std::endl;


    //std::cout << SHRT_MAX << std::endl;

    srand(time(NULL)); // seed random number generator with current time
    //for (int i = 0; i < 3; i++)
    //{
    //    std::cout << rand() << std::endl; // rand() give a random number
    //}

    int easy = 0 + rand() % 10; // gives number between 0-9
    int medium = 10 + rand() % 10; // gives number between 10-19

    Program1();
}

void Print() // function implementation
{
    std::cout << "Hello" << std::endl;
}


void Program1() // function protype
{
    // do Program1 stuff
}



// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
