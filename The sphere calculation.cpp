#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    //assign the variables
    const double PI = 3.141592653589793;
    double radius, diameter, circumference, surfaceArea, volume;

    //allow the user to enter radius of choice
    cout << "Enter the Radius of a sphere: ";
    cin >> radius;

    //process of the program
    diameter = 2 * radius;
    circumference = 2 * PI * radius;
    surfaceArea = 4 * PI * pow(radius, 2);
    volume = 4.0/3.0 * PI * pow(radius, 3);

    //print the output
    cout << "The Diameter is: " << diameter << endl;
    cout << "The Circumference is: " << circumference << endl;
    cout << "The Surface Area is: " << surfaceArea << endl;
    cout << "The Volume is: " << volume << endl;
    return 0;

}
