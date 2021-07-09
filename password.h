#ifndef __password
#define __password
#include <string>
using std::string;
class Password
{
  string password;

public:
  Password();
  string get_password_hash();
  void set_password();
};

#endif