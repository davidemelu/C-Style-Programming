#include <iostream>
#include <math.h>

using std::cout;
using std::endl;
using std::cin;

int main()
{
  cout << "Welcome to Jeffrey Weissman's Vector Resultant Calculator" << endl;

  cout << "Please enter the magnitude (without units) and then the angle (in degrees, measured  counterclockwise from the x axis) of each vector. Omit all units. When you have entered all vectors, enter 0." << endl; 

  double mag=1.0, angle;
  double Sx=0.0, Sy = 0.0;

  cin >> mag;
  while(mag > 0.001)
  {
    cin >> angle;
    angle *= 3.14159/180.0;
    double x = cos(angle);
    double y = sin(angle);

    Sx += x;
    Sy += y;

    cin >> mag;
  }

  mag = sqrt(Sx*Sx + Sy*Sy);
  angle = atan2(Sy, Sx) * 180.0/3.14159;

  cout << "The Vector Resultant has magnitude " << mag << " at an angle " << angle << " degrees from the x axis." << endl;
  return 0;
}