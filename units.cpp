#include <iostream>
#include <iomanip>
#include "units.h"
#include "sha512.h"
using namespace std;
Units::Units()
{
  police = 100;
  fire_truck = 15;
  ambulance = 50;
  covid = 25;
}

int Units::allocate_units(char x, int y)
{
  if (x == 'P' && police >= y)
  {
    police = police - y;
  }
  else if (x == 'F' && fire_truck >= y)
  {
    fire_truck = fire_truck - y;
  }
  else if (x == 'M' && ambulance >= y)
  {
    ambulance = ambulance - y;
  }
  else if (x == 'C' && covid >= y)
  {
    covid = covid - y;
  }

  else
  {
    return 0;
  }
  return 1;
}

void Units::set_units()
{
  system("clear||cls");
  cout << endl;
  centerstring("Set the number of units available today", 80);
  cout << endl;

  centerstring("Police Units: ", 75);
  cin >> police;
  cout << endl;
  centerstring("Fire-Trucks: ", 75);
  cin >> fire_truck;
  cout << endl;
  centerstring("Ambulances: ", 75);
  cin >> ambulance;
  cout << endl;
  centerstring("Covid Units: ", 75);
  cin >> covid;
  cout << endl;
}

void Units::show_units()
{
  centerstring("Sl. No:", 25);
  centerstring("Type", 80);
  centerstring("Units", 135);
  cout << endl;

  cout << setw(25) << 1 << setw(35) << "Police" << setw(45) << police << endl;
  cout << setw(25) << 2 << setw(35) << "Fire" << setw(45) << fire_truck << endl;
  cout << setw(25) << 3 << setw(35) << "Medical" << setw(45) << ambulance << endl;
  cout << setw(25) << 4 << setw(35) << "COVID" << setw(45) << covid << endl;
}