#include "iostream"
using namespace std;

int main()
{
    //CONSTs
    const int intLETRAS_MINIMO = 2;
    const int intLETRAS_MAXIMO = 26;
    const int intPOSICIONES_MINIMO = 3;
    const int intPOSICIONES_MAXIMO = 10;
    //VARs
    int intCantidadDeLetras = 0, intNumeroDePosiciones = 0;
    bool blnSepermitenDuplicados = false;
    int intRonda = 1; 
    char chrOpcion;

    // Mostramos una decripcion del juego
    cout << (char)173 << "Decryptix! versi" << (char)182 << "n 0.2\n";
    cout << "Copyright (c) 1999. Liberty Associates, Inc.\n" << endl; 

    cout << "Hay dos formas de jugar " << (char)173 << "Decryptix:\n";
    cout << "intente adivinar un patro" << (char)162 << "n";
    cout << "creado por m" << (char)161 << ", \n";
    cout << "o bien, yo puedo intentarlo con uno"; 
    cout << "creado por usted. \n" << endl;

    cout << "Si usted es el que va a divinar,\n";
    cout << "yo pensar" << (char)130 << "en un patr" << (char)162 << "n"; 
    cout << "de letras (por ejemplo, abcde).\n" << endl;

    cout << "En cada turno, usted intent" << (char)160;
    cout << "adivinar el patr" << (char)162 << "n y \n";
    cout << "yo le dir" << (char)130 << " cu" << (char)160 << "ntas";
    cout << " letras son correctas y cu" << (char)160 << "ntas";
    cout << "est" << (char)160 << "n en la";
    cout << " posici" << (char)162 << "n adecuada.\n" << endl;

    cout << "El objetivo es descubir el c" << (char)162 << "digo";
    cout << " tar r" << (char)160 << "pido como sea\n";
    cout << "posible. Usted determina cu" << (char)160 << "ntas";
    cout << " letras y cu" << (char)160 << "ntas\n";
    cout << " pocisioiones se pueden utilizar (por ejemplo, 5 letras posibles\n";
    cout << "en 4 posiciones), as" << (char)161;
    cout << " como si se permiten o no\n";
    cout << "duplicados en el patr" << (char)162 << "n";
    cout << " (por ejemplo aabcd).\n" << endl;

    cout << "Si yo tengo que adivinar, usted\n"; 
    cout << "usted debe crear el c" << (char)162 << "digo,";
    cout << " y calificar uno de mis intentos.\n" << endl;

    // Pedimos los datos iniciales
    cout << (char)168 << "Cu" << (char)160 << "ntas letras? (";
    cout << intLETRAS_MINIMO << "-" << intLETRAS_MAXIMO << "): ";
    cin >> intCantidadDeLetras;

    cout << (char)168 << "Cu" << (char)160 << "ntas posiciones? (";
    cout << intPOSICIONES_MINIMO << "-" << intPOSICIONES_MAXIMO << "): ";
    cin >> intNumeroDePosiciones;

    cout <<  (char)168 << "Sepermoten letras duplicadas? (s/n) ";
    cin >> chrOpcion;

    return 0;
}