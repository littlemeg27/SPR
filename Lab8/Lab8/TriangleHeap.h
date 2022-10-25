//
//  TriangleHeap.h
//  Lab7
//
//  Created by Brenna Pavlinchak on 10/21/22.
//

#ifndef TriangleHeap_h
#define TriangleHeap_h

class TriangleHeap
{
private:
    float *mBase , *mHeight ;
    
public:
    TriangleHeap();
    TriangleHeap(const TriangleHeap &rhs);
    ~TriangleHeap();
    void setBase(float base);
    void setHeight(float height);
    float GetArea() const;
    
};

#endif /* TriangleHeap_h */
