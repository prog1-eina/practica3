/*************************************************************************
 * Curso de Programación 1. Práctica 3
 * Autores: Miguel Ángel Latre
 * Última revisión: 21 de octubre de 2019
 * Resumen: Fichero de implementación de un módulo auxiliar
 *          «calculos-test» que hace pruebas unitarias de las funciones
 *          del módulo «calculos».
 *          Para escribir estas funciones, solo se han utilizado
 *          conceptos de C++ que se han visto en la asignatura (es por
 *          ello que hay mucho código repetido, ya que las estructuras
 *          de las funciones se repiten).
 ************************************************************************/

#include <iostream>
#include "../calculadora/calculos.h"
using namespace std;


/*
 * Pre:  «valorEsperado» es true si y solo si «n» es un número capicúa.
 * Post: Ha escrito un mensaje en pantalla informando acerca de si la función
 *       «esCapicua», invocada con el argumento «n», ha devuelto el valor
 *       correcto «valorEsperado». En caso negativo, ha informado
 *       también acerca del valor incorrecto que devolvió la función.
 */
void probarEsCapicua(const int n, const bool valorEsperado) {
    cout << "Prueba esCapicua(" << n << ") ";
    bool valorDevuelto = esCapicua(n);
    if (valorDevuelto == valorEsperado) {
        cout << "correcta" << endl;
    } else {
        cout << "incorrecta:" << endl;
        cout << "   debería haber devuelto " << boolalpha << valorEsperado
             << " pero ha devuelto " << valorDevuelto << endl;
    }
}

/*
 * Pre:  «valorEsperado» es el mínimo común múltimo de «n» y «m».
 * Post: Ha escrito un mensaje en pantalla informando acerca de si la función
 *       «mcm», invocada con los argumentos «n» y «m», ha devuelto el valor
 *       correcto «valorEsperado». En caso negativo, ha informado
 *       también acerca del valor incorrecto que devolvió la función.
 */
void probarMcm(const int n, const int m, const int valorEsperado) {
        cout << "Prueba mcm(" << n << ", " << m << ") ";
    int valorDevuelto = mcm(n, m);
    if (valorDevuelto == valorEsperado) {
        cout << "correcta" << endl;
    } else {
        cout << "incorrecta:" << endl;
        cout << "   debería haber devuelto " << valorEsperado
             << " pero ha devuelto " << valorDevuelto << endl;
    }
}
