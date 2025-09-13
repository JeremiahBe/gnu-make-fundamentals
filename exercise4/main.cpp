#include "file_utils.h"
#include "math_utils.h"
#include <iostream>
using namespace std;

int main() {
    cout << "File operations demo:" << endl;
    print_separator();
    
    cout << "Math operations demo:" << endl;
    cout << "10 + 5 = " << add(10, 5) << endl;
    cout << "10 - 5 = " << subtract(10, 5) << endl;
    
    return 0;
}