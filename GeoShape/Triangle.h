
#pragma once
#include "GeoShape.h"
#include <iostream>
using namespace std;

class Triangle : public GeoShape
{

    public :
        Triangle(int _l, int _h) : GeoShape(_l , _h)
        {
        }
        float CalcArea()
        {
            cout << "inside calc triangle" << endl;
            return (dim1/2) * dim2;
        }

};
