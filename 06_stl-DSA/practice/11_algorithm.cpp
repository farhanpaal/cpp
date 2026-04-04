#include <iostream>
#include <vector>
#include <algorithm>  // Include the <algorithm> library
using namespace std;

int main() {
  // Create a vector called cars that will store strings
  vector<string> cars = {"Volvo", "BMW", "Ford", "Mazda"};

  // Sort cars in alphabetical order
  sort(cars.begin(), cars.end());

  // Print carss in alphabetical order
  for (string car : cars) {
    cout << car << "\n";
  }

  return 0;
}