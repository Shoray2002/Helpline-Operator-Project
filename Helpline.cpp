#include <bits/stdc++.h>
#include "sha512.h"
#include "csvfile.h"
#include"caller_info.h"
#include"show.h"
using namespace std;
// csvfile csv("Data.csv");



Show s;
int main()
{

  while (1)
  {
    if (s.password_screen())
    {
      s.welcome_screen();
      int t = 0, k = 0;
      do
      {
        t = s.admin_page();
        if (t == 1)
        {
          s.get_all_data();
          csvfile csv("Data.csv");
          // csv << "X"
          //     << "NAME"
          //     << "LOCATION"
          //     << "EMER_TYPE"
          //     << "URGENCY"
          //     << "PH.NO." << endrow;
          csv << s.name << s.location << s.emr_type << (char)toupper(s.urgency[0]) << s.ph_number << s.call_time << endrow;
          // csv.~csvfile();
          cout << "\nPress Enter to go to admin menu...";
          cin.ignore();
          cin.get();
        }
        else if (t == 2)
        {
          s.view_unit_status();
          cout << "\nPress Enter to go to admin menu...";
          cin.ignore();
          cin.get();
        }
        else if (t == 3)
        {
          s.view_caller_page();
          cout << "\nLog file is opening...";
          system(".\\Data.csv");
          cout << "\nLog file closed...";
          cout << "\nPress Enter to go to admin menu...";
          cin.ignore();
          cin.get();
        }
        else if (t == 4)
        {
          s.set_password();
          cout << "\nPress Enter to go to admin menu...";

          cin.ignore();
          cin.get();
        }
        else if (t == 5)
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
      {cout<<"\n\nMax attempts made...Click Enter to Exit...";
        cin.ignore();
        cin.get();
        exit(1);}
  }

  cout << "\n\nPress Enter to exit program...";

  cin.ignore();
  cin.get();
  return 0;
}
