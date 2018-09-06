#include <string>

using namespace std; // This lets you use standard stuff like string and cout without having to type std::string and std::cout every time

// Fisherman Class
class Fisherman
{
private: // Can be accessed by class methods, but not external functions
  string name;
  int amount;
  string type;
public: // Can be accessed by class methods and external functions
  Fisherman(string name, int amount, string type); // Constructor
  ~Fisherman(); // Destructor
  string getName();
  int getAmount();
  string getType();
}; // Remember ; at end of class definition
// END Fisherman Class
