#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    //Assign variables into a value
    const double PI = 3.141592653589793;
    double radius, height, slantHeight, surfaceArea,volume;

    //Allow the user to input values
    cout << "Enter the Radius: ";
    cin >> radius;

    cout << "Enter the Height: ";
    cin >> height;

    //Perform calculations
    slantHeight = sqrt(pow(radius, 2) + pow(height, 2));
    surfaceArea = PI * radius * (radius + slantHeight);
    volume = 1.0/3.0 * PI * pow(radius, 2) * height;

    //Print the properties of the cone
    cout << "\nProperties of the Cone" << endl;
    cout << "-------------------------" << endl;
    cout << "Slant Height: " << slantHeight << endl;
    cout << "Surface Area: " << surfaceArea << endl;
    cout << "Volume: " << volume << endl;
    return 0;

}
