﻿/******************************************************************************\
 * Curso de Programación 1. Práctica 3
 * Autores: Miguel Ángel Latre
 * Última revisión: 8 de octubre de 2021
 * Resumen: Fichero de interfaz de un módulo auxiliar «calculos-test» que
 *          hace pruebas de unidad de las funciones del módulo «calculos».
\******************************************************************************/

#pragma once

/*
 * Pre:  «valorEsperado» es true si y solo si «n» es un número capicúa.
 * Post: Escribe un mensaje en pantalla informando acerca de si la función
 *       «esCapicua», invocada con el argumento «n», Devuelve el valor
 *       correcto «valorEsperado». En caso negativo, informa
 *       también acerca del valor incorrecto que devolvió la función.
 *       Si se ha calculado el resultado correcto, el valor de «todoOk»
 *       no se modifica y en caso contrario, se establece en «false».
 */
void probarEsCapicua(int n, bool valorEsperado, bool &todoOk);

/*
 * Pre:  «valorEsperado» es el mínimo común múltiplo de «n» y «m».
 * Post: Escribe un mensaje en pantalla informando acerca de si la función
 *       «mcm», invocada con los argumentos «n» y «m», Devuelve el valor
 *       correcto «valorEsperado». En caso negativo, informa
 *       también acerca del valor incorrecto que devolvió la función.
 *       Si se ha calculado el resultado correcto, el valor de «todoOk»
 *       no se modifica y en caso contrario, se establece en «false».
 */
void probarMcm(int n, int m, unsigned valorEsperado, bool &todoOk);
