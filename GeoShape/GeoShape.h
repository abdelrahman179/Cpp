
#pragma once

/* abstracted class that has one function with no implementation */
class GeoShape
{
    protected :

        int dim1, dim2;

    public :
        GeoShape(int _dim1 = 0, int _dim2 = 0)
            {
                dim1 = _dim1;
                dim2 = _dim2;
            }
        void setDim1(int _d1)
        {
            dim1 = _d1;
        }
        int getDim1()
        {
            return dim1;
        }
        void setDim2(int _d2)
        {
            dim2 = _d2;
        }
        int getDim2()
        {
            return dim2;
        }
        /* Pure virtual function that must be
            implemented by the inherits */
        virtual float CalcArea() = 0;

};
