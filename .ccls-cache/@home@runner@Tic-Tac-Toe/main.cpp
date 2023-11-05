#include <iostream>
using namespace std;

int main() {
  // grid numbers
  char grid[3][3] = {{'1', '2', '3'}, {'4', '5', '6'}, {'7', '8', '9'}};

  // grid structure

  cout << "   |   |   \n";
  cout << " " << grid[0][0] << " | " << grid[0][1] << " | " << grid[0][2]
       << "\n";
  cout << "___|___|___\n";
  cout << "   |   |    \n";
  cout << " " << grid[1][0] << " | " << grid[1][1] << " | " << grid[1][2]
       << "\n";
  cout << "___|___|___\n";
  cout << "   |   |   \n";
  cout << " " << grid[2][0] << " | " << grid[2][1] << " | " << grid[2][2]
       << "\n";
  cout << "   |   |   \n";
}