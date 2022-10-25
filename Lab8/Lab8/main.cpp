//
//  main.cpp
//  Lab7
//
//  Created by Brenna Pavlinchak on 10/17gty /22.
//

#include <iostream>
#include <vector>
#include "TriangleHeap.h"
#include "TriangleStack.h"

using namespace std;

int main(int argc, const char * argv[])
{
    cout << "TriangleStack:" << endl;
    vector<TriangleStack> trStack;

    TriangleStack triStack1, triStack2;

    triStack1.SetBase(7.5);
    triStack1.setHeight(5);

    triStack2.SetBase(10);
    triStack2.setHeight(7.25);

    trStack.push_back(triStack1);
    trStack.push_back(triStack2);

    for(size_t i = 0; i < trStack.size(); i++)
    {
        cout << "Area: " << trStack[i].GetArea() << endl;
    }

    cout << endl << "TriangleHeap:" << endl;
    vector<TriangleHeap> trHeap;

    TriangleHeap th1;

    th1.setBase(7.5);
    th1.setHeight(5);

    TriangleHeap th2(th1);

    trHeap.push_back(th1);
    trHeap.push_back(th2);

    for(size_t  i = 0; i < trHeap.size(); i++)
    {
        cout << "Area: " << trHeap[i].GetArea() << endl;
    }
    
    return 0;
}
