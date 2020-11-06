#include <iostream>
#include "GeoShape.h"
#include "Rect.h"
#include "Square.h"
#include "Triangle.h"
#include "Circle.h"
#include "tools.h"

#define  Pi    3.14

using namespace std;

int main()
{
    /*Rect r = Rect(5,7);
    cout << r.CalcArea() << endl;

    Square s = Square(6);
    cout << s.CalcArea() << endl;

    Triangle t = Triangle(7 , 4);
    cout << t.CalcArea() << endl;

    Circle c = Circle(4);
    cout << c.CalcArea() << endl;*/


    /* dynamic true polymorphism */
    GeoShape *arr[4];

    arr[0] = new Rect(5,7);
    arr[1] = new Square(6);
    arr[2] = new Triangle(7,4);
    arr[3] = new Circle(4);

    cout << sumOfAreas(arr , 4) << endl;

    //Circle c = GeoShape(5 , 7);


    return 0;
}
