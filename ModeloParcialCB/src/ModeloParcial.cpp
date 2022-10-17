#include "ModeloParcial.h"

ModeloParcial::ModeloParcial()
{

    //ctor
}

void ModeloParcial::Punto1()
{
    EstudiantesArchivo estu;
    ExamenesArchivo exam;
    int cant_estudiantes=estu.getCantidad();
    int cant_examenes=exam.getCantidad();
    int* exaXalumno= new int[cant_estudiantes]{};
    int cont=0;

    cout<<endl<<"================"<<endl;
    cout<<"ALUMNOS QUE NO RINDIERON EXAMEN EN EL 2022"<<endl;
    for(int i=0;i<cant_estudiantes;i++)
    {
        Estudiante estudiante=estu.leer(i);
        for(int x=0;x<cant_examenes;x++)
        {
            Examen E=exam.leer(x);
            if(estudiante.getLegajo()==E.getLegajo()&& E.getFecha().getAnio()==2022)
            {
                exaXalumno[i]++;
            }
        }
        if(exaXalumno[i]==0)
        {
        cout<<"LEGAJO #"<<estudiante.getLegajo()<<" /  "<<estudiante.getNombres()<<" "<<
        estudiante.getApellidos()<<endl;
        }
        else
        {
            cont++;
        }
    }
    if(cont==cant_estudiantes)
    {
        cout<<"TODOS LOS ESTUDIANTES RINDIERON EXAMEN EN 2022"<<endl;
    }

}



void ModeloParcial::Punto2()
{
    EstudiantesArchivo estu;
    ExamenesArchivo exam;
    int cant_estudiantes=estu.getCantidad();
    int cant_examenes=exam.getCantidad();

    cout<<"LISTADO ALUMNOS"<<endl<<endl;
    cout<<endl<<"================================"<<endl;
    cout<<"LEGAJO   NOMBRE   APELLIDO   CANTAPROB   CANTDESAPROB"<<endl;
    for(int i=0;i<cant_estudiantes;i++)
    {
        int* CanDesaprob=new int[cant_estudiantes]{};
        int* CanAprob=new int[cant_estudiantes]{};
        Estudiante estudiante=estu.leer(i);
        for(int x=0;x<cant_examenes;x++)
        {
            Examen E=exam.leer(x);
            if(estudiante.getLegajo()==E.getLegajo() && E.getNota()>=6)
            {
                CanAprob[i]++;
            }
            if(estudiante.getLegajo()==E.getLegajo() && E.getNota()<6)
            {
                CanDesaprob[i]++;
            }

        }
        cout<<estudiante.getLegajo()
        <<"\t"<<estudiante.getNombres()
        <<"\t"<<estudiante.getApellidos()
        <<"\t"<<CanAprob[i]
        <<"\t"<<CanDesaprob[i]<<endl;
    }
}

void ModeloParcial::Punto3()
{
    EstudiantesArchivo estu;
    ExamenesArchivo exam;
    int cant_estudiantes=estu.getCantidad();
    int cant_examenes=exam.getCantidad();
    int* exaXalumno= new int[cant_estudiantes]{};
    int cantMasdeDos=0;

    cout<<"ALUMNOS REPITIENDO EXAMEN"<<endl<<endl;
    for(int i=0;i<cant_estudiantes;i++)
    {

        int IDmaterias[60]{};
        bool masdedos=false;
        Estudiante estudiante=estu.leer(i);
        for(int x=0;x<cant_examenes;x++)
        {
            Examen E=exam.leer(x);
            if(estudiante.getLegajo()==E.getLegajo()
            && E.getFecha().getAnio()<=2022
            && E.getFecha().getAnio()>=2018)
            {
                IDmaterias[E.getIDMateria()-1]++;
                if(IDmaterias[E.getIDMateria()-1]>=2)
                {
                    masdedos=true;
                }
            }
        }
        if(masdedos==true)
        {
            cantMasdeDos++;
        }
    }
    cout<<cantMasdeDos<<endl;
}
