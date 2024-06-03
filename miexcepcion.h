#include <exception>
#include <iostream>
using std:: exception;
using std::cout;
using std:: endl;

class Miexcepcion:public excepcion
{
    public:
    string mensaje;
    Miexcepcion(string m)
    {
        mensaje = m;
    }
    void imprimir()
    {
        cout<<"En objeto miexcepcion el mensaje es: "<<mensaje<<endl;
    }
};