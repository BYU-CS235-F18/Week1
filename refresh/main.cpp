#include <fstream>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include "Fisherman.h"

using namespace std; // This lets you use standard stuff like string and cout without having to type std::string and std::cout every time

// Main function
int main(int argc, char *argv[]) // Main function will start program and should always have this signature
{
  // Error handling
  if(argc != 2)
  {
    cout << "Usage: " << argv[0] << " <filename>" << endl;
    return 1;
  }

  // Open input file
  ifstream fileHandle(argv[1]);
  if(!fileHandle.is_open())
  {
    cout << "Could not open file " << argv[1] << endl;
    return 2;
  }

  // Structures to hold data from input file
  string name;
  int amount;
  string type;
  vector<Fisherman> fishermen;
  string line;
  string search;

  // Read input file
  while(getline(fileHandle, line)) // Read one line of file into string named "line"
  {
    stringstream ss(line);
    if(ss >> name >> amount >> type) // If a line has this format, then make a fisherman
    {
      Fisherman fisherman = Fisherman(name, amount, type);
      fishermen.push_back(fisherman);
    }
    else if(line.substr(0, 7) == "Search ") // If a line starts with "Search " then set the type of fish wanted
    {
      search = line.substr(7, line.length());
    }
  }

  // Print out all fishermen
  for(int i=0; i < fishermen.size(); i++)
  {
    cout << fishermen[i].getName() << "\t\t" << fishermen[i].getAmount() << "\t" << fishermen[i].getType() << endl;
  }
  cout << endl;

  // Print out fishermen who have the type wanted
  cout << "Type wanted: " << search << endl;
  for(int i=0; i < fishermen.size(); i++)
  {
    if(fishermen[i].getType() == search)
    {
      cout << fishermen[i].getName() << " caught " << fishermen[i].getAmount() << " pounds of " << fishermen[i].getType() << endl;
    }
  }

  return 0;
}
