#include "Curso.h"
Curso::Curso()
{
    _cantAlumnos=0;
}

//setter
void Curso::setNombre(string nombre)
{
    _nombre=nombre;
}

void Curso::setCodigo(int codigo)
{
    _codigo=codigo;
}

void Curso::setProfesor(Profesor profesor)
{
    _profesor=profesor;
}

void  Curso::addAlumno(Alumno alumno)
{
    if(_cantAlumnos>10)
    {
        _alumnos[_cantAlumnos]=alumno;
        _cantAlumnos++;
    }
}

//getter

string Curso::getNombre()
{
    return _nombre;
}

int Curso::getCodigo()
{
    return _codigo;
}

Profesor Curso::getProfesor()
{
    return _profesor;
}

Alumno Curso::getMejorAlumno()
{
    Alumno mejorAlumno= _alumnos[0];
    for(int i=1;i<_cantAlumnos;i++)
    {
        if (_alumnos[i].getNota()>mejorAlumno.getNota())
        {
            mejorAlumno=_alumnos[i];
        }
    }
    return mejorAlumno;
}
