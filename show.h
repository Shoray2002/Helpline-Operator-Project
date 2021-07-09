#ifndef __show
#define __show
#include "password.h"
#include "caller_info.h"
#include "units.h"
#include <string>
using std::string;
class Show : public Password, public Caller_info
{
public:
  int password_screen();
  int welcome_screen();
  int admin_page();
  void view_caller_page();
  void view_unit_status();
};

#endif