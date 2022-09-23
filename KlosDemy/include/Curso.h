#ifndef CURSO_H
#define CURSO_H
#include "Profesor.h"
#include "Alumno.h"


class Curso
{
    public:
        Curso();
        void setNombre(string nombre);
        void setCodigo(int codigo);
        void setProfesor(Profesor profesor);
        void addAlumno(Alumno alumno);

        string getNombre();
        int getCodigo();
        Profesor getProfesor();
        Alumno getMejorAlumno();
    protected:
    private:
        string _nombre;
        int _codigo;
        Profesor _profesor;
        Alumno _alumnos[10];
        int _cantAlumnos;

};

#endif // CURSO_H
