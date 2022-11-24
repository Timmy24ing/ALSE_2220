#ifndef EMPLEADO_H
#define EMPLEADO_H

#include <string>
#include <iostream>
#include <vector>

using namespace std;


class Empleado{
  public:
    Empleado(string nombre, string apellido, string cedula, float salario);

    string nombre() const;
    void setNombre(const string &nombre);

    string apellido() const;
    void setApellido(const string &apellido);

    string cedula() const;
    void setCedula(const string &cedula);

    float salario() const;
    void setSalario(float salario);

    void guardarHoraExtra_dia(size_t dia, float he);

    float TotalHorasTrabajadasMes();
    vector<float> Horas_dia_mes();

private:
    Empleado();
    string  _nombre, _apellido, _cedula;
    float   _salario;
    vector<float> _horasExt;
};

#endif // EMPLEADO_H
