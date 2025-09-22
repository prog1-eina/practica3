/******************************************************************************
 * Curso de Programación 1. Prácticas
 * Autores: Miguel Ángel Latre
 * Última revisión: 18 de octubre de 2020
 * Resumen: Fichero de implementación de un módulo auxiliar
 *          «testing» que escribe en la pantalla los resultados de realizar
 *          pruebas de unidad de algunas funciones del módulo «calculos» y 
 *          «fechas» de esta práctica y de otros módulos en prácticas
 *          posteriores.
 *          Para escribir estas funciones, solo se han utilizado
 *          conceptos de C++ que se han visto en la asignatura (excepto las
 *          secuencias de escape utilizadas para escribir en rojo los mensajes
 *          correspondientes a pruebas en las que se detectan errores). Es por
 *          ello que hay mucho código repetido, ya que las estructuras
 *          de las funciones se repiten.
 *****************************************************************************/

#include <iostream>
#include <string>
#include "testing-prog1.hpp"
using namespace std;

/*
 * Especificación común a TODAS las funciones definidas en este fichero de
 * cabecera
 * 
 * Pre:  En la línea actual de la pantalla se escribe un texto anunciando que
 *       se ha realizado una prueba de una determinada función con unos
 *       determinados argumentos.
 * Post: Si los valores de «valorEsperado» y «valorCalculado» son iguales,
 *       completa un mensaje en la pantalla informando de que la prueba es
 *       correcta. En caso contrario, indica que es incorrecta e informa
 *       también de los valores de «valorEsperado» y «valorCalculado».
 *       Si se ha calculado el resultado correcto, el valor de «todoOk»
 *       no se modifica y en caso contrario, se establece en «false».
 */

/*
 * Versión de la función para datos de tipo «int»
 */
void escribirResultadoPrueba(const int valorEsperado, const int valorCalculado,
                             bool &todoOk) {
    if (valorEsperado == valorCalculado) {
        cout << "correcta." << endl;
    } else {
        todoOk = false;
        cout << "incorrecta:" << endl;
        cout << ESCAPE_ROJO;
        cout << "   debería haber obtenido " 
             << ESCAPE_ROJO_NEGRITA << valorEsperado
             << ESCAPE_NORMAL << ESCAPE_ROJO 
             << " pero ha calculado " 
             << ESCAPE_ROJO_NEGRITA << valorCalculado 
             << ESCAPE_NORMAL << ESCAPE_ROJO << '.' << endl;
        cout << ESCAPE_NORMAL;
    }
}


/*
 * Versión de la función para datos de tipo «unsigned»
 */
void escribirResultadoPrueba(const unsigned valorEsperado, 
                             const unsigned valorCalculado, bool &todoOk) {
    if (valorEsperado == valorCalculado) {
        cout << "correcta." << endl;
    } else {
        todoOk = false;
        cout << "incorrecta:" << endl;
        cout << ESCAPE_ROJO;
        cout << "   debería haber obtenido " 
             << ESCAPE_ROJO_NEGRITA << valorEsperado
             << ESCAPE_NORMAL << ESCAPE_ROJO 
             << " pero ha calculado " 
             << ESCAPE_ROJO_NEGRITA << valorCalculado 
             << ESCAPE_NORMAL << ESCAPE_ROJO << '.' << endl;
        cout << ESCAPE_NORMAL;
    }
}


/*
 * Versión de la función para datos de tipo «bool»
 */
void escribirResultadoPrueba(const bool valorEsperado,
                             const bool valorCalculado, bool &todoOk) {
    if (valorEsperado == valorCalculado) {
        cout << "correcta." << endl;
    } else {
        todoOk = false;
        cout << boolalpha;
        cout << "incorrecta:" << endl;
        cout << ESCAPE_ROJO;
        cout << "   debería haber obtenido " 
             << ESCAPE_ROJO_NEGRITA << valorEsperado
             << ESCAPE_NORMAL << ESCAPE_ROJO 
             << " pero ha calculado " 
             << ESCAPE_ROJO_NEGRITA << valorCalculado 
             << ESCAPE_NORMAL << ESCAPE_ROJO << '.' << endl;
        cout << ESCAPE_NORMAL;
    }
}

/*
 * Versión de la función para datos de tipo «double»
 */
void escribirResultadoPrueba(const double valorEsperado,
                             const double valorCalculado, bool &todoOk) {
    if (valorEsperado == valorCalculado) {
        cout << "correcta." << endl;
    } else {
        todoOk = false;
        cout << "incorrecta:" << endl;
        cout << ESCAPE_ROJO;
        cout << "   debería haber obtenido " 
             << ESCAPE_ROJO_NEGRITA << valorEsperado
             << ESCAPE_NORMAL << ESCAPE_ROJO 
             << " pero ha calculado " 
             << ESCAPE_ROJO_NEGRITA << valorCalculado 
             << ESCAPE_NORMAL << ESCAPE_ROJO << '.' << endl;
        cout << ESCAPE_NORMAL;
    }
}


/*
 * Versión de la función para datos de tipo «char»
 */
void escribirResultadoPrueba(const char valorEsperado,
                             const char valorCalculado, bool &todoOk) {
    if (valorEsperado == valorCalculado) {
        cout << "correcta." << endl;
    } else {
        todoOk = false;
        cout << "incorrecta:" << endl;
        cout << ESCAPE_ROJO;
        cout << "   debería haber obtenido " 
             << ESCAPE_ROJO_NEGRITA << "'" << valorEsperado << "'" 
             << ESCAPE_NORMAL << ESCAPE_ROJO 
             << " pero ha calculado " 
             << ESCAPE_ROJO_NEGRITA << "'" << valorCalculado << "'" 
             << ESCAPE_NORMAL << ESCAPE_ROJO << '.' << endl;
        cout << ESCAPE_NORMAL;
    }
}

/*
 * Versión de la función para datos de tipo «string»
 */
void escribirResultadoPrueba(const string valorEsperado,
                             const string valorCalculado, bool &todoOk) {
    if (valorEsperado == valorCalculado) {
        cout << "correcta." << endl;
    } else {
        todoOk = false;
        cout << "incorrecta:" << endl;
        cout << ESCAPE_ROJO;
        cout << "   debería haber obtenido " 
             << ESCAPE_ROJO_NEGRITA << "\"" << valorEsperado << "\"" 
             << ESCAPE_NORMAL << ESCAPE_ROJO 
             << " pero ha calculado " 
             << ESCAPE_ROJO_NEGRITA << "\"" << valorCalculado << "\"" 
             << ESCAPE_NORMAL << ESCAPE_ROJO << '.' << endl;
        cout << ESCAPE_NORMAL;
    }
}
