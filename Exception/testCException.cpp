#include <iostream>
#include "Exception.h"

using namespace std;

namespace {

void testException(void) {
    string inputLib;
    unsigned inputCode;
    while (true){
        cout << "Saisir le libellé : ";
        getline(cin, inputLib);
        if (cin.eof()) break;
        cout << "Saisir le code    : ";
        cin >> inputCode;
        if (cin.eof()) break;
        nsUtil::Exception testException (inputLib, inputCode);
        testException.display();
        cin.ignore(512, '\n');
    }
}

}

int main()
{
    testException();
    return 0;
}
