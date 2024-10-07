﻿/******************************************************************************\
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
\******************************************************************************/

#include <iostream>
#include "testing-prog1.hpp"
#include "calculos.hpp"
using namespace std;

/*
 * Pre:  «valorEsperado» es true si y solo si «n» es un número capicúa.
 * Post: Escribe un mensaje en pantalla informando acerca de si la función
 *       «esCapicua», invocada con el argumento «n», Devuelve el valor
 *       correcto «valorEsperado». En caso negativo, informa
 *       también acerca del valor incorrecto que devolvió la función.
 *       Si se ha calculado el resultado correcto, el valor de «todoOk»
 *       no se modifica y en caso contrario, se establece en «false».
 */
void probarEsCapicua(int n, bool valorEsperado, bool &todoOk) {
    cout << "Prueba esCapicua(" << n << ") ";
    escribirResultadoPrueba(valorEsperado, esCapicua(n), todoOk);
}

/*
 * Pre:  «valorEsperado» es el mínimo común múltiplo de «n» y «m».
 * Post: Escribe un mensaje en pantalla informando acerca de si la función
 *       «mcm», invocada con los argumentos «n» y «m», Devuelve el valor
 *       correcto «valorEsperado». En caso negativo, informa
 *       también acerca del valor incorrecto que devolvió la función.
 *       Si se ha calculado el resultado correcto, el valor de «todoOk»
 *       no se modifica y en caso contrario, se establece en «false».
 */
void probarMcm(int n, int m, unsigned valorEsperado, bool &todoOk) {
    cout << "Prueba mcm(" << n << ", " << m << ") ";
    escribirResultadoPrueba(valorEsperado, mcm(n, m), todoOk);
}
