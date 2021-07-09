#include <iostream>
#include <ctime>
#include "caller_info.h"
#include "units.h"
#include "sha512.h"
#include "csvfile.h"
using namespace std;

Caller_info::Caller_info()
{
  name = "Tester";
  location = "Nowhere";
  emr_type = "n";
  urgency = "n";
  ph_number = "101";
  call_time = "0";
  units = 1;
}

void Caller_info::get_all_data()
{
  get_caller_name();
  get_location();
  get_emr_type();
  get_urgency();
  get_ph_number();
  get_time();
  get_unit_allocation();
  csvfile csv("Data.csv");
  // csv << "X"
  //     << "NAME"
  //     << "LOCATION"
  //     << "EMER_TYPE"
  //     << "URGENCY"
  //     << "PH.NO." << endrow;
  csv << name << location << (char)toupper(emr_type[0]) << (char)toupper(urgency[0]) << ph_number << call_time << units << endrow;
}

void Caller_info::get_caller_name()
{
namelabel:
  system("clear||cls");
  cout << endl;
  centerstring("Enter Name of caller", 80);

  centerstring("...", 80);
  cin.ignore();
  getline(cin, name);
  if (name.empty())
    goto namelabel;
}

void Caller_info::get_location()
{
loclabel:
  system("clear||cls");
  cout << endl;
  centerstring("Enter location of caller", 80);

  centerstring("...", 80);
  getline(cin, location);
  if (location.empty())
    goto loclabel;
}

char Caller_info::get_emr_type()
{
emlabel:
  system("clear||cls");
  cout << endl;
  centerstring("Enter type of emergency", 80);
  cout << endl;
  centerstring("\"P\" for police", 80);
  cout << endl;
  centerstring("\"F\" for fire", 80);
  cout << endl;
  centerstring("\"M\" for medical", 80);
  cout << endl;
  centerstring("\"C\" for COVID", 80);

  centerstring("...", 80);
  cin >> emr_type;
  char upEmr = toupper(emr_type[0]);
  if (emr_type.length() != 1 || (upEmr != 'P' && upEmr != 'F' && upEmr != 'M' && upEmr != 'C'))
  {
    centerstring("Invalid Input....Click Enter to try again...", 80);
    cin.ignore();
    cin.get();
    goto emlabel;
  }

  return upEmr;
}

char Caller_info::get_urgency()
{
urlabel:
  system("clear||cls");
  cout << endl;
  centerstring("Enter Code of Urgency", 80);
  cout << endl;
  centerstring("\"R\" for Code Red ", 80);
  cout << endl;
  centerstring("\"O\" for Code Orange", 80);
  cout << endl;
  centerstring("\"Y\" for Code Yellow", 80);

  centerstring("...", 80);
  cin >> urgency;
  char upUrgency = toupper(urgency[0]);
  if (urgency.length() != 1 || (upUrgency != 'R' && upUrgency != 'O' && upUrgency != 'Y'))
  {
    centerstring("Invalid Input....Click Enter to try again...", 80);
    cin.ignore();
    cin.get();
    goto urlabel;
  }

  return upUrgency;
}

void Caller_info::get_ph_number()
{
phlabel:
  system("clear||cls");
  cout << endl;
  centerstring("Enter caller's phone number: ", 80);

  centerstring("...", 80);
  cin >> ph_number;
  int ch = 0;
  double len = ph_number.length();
  for (int i = 0; i < len; i++)
  {
    if (!isdigit(ph_number[i]))
    {
      ch++;
      break;
    }
  }
  if (ch != 0 || len > 10 || len < 6)
  {
    centerstring("Invalid Phone Number....Click Enter to try again...", 80);
    cin.ignore();
    cin.get();
    goto phlabel;
  }
}

void Caller_info::get_time()
{

  time_t givemetime = time(NULL);
  call_time = ctime(&givemetime);
}
void Caller_info::get_unit_allocation()
{
alloclabel:
  system("clear||cls");
  cout << endl;
  centerstring("Enter quantity of units to be alloted: ", 80);
  centerstring("...", 80);
  cin >> units;
  char c = (char)toupper(emr_type[0]);
  int res = allocate_units(c, units);
  if (res == 0)
  {
    centerstring("Number of allocated units is greater than availaible units..", 80);
    cout << endl;
    centerstring("Click Enter to try again...", 80);
    cin.ignore();
    cin.get();
    goto alloclabel;
  }
}
