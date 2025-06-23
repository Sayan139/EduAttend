#include <iostream>
#include <string>
#include <vector>
#include <algorithm>            
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<string> names(n);
    for (int i = 0; i < n; ++i) {
        cin >> names[i];
    }
    
    sort(names.begin(), names.end());
    
    for (const auto& name : names) {
        cout << name << endl;
    }
    
    return 0;
}
// This code reads a number of names from standard input, sorts them in alphabetical order, and
// then prints them out, each on a new line. The use of the C++14 standard allows for cleaner syntax and
// better performance with the STL (Standard Template Library) features like `std::vector` and `std::sort`.
// The code is efficient and straightforward, leveraging the STL for sorting and input/output operations.
// The program is designed to handle a variable number of names, making it flexible for different inputs    
