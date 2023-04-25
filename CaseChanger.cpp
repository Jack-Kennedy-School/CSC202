#include <string>
#include <cctype>

std::string string_to_upper(const std::string& str) {
    std::string result;
    result.reserve(str.size());
    for (char c : str) {
        result += std::toupper(c);
    }
    return result;
}

std::string string_to_lower(const std::string& str) {
    std::string result;
    result.reserve(str.size());
    for (char c : str) {
        result += std::tolower(c);
    }
    return result;
}
