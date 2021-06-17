#include <bits/stdc++.h>
using namespace std;

void centerstring(string s, int width)
{
  int l = s.length();
  int pos = (int)((width - l) / 2);
  for (int i = 0; i < pos; i++)
    cout << " ";
  cout << s;
}

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
  void set_password()
  {
    cout << endl;
    centerstring("Enter the new password: ", 80);
    cin >> password;

    // s.admin_page();
  }

};
// Show

class Show : public Password
{
public:
  int password_screen()
  {

    string p_in;
    int chances = 3;
    centerstring("Welcome", 80);
    cout << endl;
    while (chances)
    {
      cout << endl;
      centerstring("Enter Your Admin Password:", 80);
      cin >> p_in;
      if (p_in == Password::get_password())
      {
        return 1;
      }
      else
      {
        centerstring(" Wrong Password", 80);
        cout << endl
             << setw(32) << --chances << " chances remaining";
      }
    }
    return 0;
  }
  int welcome_screen()
  {
    system("cls");
    centerstring("Welcome Administrator", 80);
    cout << endl
         << endl;
    centerstring("Press Enter to continue", 80);
    cin.ignore();
    cin.get();

    return 1;
  }
  int admin_page()
  {
  label1:
    system("cls");
    centerstring("Admin Menu", 80);
    cout << endl
         << endl;
    centerstring("1. Enter New Caller Info", 80);
    cout << endl;
    centerstring("2. View Emergency Unit Status", 80);
    cout << endl;
    centerstring("3. View Previous Callers", 80);
    cout << endl;
    centerstring("4. Change Admin Password", 80);
    cout << endl;
    centerstring("5. LogOut", 80);
    cout << endl
         << endl;
    centerstring("Enter Your choice...", 80);
    unsigned int choice;

    cin >> choice;
    if (choice > 5 || choice <= 0)
    {
      centerstring("Invalid Input...press enter to try again...", 80);
      cin.ignore();
      cin.get();
      goto label1;
    }
    else
      return choice;
  }
} s;

int main()
{

  if (s.password_screen())
  { // cout<<s.welcome_screen();
    if (s.welcome_screen())
    {
      switch (s.admin_page())
      {
      case 1:
        break;
      case 2:
        break;
      case 3:
        break;
      case 4:
        s.set_password();
        cout << s.get_password();
        s.admin_page();
        break;
      case 5:
        // s.password_screen();
        break;
      default:
        cout << "This will never be invoked";
      }
    }
  }
  else
  {
    system("cls");

    centerstring("You Failed to Enter the correct Password", 80);
  }

  class Admin_screen_actions : public Password
  {
  public:
    // get_caller_info();
  };

  cout << "\n\nPress Enter to exit program...";

  cin.ignore();
  cin.get();
  return 0;
  // caller_info c1;
  // c1.get_caller_name();
  // c1.get_emr_type();
  // c1.get_urgency();
  // c1.get_ph_number();
  // c1.get_location();
  // c1.show_caller_info();
}