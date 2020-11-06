
#pragma  once
#include "GeoShape.h"

#define  Pi    3.14
#include <iostream>
using namespace std;

class Circle : public GeoShape
{
    private :

        int j;

    public :
        Circle(int _r) : GeoShape(_r , _r)
        {

        }
        float CalcArea()
        {
            cout << "inside calc circle" << endl;
            return dim1 * dim2 * Pi;
        }
        void display()
        {
            cout << "I'm a cricle" << endl;
        }
};
