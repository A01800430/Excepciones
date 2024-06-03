#ifndef IMPRESORA_H
#define IMPRESORA_H

#include <iostream>
#include <string>
using std::string;
using std::cout;
using std::endl;

class Impresora {
private:
    string nombre;
    int numHojas;

public:
   
    Impresora(string nom, int nh);

    // Método para recargar hojas
    void recargar(int num);

    // Método para imprimir texto
    void imprimir(string txt);
};

#endif // IMPRESORA_H
