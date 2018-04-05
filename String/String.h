#ifndef STRING_H
#define STRING_H
#include <string>

namespace nsUtil{

class String: public std::string
{
public:
    String (void);
    String (const char * NTCTS);
    String (const char * NTCTS, size_type size);
    String (const std::string & S, size_type pos = 0, size_type size = npos);
    String (size_type size, char c);
    String toupper(void) const;
    String tolower(void) const;
    bool isalpha(void) const;
    bool isdigit(void) const;
    bool isalnum(void) const;
    bool isxdigit(void) const;
    bool islower(void) const;
    bool isupper(void) const;
    bool isspace(void) const;
};

}
#endif // STRING_H
