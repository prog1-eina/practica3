/*************************************************************************
 * Curso de Programación 1. Práctica 3
 * Autores: Miguel Ángel Latre
 * Última revisión: 21 de octubre de 2019
 * Resumen: Fichero de intefaz de un módulo auxiliar «calculos-test» que
 *          hace pruebas unitarias de las funciones del módulo «calculos».
 ************************************************************************/

#ifndef CALCULOS_TEST_H_INCLUDED

#define CALCULOS_TEST_H_INCLUDED

/*
 * Pre:  «valorEsperado» es true si y solo si «n» es un número capicúa.
 * Post: Ha escrito un mensaje en pantalla informando acerca de si la función
 *       «esCapicua», invocada con el argumento «n», ha devuelto el valor
 *       correcto «valorEsperado». En caso negativo, ha informado
 *       también acerca del valor incorrecto que devolvió la función.
 */
void probarEsCapicua(const int n, const bool valorEsperado);

/*
 * Pre:  «valorEsperado» es el mínimo común múltimo de «n» y «m».
 * Post: Ha escrito un mensaje en pantalla informando acerca de si la función
 *       «mcm», invocada con los argumentos «n» y «m», ha devuelto el valor
 *       correcto «valorEsperado». En caso negativo, ha informado
 *       también acerca del valor incorrecto que devolvió la función.
 */
void probarMcm(const int n, const int m, const int valorEsperado);

#endif // CALCULOS_TEST_H_INCLUDED
