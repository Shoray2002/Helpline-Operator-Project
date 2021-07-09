#include <iostream>
#include <fstream>
#include "password.h"
#include "sha512.h"
using namespace std;

Password::Password()
{
  fstream pword;
  pword.open("hashed_pass.txt", ios::out);
  pword << sha512("0000");
  pword.close();
}
string Password::get_password_hash()
{
  fstream pword;
  pword.open("hashed_pass.txt", ios::in);
  pword.seekg(0, ios::beg);
  string temp;
  getline(pword, temp);
  pword.close();
  return temp;
}
void Password::set_password()
{

  cout << endl;
  centerstring("Enter a new password: ", 80);
  cin >> password;
  fstream pword;
  pword.open("hashed_pass.txt", ios::out);

  pword << sha512(password);
  pword.close();
}
