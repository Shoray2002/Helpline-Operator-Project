#include <bits/stdc++.h>
using namespace std;

class center_string{
  public:
  void centerstring(string s, int width)
  {
    int l = s.length();
    int pos = (int)((width - l) / 2);
    for (int i = 0; i < pos; i++)
      cout << " ";
    cout << s;
  }
};
// class caller_info
// {
//   char name[50];
//   char location[100];
//   char emr_type[5];
//   char urgency[3];
//   long long ph_number;

// public:
//   caller_info()
//   {
//   }
//   void get_caller_name()
//   {
//     cout << "Enter name of caller\n";
//     cin >> name;
//   }

//   void get_location()
//   {
//     cout << "Enter location of emergency\n";
//     cin >> location;
//   }

//   void get_emr_type()
//   {
//     cout << "Enter type of emergency\n";
//     cout << "\"p\" for police\n";
//     cout << "\"m\" for medical\n";
//     cout << "\"f\" for fire\n";
//     cout << " enter a combination of the above if multiple services are needed\n";
//     cin >> emr_type;
//   }

//   void get_urgency()
//   {
//     cout << "Enter color of urgency\n";
//     cout << "\"r\" for Code Red\n";
//     cout << "\"o\" for Code Orange\n";
//     cout << "\"y\" for Code Yellow\n";
//     cout << "In decreasing order of severity\n";
//     cin >> urgency;
//   }

//   void get_ph_number()
//   {
//     cout << "Enter caller's phone number\n";
//     cin >> ph_number;
//   }
//   void show_caller_info()
//   {
//     cout << "Caller Name: " << name << endl;
//     cout << "Emergency type: " << emr_type << endl;
//     cout << "Status of urgency: " << urgency << endl;
//     cout << "Caller Number: " << ph_number << endl;
//     cout << "Caller's location: " << location << endl;
//   }
// };

// password
class Password
{
  string password;

public:
  Password() { password = "0000"; }
  string get_password() { return password; }
};
// Show

class Show : public Password ,public center_string
{
public:
center_string cs;
  int password_screen()
    {
    Password p;
    string p_in;
    int chances = 3;
    cs.centerstring("Welcome", 80);
    cout << endl;
    while (chances)
    {
      cout << endl;
      cs.centerstring("Enter Your Admin Password:", 80);
      cin >> p_in;
      if (p_in == p.get_password())
      {
        return 1;
      }
      else
      {
        cs.centerstring(" Wrong Password", 80);
        cout << endl
             << setw(32) << --chances << " chances remaining";
      }
    }
    return 0;
  }
  int welcome_screen()
  {
    system("cls");
    cs.centerstring("Welcome Administrator", 80);
    cout<<endl<<endl;
    cs.centerstring("Press Enter to continue",80);
    cin.ignore();
    cin.get();

    cout<<"\nHave a nice day";
    return 1;
  }
};



int main()
{
  Show s;
  int temp = s.password_screen();
  if (temp)
  {
    s.welcome_screen();
  }
  else
  {
    system("cls");
    center_string cs;
    cs.centerstring("You Failed to Enter the correct Password", 80);
  }

  // cout << "\033[2J\033[1;1H";

  int x;
  cin >> x;
  return 0;
  // caller_info c1;
  // c1.get_caller_name();
  // c1.get_emr_type();
  // c1.get_urgency();
  // c1.get_ph_number();
  // c1.get_location();
  // c1.show_caller_info();
}