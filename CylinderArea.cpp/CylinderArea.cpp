#include <iostream>
using namespace std;

int main()
{
    //Declaring variables
    float A, r, h, v, Pi;
    //Seting constant
    Pi = 3.141592;

    //Capture data from user
    cout << "Insert r";
    cin >> r;
    cout << "Insert h";
    cin >> h;

    //Setting up formula
    A = 2 * Pi * r * h + 2 * Pi * r * r;
    v = Pi * r * r * h;
 
    cout<< "Area of a Cylinder whose radius is " << r <<  " and height is " <<h<< "is = " <<A;
    cout<< "Volume of a Cylinder whose radius is " << r << "and height is " <<h<< "is = " <<v;



return 0;

}
