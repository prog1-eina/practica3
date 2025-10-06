/******************************************************************************
 * Curso de Programación 1. Práctica 3
 * Autores: Miguel Ángel Latre
 * Última revisión: 21 de octubre de 2019
 * Resumen: Módulo principal de un programa que hace pruebas unitarias de
 *          las funciones del módulo «calculos».
 * Nota: Leer el fichero README.md, que contiene instrucciones para su 
 *       compilación y ejecución.
 *****************************************************************************/

#include <iostream>
#include "calculos-test.hpp"
#include "testing-prog1.hpp"
using namespace std;

/*
 * Programa que realiza pruebas unitarias de las funciones «esCapicua» y «mcm»
 * del módulo de biblioteca «calculos». En cada prueba, se indican los
 * parámetros utilizados y si el resultado es correcto o no. Además, en los
 * casos negativos, indica las salidas realmente proporcionadas por la función
 * y las que debería proporcionar.
 */
int main() {
    bool todoOk = true;

    probarEsCapicua(0, true, todoOk);
    probarEsCapicua(1, true, todoOk);
    probarEsCapicua(-1, true, todoOk);
    probarEsCapicua(9, true, todoOk);
    probarEsCapicua(-9, true, todoOk);
    probarEsCapicua(10, false, todoOk);
    probarEsCapicua(-10, false, todoOk);
    probarEsCapicua(11, true, todoOk);
    probarEsCapicua(-11, true, todoOk);
    probarEsCapicua(99, true, todoOk);
    probarEsCapicua(-99, true, todoOk);
    probarEsCapicua(100, false, todoOk);
    probarEsCapicua(-100, false, todoOk);
    probarEsCapicua(1234321, true, todoOk);
    probarEsCapicua(-1234321, true, todoOk);
    probarEsCapicua(12344321, true, todoOk);
    probarEsCapicua(-12344321, true, todoOk);
    probarEsCapicua(1234329, false, todoOk);
    probarEsCapicua(-1234329, false, todoOk);
    probarEsCapicua(12344329, false, todoOk);
    probarEsCapicua(-12344329, false, todoOk);
    probarEsCapicua(1234391, false, todoOk);
    probarEsCapicua(-1234391, false, todoOk);
    probarEsCapicua(12344391, false, todoOk);
    probarEsCapicua(-12344391, false, todoOk);
    probarEsCapicua(1234921, false, todoOk);
    probarEsCapicua(-1234921, false, todoOk);
    probarEsCapicua(2147483647, false, todoOk);
    probarEsCapicua(-2147483647, false, todoOk);
    probarEsCapicua(2147447412, true, todoOk);
    probarEsCapicua(-2147447412, true, todoOk);
    
    probarMcm(0, 1, 0, todoOk);
    probarMcm(1, 0, 0, todoOk);
    probarMcm(1, 1, 1, todoOk);
    probarMcm(2, 2, 2, todoOk);
    probarMcm(6, 6, 6, todoOk);
    probarMcm(2, 3, 6, todoOk);
    probarMcm(3, 2, 6, todoOk);
    probarMcm(3, 12, 12, todoOk);
    probarMcm(12, 3, 12, todoOk);
    probarMcm(10, 15, 30, todoOk);
    probarMcm(15, 10, 30, todoOk);
    probarMcm(-10, 15, 30, todoOk);
    probarMcm(10, -15, 30, todoOk);
    probarMcm(-10, -15, 30, todoOk);
    probarMcm(41273, 80758, 22369966, todoOk);
    probarMcm(41273, 161516, 44739932, todoOk);

    escribirMensajeFinal(todoOk);
    if (todoOk) {
        return 0;
    } else {
        return 1;
    }
}
