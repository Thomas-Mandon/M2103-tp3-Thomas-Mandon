#include "Exception.h"
#include <iostream>
#include <exception>
#include <string>

namespace nsUtil {

Exception::Exception(std::string libelle, unsigned codeErr): myLibelle(libelle), myCodeErr(codeErr){}

Exception::~Exception(void){}

std::string Exception::getLibelle(void) const{return myLibelle;}

unsigned Exception::getCodeErr(void) const{return myCodeErr;}

const char* Exception::what(void) const noexcept{return myLibelle.c_str();}

void Exception::display(void) const{
    std::cout << "Exception : " << myLibelle << std::endl
              << "Code      : " << myCodeErr << std::endl;
}

}
