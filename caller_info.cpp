#include <iostream>
#include <ctime>
#include"caller_info.h"

#include "sha512.h"
// #include "center_string.h"
using namespace std;

Caller_info::Caller_info()
  {
    name = "Tester";
    location = "Nowhere";
    emr_type = "n";
    urgency = "n";
    ph_number = "101";
    call_time = "0";
  }

  void Caller_info::get_all_data()
  {
    get_caller_name();
    get_location();
    get_emr_type();
    get_urgency();
    get_ph_number();
    get_time();
  }

  void Caller_info::get_caller_name()
  {
    system("clear||cls");
    cout << endl;
    centerstring("Enter Name of caller", 80);
    centerstring("...", 79);
    cin.ignore();
    getline(cin, name);
  }

  void Caller_info::get_location()
  {
    system("clear||cls");
    cout << endl;
    centerstring("Enter location of caller", 80);
    centerstring("...", 79);
    getline(cin, location);
  }

  void Caller_info::get_emr_type()
  {
    system("clear||cls");
    cout << endl;
    centerstring("Enter type of emergency", 80);
    cout << endl;
    centerstring("\"p\" for police", 80);
    cout << endl;
    centerstring("\"f\" for fire", 80);
    cout << endl;
    centerstring("\"m\" for medical", 80);
    cout << endl;
    centerstring("\"c\" for COVID", 80);
    cout << endl;
    centerstring("(Enter a Combination of the above if Multiple Services are needed): ", 80);
    centerstring("...", 80);
    cin >> emr_type;
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
    // cout<<ch;
    if (ch != 0 || len > 10 || len < 6)
    {
      centerstring("Invalid Phone Number....Click Enter to try again...", 80);
      cin.ignore();
      cin.get();
      goto phlabel;
    }
  }
  void Caller_info::show_caller_info()
  {
    system("clear||cls");
    cout << "Caller Name: " << name << endl;
    cout << "Emergency type: " << emr_type << endl;
    cout << "Status of urgency: " << urgency << endl;
    cout << "Caller Number: " << ph_number << endl;
    cout << "Caller's location: " << location << endl;
  }

  void Caller_info::get_time()
  {

    time_t givemetime = time(NULL);
    call_time = ctime(&givemetime);
  }
