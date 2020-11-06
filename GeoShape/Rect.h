
#pragma once
#include "GeoShape.h"
#include <iostream>
using namespace std;

class Rect : public GeoShape
{
    public :
        Rect(int _l, int _w) : GeoShape(_l , _w)
        {

        }
        float CalcArea()
        {
            cout << "inside calc rect" << endl;
            return dim1 * dim2;
        }
};
