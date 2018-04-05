#ifndef EXCEPTION_H
#define EXCEPTION_H
#include <exception>
#include <string>

namespace nsUtil {
class Exception : public std::exception
{
    std::string myLibelle;
    unsigned myCodeErr;
public:
    Exception(std::string libelle = "Default exception", unsigned codeErr = 0);
    virtual ~Exception(void);
    std::string getLibelle(void) const;
    unsigned getCodeErr(void) const;
    virtual const char* what(void) const noexcept;
    void display(void) const;
};
}
#endif // EXCEPTION_H
