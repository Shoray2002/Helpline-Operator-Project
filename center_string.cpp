#include<iostream>
#include<string>
#include"center_string.h"
using namespace std;
void Centerstring::centerstring(string s, int width)

  {
    int l = s.length();
    int pos = (int)((width - l) / 2);
    for (int i = 0; i < pos; i++)
      cout << " ";
    cout << s;
  }
