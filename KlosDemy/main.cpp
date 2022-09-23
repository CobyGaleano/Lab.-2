#include "Curso.h"

int main()
 {
    Curso cursos;
    int opcion;
    do {

    cout << "MENU PRINCIPAL" << endl;
    cout << "--------------" << endl;
    cout << "1) CARGAR PROFESOR" << endl;
    cout << "2) CARGAR ALUMNO" << endl;
    cout << "3) ESTADISTICA" << endl;
    cout << "--------------" << endl;
    cout << "0) SALIR" << endl;

    cin >> opcion;

    switch(opcion)
    {
        case 1:
        {
            //CARGAR PROFESOR
            Profesor profe;
            profe.cargar();
            cursos.setProfesor(profe);
        }
        break;

        case 2:
        {
            //CARGAR ALUMNO
            Alumno alumno;
            alumno.cargar();
            cursos.addAlumno(alumno);

        }
        break;

        case 3:{
            //ESTADISTICA
            cout<<"El profesor es: "<<cursos.getProfesor().getNombre()<<endl;
            cout<<"El alumno con mayor nota es: "<<cursos.getMejorAlumno().getNombre()<<endl;


        }
        break;

        case 0:
        {
            //SALIR

        }
        break;
        default:
            cout<<"OPCION INCORRECTA"<<endl;
        break;
    }

    }while(opcion!=0);

    return 0;
    }
