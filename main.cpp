#include <iostream>
#include <string>
#include "impresora.h"
#include "miexcepcion.h"
using std::string;
using std::cout;
using std::endl;

int main()
{
    Impresora canon("Canon print EX2",50);
    try{
    canon.imprimir("Hola mundo")
    canon.imprimir("Claudia Sheinbaum, una científica de izquierda de 61 años, deberá combatir la violencia que dejó casi 190.000 muertos durante el gobierno saliente de Andrés Manuel López Obrador, su padrino político, y que frena el crecimiento de México, dijeron analistas a la AFP. Otros retos son reducir la pobreza en la que vive un tercio de la población, mitigar el creciente impacto del cambio climático en un país con sequías y escasez de agua y administrar la compleja relación con Estados Unidos que se augura tensa. Sheinbaum promete profundizar las reformas sociales de AMLO y gobernar para los más desfavorecidos. ¿Pero cuán leal le será? ¿Podrá imponer su propia agenda? Las respuestas, coinciden analistas, aún son un misterio.")
    }
    catch(Miexcepcion &m)
    {
        string men = mensaje
        cout<<"excepcion lanzada, el mensaje es: "<<m<<endl;
    }
    catch(string &s)
    {
        cout<<"string lanzado, el mensaje es: "<<s<<endl;

    }
    catch(const char * s)
    {
        cout<<"char lanzado, mensaje es: "<<s<<endl;
    }
    catch(int i)
    {
        cout<<"int lanzado, mensaje es: "<<i<<endl;
    }
    catch(...)
    {
        cout<<"En el atrapa todo"<<endl;
    }
    return 0;
}