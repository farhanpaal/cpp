// For n disks, the minimum number of moves is always: 2^n-1
#include <iostream>
using namespace std;

void towerOfHanoi(int n, char source, char destination, char auxiliary) {
    if (n == 1) {
        // Base case: only one disk to move
        cout << "Move disk 1 from " << source << " to " << destination << endl;
        return;
    }

    // Step 1: Move n-1 disks from source to auxiliary
    towerOfHanoi(n - 1, source, auxiliary, destination);

    // Step 2: Move nth disk from source to destination
    cout << "Move disk " << n << " from " << source << " to " << destination << endl;

    // Step 3: Move n-1 disks from auxiliary to destination
    towerOfHanoi(n - 1, auxiliary, destination, source);
}

int main() {
    int n;
    cout << "Enter number of disks: ";
    cin >> n;

    cout << "Steps to solve Tower of Hanoi:\n";
    towerOfHanoi(n, 'A', 'C', 'B');  // A = source, C = destination, B = auxiliary

    return 0;
}