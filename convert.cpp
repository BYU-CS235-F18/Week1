#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main (int argc, char *argv[])
{
  int answer = 42;
  string s;
  stringstream ss;

  // Convert int to string
  // s = "The answer is " + answer; // THIS DOES NOT WORK
  ss << answer;
  s = "The answer is " + ss.str(); // This works
  cout << s << endl;

  // Convert string to int
  string snumber = "42";
  int value;
  // value = 2 * snumber; // THIS DOES NOT WORK
  ss.str(""); // Empty the stringstream (or you could create a new one with a new name)
  ss << snumber;
  int number;
  ss >> number; // Conversion
  value = 2*number;
  cout << value << endl;
}
