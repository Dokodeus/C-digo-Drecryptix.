#include <iostream>
using namespace std;

int main(){

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
    bool blnValidos = false;

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

    //Pedimos los datos iniciales 
    while (! blnValidos)
    {
        // ... la cantidad de letras.
        while (intCantidadDeLetras < intLETRAS_MINIMO ||
               intCantidadDeLetras > intLETRAS_MAXIMO )
        {
            cout << (char)168 << "Cu" << (char)160 << "ntas letras? (";
            cout << intLETRAS_MINIMO << "-";
            cout << intLETRAS_MAXIMO << "): ";
            cin >> intCantidadDeLetras;
            //¿Lacantidad de letras esta en el rango valido?
            if (intCantidadDeLetras < intLETRAS_MINIMO ||	
                intCantidadDeLetras > intLETRAS_MAXIMO)
            {
                cout << "Por favor introdusca un n" << (char)163 << "mero entre ";
                cout << intLETRAS_MINIMO << " y ";
                cout << intLETRAS_MINIMO << "." << endl;
            }
        }
        
        // ... el numero de posiciones.
        while (intNumeroDePosiciones < intPOSICIONES_MINIMO ||	
               intNumeroDePosiciones > intPOSICIONES_MAXIMO)
        {
            cout << (char)168 << "Cu" << (char)160 << "ntas posiciones? (";
            cout << intPOSICIONES_MINIMO << "-";
            cout << intPOSICIONES_MAXIMO << "):";
            cin >> intNumeroDePosiciones;
            //¿El numero de posiciones está dentro del rango válido?
            if (intNumeroDePosiciones < intPOSICIONES_MINIMO ||	
                intNumeroDePosiciones > intPOSICIONES_MAXIMO)
            {
                cout << "Por favor introdusca un n" << (char)163 << "mero entre ";
                cout << intPOSICIONES_MINIMO << " y ";
                cout << intPOSICIONES_MAXIMO << "." << endl;
            }
        }
        
        // ... si se permiten o no duplicados.
        chrOpcion = ' ';
        while (chrOpcion != 's' && chrOpcion != 'n')
        {
            cout << (char) 168 << "Se permiten letras duplicadas? (s/n)";
            cin >> chrOpcion;
        }
        blnSepermitenDuplicados = (chrOpcion == 's' ? true : false);

        //¿Los datos son validos?
        if (! blnSepermitenDuplicados &&
            intNumeroDePosiciones > intCantidadDeLetras)
        {
            cout << "\n" << (char)173 << "No puedo colocar ";
            cout << intNumeroDePosiciones << " letras sin duplicados si";
            cout << " s" << (char)162 << "lo cuento con";
            cout << " " << intCantidadDeLetras << "!\n";
            cout << "por favor int" << (char)130 << "ntelo de nuevo.\n" << endl;
            
            //cambiamos su valor para pedirlo nuevamente 
            intCantidadDeLetras = 0;
            intNumeroDePosiciones = 0;
        } else
            blnValidos = true;
    }
    
    return 0;
}
