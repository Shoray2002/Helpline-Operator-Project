#include <iostream>
#include "sha512.h"
#include "csvfile.h"
#include "caller_info.h"
#include "show.h"
#include "units.h"
using namespace std;
// csvfile csv("Data.csv");
Show s;
void runner()
{
  while (1)
  {
    if (s.password_screen())
    {
      s.welcome_screen();
      int t = 0;
      do
      {
        t = s.admin_page();
        if (t == 1)
        {
          s.get_all_data();
          // csv.~csvfile();
          cout << "\nPress Enter to go to admin menu...";
          cin.ignore();
          cin.get();
        }
        else if (t == 2)
        {
          s.show_units();
          cout << "\nPress Enter to go to admin menu...";
          cin.ignore();
          cin.get();

         
        }
        else if (t == 3)
        {
          s.view_caller_page();
          cout << "\nPress Enter to go to admin menu...";
          cin.ignore();
          cin.get();
        }
        else if(t==4){
          s.set_units();
          cout << "\nPress Enter to go to admin menu...";
          cin.ignore();
          cin.get();
        }
        else if (t == 5)
        {
          s.set_password();
          cout << "\nPress Enter to go to admin menu...";

          cin.ignore();
          cin.get();
        }
        else if (t == 6)
        {
          break;
        }
        else
        {
          cout << "\nExecution error...Click Enter to Exit...";
          cin.ignore();
          cin.get();
          exit(1);
        }

      } while (1);
    }
    else
    {
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
