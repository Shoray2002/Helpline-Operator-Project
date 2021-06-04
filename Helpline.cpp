#include <bits/stdc++.h>
using namespace std;

class caller_info
{
  char name[50];
  char location[100];
  char emr_type[5];
  char urgency[3];
  long long ph_number;

public:
  caller_info()
  {
  }
  void get_caller_name()
  {
    cout << "Enter name of caller\n";
    cin >> name;
  }

  void get_location()
  {
    cout << "Enter location of emergency\n";
    cin >> location;
  }

  void get_emr_type()
  {
    cout << "Enter type of emergency\n";
    cout << "\"p\" for police\n";
    cout << "\"m\" for medical\n";
    cout << "\"f\" for fire\n";
    cout << " enter a combination of the above if multiple services are needed\n";
    cin >> emr_type;
  }

  void get_urgency()
  {
    cout << "Enter color of urgency\n";
    cout << "\"r\" for Code Red\n";
    cout << "\"o\" for Code Orange\n";
    cout << "\"y\" for Code Yellow\n";
    cout << "In decreasing order of severity\n";
    cin >> urgency;
  }

  void get_ph_number()
  {
    cout << "Enter caller's phone number\n";
    cin >> ph_number;
  }
  void show_caller_info()
  {
    cout << "Caller Name: " << name << endl;
    cout << "Emergency type: " << emr_type << endl;
    cout << "Status of urgency: " << urgency << endl;
    cout << "Caller Number: " << ph_number << endl;
    cout << "Caller's location: " << location << endl;
  }
};

int main()
{
  cout << "\033[2J\033[1;1H";
  caller_info c1;
  c1.get_caller_name();
  c1.get_emr_type();
  c1.get_urgency();
  c1.get_ph_number();
  c1.get_location();
  c1.show_caller_info();
}