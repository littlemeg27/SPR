//
//  TriangleStack.h
//  Lab7
//
//  Created by Brenna Pavlinchak on 10/21/22.
//

#ifndef TriangleStack_h
#define TriangleStack_h

class TriangleStack
{
    
private:
    float mBase;
    float mHeight ;
    
public:
    TriangleStack();
    void SetBase(float base);
    void setHeight(float height);
    float GetArea() const;
};

TriangleStack::TriangleStack() : mBase(1), mHeight(1)
{}

void TriangleStack:: SetBase(float base)
{
    mBase = base;
}

void TriangleStack:: setHeight(float height)
{
    mHeight = height;
}

float TriangleStack:: GetArea() const
{
    return (mBase*mHeight)/2;
}

#endif /* TriangleStack_h */
