#ifndef __units
#define __units
#include <string>
class Units
{public:
  int police;
  int fire_truck;
  int ambulance;
  int covid;

  Units();
  void set_units();
  int allocate_units(char,int);
  void show_units();
};
#endif