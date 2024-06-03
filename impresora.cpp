#include <iostream>
#include <string>
#include "impresora.h"
#include "miexcepcion.h"
using std::string;
using std::cout;
using std::endl;

Impresora::Impresora(string nom, int nh)
{
    nombre=nom;
    numHojas=nh;
}

void Impresora::recargar(int num)
{
    numHojas=numHojas+num;
}

void Impresora::imprimir(string txt)
{
    int letras=txt.size();
    int numeroHojas=letras/3;
    if(numeroHojas>numHojas)
    {
       // string s="Error en hojas";
        //throw("Error en hojas");
        Miexcepcion ex ("Error en objeto");
        throw(ex);
    }
    numHojas=numHojas-numeroHojas;
    cout<<"Imprimiendo pagina: "<<txt<<endl;
    cout<<"Hojas restantes: "<<numHojas<<endl;
}