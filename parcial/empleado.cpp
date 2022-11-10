#include "empleado.h"

Empleado::Empleado()
{

}

float Empleado::salario() const
{
    return _salario;
}

void Empleado::setSalario(float salario)
{
    _salario = salario;
}

string Empleado::cedula() const
{
    return _cedula;
}

void Empleado::setCedula(const string &cedula)
{
    _cedula = cedula;
}

string Empleado::apellido() const
{
    return _apellido;
}

void Empleado::setApellido(const string &apellido)
{
    _apellido = apellido;
}

string Empleado::nombre() const
{
    return _nombre;
}

void Empleado::setNombre(const string &nombre)
{
    _nombre = nombre;
}
