#include <iostream>
#include "csvfile.h"
#include <string.h>
using namespace std;

int main()
{ string name = "Gurav Singhal";
  string location = "Michael Vista";
  string emr_type = "pf";
  string urgency = "boy";
  string ph_number = "8279883099";
  
  try
  { 
    
    csvfile csv("Data.csv"); // throws exceptions!
    // Header
    csv << "X"
        << "NAME"
        << "LOCATION"
        << "EMER_TYPE"
        << "URGENCY"
        << "PH.NO." << endrow;
    // Data

    csv<< name << location << emr_type << urgency << ph_number << endrow;
   
  }
  catch (const std::exception &ex)
  {
    std::cout << "Exception was thrown: " << ex.what() << std::endl;
  }
  return 0;
}