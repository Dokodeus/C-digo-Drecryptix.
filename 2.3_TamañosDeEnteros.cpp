
#include <iostream>

using namespace std;

int main(){
    cout << "El tema" << (char)164 << "o de una variable de tipo.... \n";
    cout << "   int      \tes de:\t" << sizeof(int)     << "bytes.\n";
    cout << "   short int\tes de:\t" << sizeof(short)   << "bytes.\n";
    cout << "   long int \tes de:\t" << sizeof(long)    << "bytes.\n";
    cout << "   char     \tes de:\t" << sizeof(char)    << "bytes.\n";
    cout << "   float    \tes de:\t" << sizeof(float)   << "bytes.\n";
    cout << "   double   \tes de:\t" << sizeof(double)  << "bytes.\n";
    cout << "   bool     \tes de:\t" << sizeof(bool)    << "bytes.\n";

    return 0;
}