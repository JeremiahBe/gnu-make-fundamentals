#include "string_utils.h"
#include <algorithm>
#include <cctype>

std::string to_upper(const std::string& str) {
    std::string result = str;
    std::transform(result.begin(), result.end(), result.begin(), ::toupper);
    return result;
}

int get_length(const std::string& str) {
    return str.length();
}
