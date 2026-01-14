#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    int n;

    cout << "Enter number of names: ";
    cin >> n;
    cin.ignore();  

    vector<string> names;

    // Get names from user (with empty input validation)
    for(int i = 0; i < n; i++) {
        string name;

        while (true) {
            cout << "Enter name " << i + 1 << ": ";
            getline(cin, name);

            if (name.empty()) {
                cout << "Name cannot be empty. Please try again.\n";
            } else {
                break;
            }
        }

        names.push_back(name);
    }

    // Display original list
    cout << "\nOriginal Names:\n";
    for(string name : names) {
        cout << name << endl;
    }

    // Ask for sorting order
    int choice;
    cout << "\nChoose sorting order:\n";
    cout << "1 = Ascending (A to Z)\n";
    cout << "2 = Descending (Z to A)\n";
    cout << "Enter your choice: ";
    cin >> choice;

    // Sort based on choice
    sort(names.begin(), names.end());

    if (choice == 2) {
        reverse(names.begin(), names.end());
    }

    // Display sorted list
    cout << "\nSorted Names:\n";
    for(string name : names) {
        cout << name << endl;
    }

    return 0;
}

