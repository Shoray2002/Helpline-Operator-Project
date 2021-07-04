#ifndef __units
#define __units
#include <string>
// using std::string;
class Units
{
  int police;
  int fire_truck;
  int ambulance;
  int covid;

public:
  Units();
  void set_units();
  void allocate_units(char,int);
  void show_units();

};
#endif