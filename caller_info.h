#ifndef __Caller_info
#define __Caller_info
#include<string>
using std::string;


class Caller_info
{
public:
  string name;
  string location;
  string emr_type;
  string urgency;
  string ph_number;
  string call_time;
  int units;

  Caller_info();

  void get_all_data();
  void get_caller_name();

  void get_location();
  
  char get_emr_type();
  

  char get_urgency();
  void get_ph_number();
  // void show_caller_info();

  void get_time();

  int get_unit_allocation();
};

#endif