
#pragma once
#include <iostream>
#include "GeoShape.h"

using namespace std;

/* Function that calculates the areas of all shapes
    input parameters: pointer of array of shapes
    return : sum of cal areas resulted by calArea functions in all classes */
float sumOfAreas(GeoShape ** arr, int counter)
{
    float sum = 0.0;

    for(int i = 0 ; i < counter ; i++)
    {
        sum += arr[i] -> CalcArea();
    }
    return sum;
}
