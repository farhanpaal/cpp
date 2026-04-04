// sorting, searching, modifying

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// SORTING ALGORITHM
int sortingAlgo()
{
  vector<string> cars = {"buggati", "lambo", "maruiti", "altroz"};
  sort(cars.begin(), cars.end());
  for (string car : cars)
  {
    cout << car << "\n";
  }
}

int searchingAlgo()
{
  vector<string> names = {"paal", "laal", "baal", "maal"};
  // find returns iterator which we store in presence
  auto presence = find(names.begin(), names.end(), "paal");
  if (presence != names.end())
  {
    cout << "present";
  }
  else
  {
    cout << "Absent";
  }

  // To search for the first element that is greater than a specific value, you can use the upper_bound() function:

  // Create a vector called numbers that will store integers
  vector<int> numbers = {1, 7, 3, 5, 9, 2};

  // Sort the vector in ascending order
  sort(numbers.begin(), numbers.end());

  // Find the first value that is greater than 5 in the sorted vector
  auto it1 = upper_bound(numbers.begin(), numbers.end(), 5);

  // The upper_bound() function is typically used on sorted data structures. That's why we first sort the vector in the example above.

  // To find the smallest element in a vector, use the min_element() function:
  vector<int> nums = {1, 7, 3, 5, 9, 2};

  // Find the smallest number
  auto it2 = min_element(nums.begin(), nums.end());

  // To find the largest element, use the max_element() function:
  vector<int> elems = {1, 7, 3, 5, 9, 2};

  // Find the largest number
  auto it3 = max_element(elems.begin(), elems.end());
}

int modifyingAlgo()
{
  vector<int> nums = {4, 5, 9, 8, 65};
  // Create a vector called copiedNumbers that should store 6 integers
  vector<int> copiedNumbers(8);
  copy(nums.begin(), nums.end(), copiedNumbers.begin());
  // Print elements of copiedNumbers
  for (int num : copiedNumbers)
  {
    cout << num << "\n";
  }

  // fill all elements with number 7
  vector<int> palNum(6);
  fill(palNum.begin(), palNum.end(), 7);
  for (int num : palNum)
  {
    cout << num;
  }
}

int main()
{
  // sortingAlgo();
  // searchingAlgo();
  modifyingAlgo();

  return 0;
}
