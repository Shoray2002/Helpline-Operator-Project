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

class Caller_info
{
  string name;
  string location;
  string emr_type;
  string urgency;
  string ph_number;

public:
  Caller_info()
  {
    name = "Tester";
    location = "Nowhere";
    emr_type = "0";
    urgency = "0";
    ph_number = "101";
  }
  void get_caller_name()
  {
    system("cls");
    cout << endl;
    centerstring("Enter name of caller", 80);
    centerstring("...", 79);
    cin >> name;
  }

  void get_location()
  {
    system("cls");
    cout << endl;
    centerstring("Enter location of caller", 80);
    centerstring("...", 79);
    cin >> location;
  }

  void get_emr_type()
  {
    system("cls");
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

  void get_urgency()
  {
    system("cls");
    cout << endl;
    centerstring("Enter color of urgency", 80);
    cout << endl;
    centerstring("\"r\" for Code Red", 80);
    cout << endl;
    centerstring("\"o\" for Code Orange", 80);
    cout << endl;
    centerstring("\"y\" for Code Yellow", 80);
    centerstring("...", 80);
    cin >> urgency;
  }

  void get_ph_number()
  {
    system("cls");
    cout << endl;
    centerstring("Enter caller's phone number: ", 80);
    centerstring("...", 80);
    cin >> ph_number;
  }
  void show_caller_info()
  {
    system("cls");
    cout << "Caller Name: " << name << endl;
    cout << "Emergency type: " << emr_type << endl;
    cout << "Status of urgency: " << urgency << endl;
    cout << "Caller Number: " << ph_number << endl;
    cout << "Caller's location: " << location << endl;
  }
};

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

class Show : public Password, public Caller_info
{
public:
  int password_screen()
  {
    system("cls");
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
  void info_in_page()
  {

    Caller_info::get_caller_name();
    Caller_info::get_location();
    Caller_info::get_emr_type();
    Caller_info::get_urgency();
    Caller_info::get_ph_number();
    Caller_info::show_caller_info();
  }
} s;

int main()
{

label3:
  if (s.password_screen())
  { // cout<<s.welcome_screen();
    if (s.welcome_screen())
    {
    label4:
      switch (s.admin_page())
      {
      case 1:
        s.info_in_page();
        cout << "\nPress Enter to go to admin menu...";
        cin.ignore();
        cin.get();
        goto label4;
        break;
      case 2:
        break;
      case 3:
        break;
      case 4:
        s.set_password();
        cout << s.get_password();
        cout << "\nPress Enter to go to admin menu...";

        cin.ignore();
        cin.get();

        // s.admin_page();
        goto label4;
        break;
      case 5:
        goto label3;
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
}