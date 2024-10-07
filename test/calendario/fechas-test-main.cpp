/******************************************************************************\
 * Curso de Programación 1. Práctica 3
 * Autores: Miguel Ángel Latre
 * Última revisión: 22 de octubre de 2018
 * Resumen: Módulo principal de un programa que hace pruebas unitarias de
 *          las funciones del módulo «fechas».
 * Nota: Leer el fichero README.md, que contiene instrucciones para su 
 *       compilación y ejecución.
\******************************************************************************/

 #include <iostream>
 #include "fechas-test.hpp"
 #include "testing-prog1.hpp"
 using namespace std;


/*
 * Programa que realiza pruebas unitarias de las funciones del módulo de
 * biblioteca «fechas». Por cada prueba, indica los parámetros utilizados y si
 * el resultado es correcto o no. Además, en los casos negativos, indica las
 * salidas producidas por la función y las que debería haber producido.
 */
int main() {
    bool todoOk = true;

    probarComponer(31, 10, 2016, 20161031, todoOk);
    probarComponer(1, 11, 2016, 20161101, todoOk);
    probarComponer(19, 9, 2016, 20160919, todoOk);
    probarComponer(1, 2, 2017, 20170201, todoOk);

    probarDescomponer(20161031, 31, 10, 2016, todoOk);
    probarDescomponer(20161101, 1, 11, 2016, todoOk);
    probarDescomponer(20160919, 19, 9, 2016, todoOk);
    probarDescomponer(20170201, 1, 2, 2017, todoOk);

    probarEsAnterior(20161031, 20161031, false, todoOk);
    probarEsAnterior(20161030, 20161031, true, todoOk);
    probarEsAnterior(20161031, 20161030, false, todoOk);
    probarEsAnterior(20161130, 20161031, false, todoOk);
    probarEsAnterior(20161031, 20161130, true, todoOk);
    probarEsAnterior(20161130, 20171031, true, todoOk);
    probarEsAnterior(20171031, 20161130, false, todoOk);
    
    probarDiasDelMes( 1, 2018, 31, todoOk);
    probarDiasDelMes( 2, 2018, 28, todoOk);
    probarDiasDelMes( 2, 2020, 29, todoOk);
    probarDiasDelMes( 2, 2100, 28, todoOk);
    probarDiasDelMes( 2, 2400, 29, todoOk);
    probarDiasDelMes( 3, 2018, 31, todoOk);
    probarDiasDelMes( 4, 2018, 30, todoOk);
    probarDiasDelMes( 5, 2018, 31, todoOk);
    probarDiasDelMes( 6, 2018, 30, todoOk);
    probarDiasDelMes( 7, 2018, 31, todoOk);
    probarDiasDelMes( 8, 2018, 31, todoOk);
    probarDiasDelMes( 9, 2018, 30, todoOk);
    probarDiasDelMes(10, 2018, 31, todoOk);
    probarDiasDelMes(11, 2018, 30, todoOk);
    probarDiasDelMes(12, 2018, 31, todoOk);

    probarDiaSiguiente(30, 10, 2016,  31, 10, 2016, todoOk);
    probarDiaSiguiente(31, 10, 2016,   1, 11, 2016, todoOk);
    probarDiaSiguiente(30, 11, 2016,   1, 12, 2016, todoOk);
    probarDiaSiguiente(31, 12, 2016,   1,  1, 2017, todoOk);
    probarDiaSiguiente(28,  2, 2017,   1,  3, 2017, todoOk);
    probarDiaSiguiente(28,  2, 2016,  29,  2, 2016, todoOk);
    probarDiaSiguiente(28,  2, 2100,   1,  3, 2100, todoOk);
    probarDiaSiguiente(28,  2, 2000,  29,  2, 2000, todoOk);

    probarDiasDelAgno(2019, 365, todoOk);
    probarDiasDelAgno(2024, 366, todoOk);
    probarDiasDelAgno(1900, 365, todoOk);
    probarDiasDelAgno(2000, 366, todoOk);

    probarDiaEnElAgno( 1,  1, 2019,  1, todoOk);
    probarDiaEnElAgno( 2,  1, 2019,  2, todoOk);
    probarDiaEnElAgno(31,  1, 2019, 31, todoOk);
    probarDiaEnElAgno( 1,  2, 2019, 32, todoOk);
    probarDiaEnElAgno(28,  2, 2019, 59, todoOk);
    probarDiaEnElAgno( 1,  3, 2019, 60, todoOk);
    probarDiaEnElAgno(31, 12, 2019, 365, todoOk);
    probarDiaEnElAgno(31, 12, 2020, 366, todoOk);
    
    const unsigned LUNES     = 0;
    const unsigned MARTES    = 1;
    const unsigned MIERCOLES = 2;
    const unsigned JUEVES    = 3;
    const unsigned VIERNES   = 4;
    const unsigned SABADO    = 5;
    const unsigned DOMINGO   = 6;
    
    probarDiaDeLaSemana( 1,  1, 1900, LUNES, todoOk);
    probarDiaDeLaSemana( 2,  1, 1900, MARTES, todoOk);
    probarDiaDeLaSemana( 7,  1, 1900, DOMINGO, todoOk);
    probarDiaDeLaSemana( 8,  1, 1900, LUNES, todoOk);
    probarDiaDeLaSemana(31,  1, 1900, MIERCOLES, todoOk);
    probarDiaDeLaSemana( 1,  2, 1900, JUEVES, todoOk);
    probarDiaDeLaSemana(28,  2, 1900, MIERCOLES, todoOk);
    probarDiaDeLaSemana( 1,  3, 1900, JUEVES, todoOk);
    probarDiaDeLaSemana(30,  4, 1900, LUNES, todoOk);
    probarDiaDeLaSemana( 1,  5, 1900, MARTES, todoOk);
    probarDiaDeLaSemana(31, 12, 1900, LUNES, todoOk);
    probarDiaDeLaSemana( 1,  1, 1901, MARTES, todoOk);
    probarDiaDeLaSemana(28,  2, 1901, JUEVES, todoOk);
    probarDiaDeLaSemana( 1,  3, 1901, VIERNES, todoOk);
    probarDiaDeLaSemana(29,  2, 1904, LUNES, todoOk);
    probarDiaDeLaSemana( 1,  3, 1904, MARTES, todoOk);
    probarDiaDeLaSemana(29,  2, 2000, MARTES, todoOk);
    probarDiaDeLaSemana( 1,  3, 2000, MIERCOLES, todoOk);
    
    probarDiaDeLaSemana(27, 10, 2019, DOMINGO, todoOk);
    probarDiaDeLaSemana(28, 10, 2019, LUNES, todoOk);
    probarDiaDeLaSemana(29, 10, 2019, MARTES, todoOk);
    probarDiaDeLaSemana(30, 10, 2019, MIERCOLES, todoOk);
    probarDiaDeLaSemana(31, 10, 2019, JUEVES, todoOk);
    probarDiaDeLaSemana( 1, 11, 2019, VIERNES, todoOk);
    probarDiaDeLaSemana( 2, 11, 2019, SABADO, todoOk);
    probarDiaDeLaSemana( 3, 11, 2019, DOMINGO, todoOk);
    probarDiaDeLaSemana( 4, 11, 2019, LUNES, todoOk);

    probarDiaDeLaSemana(28,  2, 2100, DOMINGO, todoOk);
    probarDiaDeLaSemana( 1,  3, 2100, LUNES, todoOk);
    
    probarDiaDeLaSemana(28,  2, 2400, LUNES, todoOk);
    probarDiaDeLaSemana(29,  2, 2400, MARTES, todoOk);
    probarDiaDeLaSemana( 1,  3, 2400, MIERCOLES, todoOk);

    cout << endl;
    if (todoOk) {
        cout << ESCAPE_NEGRITA << "Todas las pruebas realizadas correctamente"
             << ESCAPE_NORMAL << endl;
        return 0;
    } else {
        cout << ESCAPE_ROJO_NEGRITA << "Se han detectado errores en las pruebas."
             << ESCAPE_NORMAL << endl;
        return 1;
    }
}
