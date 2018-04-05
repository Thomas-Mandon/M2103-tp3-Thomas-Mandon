#include "String.h"
#include <string>
#include <cctype>

namespace nsUtil {

String::String (void): std::string(){}
String::String (const char * NTCTS): std::string(NTCTS){}
String::String (const char * NTCTS, size_type size): std::string(NTCTS, size){}
String::String (const std::string & S, size_type pos, size_type size): std::string(S, pos, size){}
String::String (size_type size, char c): std::string(size, c){}

String String::toupper(void) const {
    std::string s;
    for (unsigned char c: *this) s = s + (char)std::toupper(c);
    return s;
}
String String::tolower(void) const {
    std::string s;
    for (unsigned char c: *this) s = s + (char)std::tolower(c);
    return s;
}

bool String::isalpha(void) const{
    bool result = true;
    for (unsigned char c: *this) if (!std::isalpha(c)) result = false;
    return result;
}
bool String::isdigit(void) const{
    bool result = true;
    for (unsigned char c: *this) if (!std::isdigit(c)) result = false;
    return result;
}
bool String::isalnum(void) const{
    bool result = true;
    for (unsigned char c: *this) if (!std::isalnum(c)) result = false;
    return result;
}
bool String::isxdigit(void) const{
    bool result = true;
    for (unsigned char c: *this) if (!std::isxdigit(c)) result = false;
    return result;
}
bool String::islower(void) const{
    bool result = true;
    for (unsigned char c: *this) if (!std::islower(c)) result = false;
    return result;
}
bool String::isupper(void) const{
    bool result = true;
    for (unsigned char c: *this) if (!std::isupper(c)) result = false;
    return result;
}
bool String::isspace(void) const{
    bool result = true;
    for (unsigned char c: *this) if (!std::isspace(c)) result = false;
    return result;
}

}
