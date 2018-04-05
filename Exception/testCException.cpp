#include <iostream>
#include "Exception.h"

void testException(void) {
    std::string inputLib;
    unsigned inputCode;
    while (true){
        std::cout << "Saisir le libellé : ";
        getline(std::cin, inputLib);
        if (std::cin.eof()) break;
        std::cout << "Saisir le code    : ";
        std::cin >> inputCode;
        if (std::cin.eof()) break;
        nsUtil::Exception testException (inputLib, inputCode);
        testException.display();
        std::cin.ignore(512, '\n');
    }
}

using namespace std;

int main()
{
    testException();
    return 0;
}
