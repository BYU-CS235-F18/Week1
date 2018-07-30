#include <fstream>
#include <iostream>
#include <vector>
#include <algorithm>
#include "print.h"

using namespace std;

int main(int argc, char *argv[]) 
{
  vector<string> names;
  cout << "Hello World!" << endl;
  //cout << "argc "<<argc<<" argv[0] "<<argv[0]<<" argv[1]= "<<argv[1]<<endl;

  if(argc != 2) {
    cout << "Usage: "<<argv[0]<<" <filename>"<<endl;
  } else {
    ifstream fileHandle(argv[1]);
    if(!fileHandle.is_open()) {
      cout << "Could not open file"<<endl;
    } else {
      string name;
      int age;
      while(fileHandle>>name>>age) {
        cout << "Name "<<name<<" Age "<<age<<endl;
        names.push_back(name);
      }
    }
  }

  sort(names.begin(), names.end());
  ofstream outHandle("sorted.txt");
  for(vector<string>::iterator it=names.begin();
  it!=names.end(); it++) {
    cout << *it<<endl;
    outHandle << *it <<endl;
  }

  cout << "Using print"<<endl;
  print(names);
}
