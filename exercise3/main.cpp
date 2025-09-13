#include "string_utils.h"
#include <iostream>
using namespace std;

int main() {
    string text = "Hello World";
    cout << "Original: " << text << endl;
    cout << "Uppercase: " << to_upper(text) << endl;
    cout << "Length: " << get_length(text) << endl;
    return 0;
}
