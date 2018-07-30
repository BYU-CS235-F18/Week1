#include <iostream>
#include <vector>

using namespace std;

void print(vector <string> items) {

  cout << '[';

  for (unsigned i = 0; i < items.size(); i++) {
    if (i > 0)
      cout << ", ";
    cout << '\'' << items.at(i) << '\'';
  }
  cout << ']' << endl;
}
