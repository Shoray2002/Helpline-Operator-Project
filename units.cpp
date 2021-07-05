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
  system("clear||cls");
  centerstring("Unit Status", 80);
  cout << endl
       << endl;
  centerstring("Sl. No:", 25);
  centerstring("Type", 45);
  centerstring("Units", 60);
  cout << endl
       << "-------------------------------------------------------------------------------"
       << endl;

  cout << setw(12) << 1 << setw(30) << "Police" << setw(30) << police << endl;
  cout << setw(12) << 2 << setw(30) << "Fire" << setw(30) << fire_truck << endl;
  cout << setw(12) << 3 << setw(30) << "Medical" << setw(30) << ambulance << endl;
  cout << setw(12) << 4 << setw(30) << "COVID" << setw(30) << covid << endl;
}