// Give radius of a circle. Write afunction two print the area and circumference of the circle.
#include <iostream>
using namespace std;
double circumference(int radius)
{
   double pie = 3.14;
   return 2 * pie * radius;
}

double area(int radius)
{
   double pie = 3.14;
   return pie * radius * radius;
}

int main()
{
   int radius;
   cout << "Enter the radisu of circle : ";
   cin >> radius;
   cout << "Circumference : " << circumference(radius) << endl;
   cout << "Radius        : " << area(radius);
}