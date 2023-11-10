#include <iostream>

int main(){

    //CONSTs
    int interLERTRAS_MINIMO = 2; 
    int interLERTRAS_MAXIMO = 26;
    int intPOSICIONES_MINIMO = 3;
    int intPOSICIONES_MAXIMO = 10;
    //VARS
    int intCantidadDeLetras = 0, intNumeroDePosiciones = 0;
    bool blnSePermitenDuplicados = false;
    int intRonda = 1;
    char chrOpcion;
    
    //Mostramos una descripcion del juego 
    std::cout << (char)173 << "Decrypti! Versi" << (char)162 << "n 0.2\n";
    std::cout << "Copyright (c) 1999. Liberty Associates, Inc.\n" << std:: endl;

    std::cout << "Hay dos formas de jugar " << (char)173 << "Dicrypti!: \n";
    std::cout << "Intente adivinar un patr" << (char)162 << "n";
    std::cout << "Creado por m" << (char)161 << ", \n ";
    std::cout << "o bien, yo puedo intentarlo con uno";
    std::cout << "Creado por usted.\n" << std:: endl; 

    std::cout << "Si uste es el que va a adivinar,\n";
    std::cout << "yo pensar" << (char)130 << " en un patron" <<(char)162 << "n";
    std::cout << " de letras (por ejemplo, abcde).\n" << std::endl;

    std::cout << "En cada turno, usted intentara" << (char)160;
    std::cout << "Adivinar el patron" << (char)162 <<"n y\n";
    std::cout << "yo le dir" << (char)130 << " cu" << (char)160 << "ntas";
    std::cout << "letras son correctas y cu" << (char)160 << "ntas\n";
    std::cout << "est" << (char)160 << "n en la";
    std::cout << "posici" << (char)162 << "n adecuada.\n" << std::endl;

    std::cout << "El objetivo es descubrir el c" << (char)162 << "digo";
    std::cout << "tan r" << (char)160 << "pido como sea\n";
    std::cout << "posible. Usted determinara cu" << (char)160 <<"ntas";
    std::cout << " letras y cu" << (char)160 << "ntas\n";
    std::cout << "Pociciones se pueden utilizar (por ejemplo 5, letras posibles\n";
    std::cout << "en 4 posiciones); as" << (char)161;
    std::cout << " como se permiten o no\n";
    std::cout << "duplicados en el patr" << (char)162 << "n"; 
    std::cout << " (por ejemplo, aabcd).\n" << std::endl;

    std::cout << "Si yo tengo que adivinar, usted\n";
    std::cout << "debe de crear el c" << (char)162 << "digo,";
    std::cout << " y calificar cada uno de mis intentos.\n" << std::endl;

    //Pedimos datos iniciales 
    std::cout << (char)168 << "Cu" << (char)160 << "ntas letras? (";
    std::cout << interLERTRAS_MINIMO << "-" << interLERTRAS_MAXIMO << "): ";
    std::cin >> intCantidadDeLetras;

    std::cout << (char)168 << "Cu" << (char)160 << "ntas posiciones (";
    std::cout << intPOSICIONES_MINIMO << "-" << intPOSICIONES_MAXIMO << "):";
    std::cin >> intNumeroDePosiciones;

    std::cout << (char)168 << "Se permiten letras duplicadas? (s/n) ";
    std::cin >> chrOpcion;

    return 0;
}