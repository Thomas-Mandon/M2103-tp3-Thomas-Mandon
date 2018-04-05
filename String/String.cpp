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
    for (unsigned char c: *this) if (!std::isalpha(c)) return false;
    return true;
}
bool String::isdigit(void) const{
    for (unsigned char c: *this) if (!std::isdigit(c)) return false;
    return true;
}
bool String::isalnum(void) const{
    for (unsigned char c: *this) if (!std::isalnum(c)) return false;
    return true;
}
bool String::isxdigit(void) const{
    for (unsigned char c: *this) if (!std::isxdigit(c)) return false;
    return true;
}
bool String::islower(void) const{
    for (unsigned char c: *this) if (!std::islower(c)) return false;
    return true;
}
bool String::isupper(void) const{
    for (unsigned char c: *this) if (!std::isupper(c)) return false;
    return true;
}
bool String::isspace(void) const{
    for (unsigned char c: *this) if (!std::isspace(c)) return false;
    return true;
}

}
