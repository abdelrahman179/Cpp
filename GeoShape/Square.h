
#pragma once
#include "GeoShape.h"
#include <iostream>
using namespace std;

class Square : public GeoShape
{
    public :
        Square(int _l) : GeoShape(_l , _l)
        {

        }
        float CalcArea()
        {
            cout << "inside calc square" << endl;
            return dim1 * dim2;
        }
};
