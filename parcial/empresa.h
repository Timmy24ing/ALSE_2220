#ifndef EMPRESA_H
#define EMPRESA_H

#include <list>
#include "empleado.h"

class Empresa
{
public:
    Empresa();
    Empleado& masTrabajador();
    Empleado& menosTrabajador();
    float   TotalHorasMes();
    size_t  diaMasTrabajado();
    size_t  diaMenosTrabajado();
    float   TotalHorasDia(size_t dia);


private:
    list<Empleado> _listadoTrabajadores;
};

#endif // EMPRESA_H
