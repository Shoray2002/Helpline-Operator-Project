#include <iostream>
#include <iomanip>
#include "show.h"
#include "sha512.h"
#include "units.h"

using namespace std;
int Show::password_screen()
{
  system("clear||cls");
  string p_in;
  int chances = 3;
  centerstring("Welcome", 80);
  cout << endl;
  while (chances)
  {
    cout << endl;
    centerstring("Enter Your Admin Password:", 80);
    cin >> p_in;
    if (sha512(p_in) == Password::get_password_hash())
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
int Show::welcome_screen()
{
  system("clear||cls");
  centerstring("Welcome Administrator", 80);
  cout << endl
       << endl;
  centerstring("Press Enter to continue", 80);
  cin.ignore();
  cin.get();

  return 1;
}
int Show::admin_page()
{

adlabel:
  system("clear||cls");
  centerstring("Admin Menu", 80);
  cout << endl
       << endl;
  centerstring("1. Enter New Caller Info", 80);
  cout << endl;
  centerstring("2. View Remaining Units", 80);
  cout << endl;
  centerstring("3. View/Edit Caller Log", 80);
  cout << endl;
  centerstring("4. Set Number of Units Available Today", 80);
  cout << endl;
  centerstring("5. Change Admin Password", 80);
  cout << endl;
  centerstring("6. LogOut", 80);
  cout << endl
       << endl;
  centerstring("Enter Your choice...", 80);
  unsigned int choice;

  cin >> choice;
  if (choice > 6 || choice <= 0)
  {
    centerstring("Invalid Input...press enter to try again...", 80);
    cin.ignore();
    cin.get();
    goto adlabel;
  }
  else
    return choice;
}
void Show::view_caller_page()
{
  system("cls||clear");
  centerstring("Caller Information", 80);
  cout << endl
       << endl;
  cout << "\nLog file is opening...";
  system(".\\Data.csv||xdg-open ./Data.csv");
  cout << "\nLog file closed...";
}
