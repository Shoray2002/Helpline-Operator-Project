#include <iostream>
#include <stdlib.h>
#include "sha512.h"
#include "csvfile.h"
#include "caller_info.h"
#include "show.h"
#include "units.h"
using namespace std;
Show s;
void runner()
{
  while (1)
  {
    system("Color 03");
    if (s.password_screen())
    {
      system("Color 0F");
      s.welcome_screen();
      int t = 0;
      do
      {
        system("Color 04");
        t = s.admin_page();
        if (t == 1)
        {
          system("Color 06");
          s.get_all_data();
          // csv.~csvfile();
          cout << "\nPress Enter to go to admin menu...";
          cin.ignore();
          cin.get();
        }
        else if (t == 2)
        {
          system("Color 0A");
          s.show_units();
          cout << "\nPress Enter to go to admin menu...";
          cin.ignore();
          cin.get();
        }
        else if (t == 3)
        {
          system("Color 05");
          s.view_caller_page();
          cout << "\nPress Enter to go to admin menu...";
          cin.ignore();
          cin.get();
        }
        else if (t == 4)
        {
          system("Color 0A");
          s.set_units();
          cout << "\nPress Enter to go to admin menu...";
          cin.ignore();
          cin.get();
        }
        else if (t == 5)
        {
          system("Color 09");
          s.set_password();
          cout << "\nPress Enter to go to admin menu...";

          cin.ignore();
          cin.get();
        }
        else if (t == 6)
        {
          break;
        }
       

      } while (1);
    }
    else
    {
      system("Color 03");
      cout << "\n\nMax attempts made...Click Enter to Exit...";
      cin.ignore();
      cin.get();
      exit(1);
    }
  }
}

int main()
{
  runner();
  cout << "\n\nPress Enter to exit program...";
  cin.ignore();
  cin.get();
  return 0;
}
