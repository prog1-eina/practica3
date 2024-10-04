﻿/******************************************************************************\
 * Curso de Programación 1. Práctica 3
 * Autores: Miguel Ángel Latre
 * Última revisión: 8 de octubre de 2021
 * Resumen: Fichero de interfaz de un módulo auxiliar «pruebas»
 *          que hace pruebas unitarias de las funciones del módulo
 *          «fechas».
\******************************************************************************/

#pragma once
#include "testing-prog1.hpp"

/*
 * Pre:  «valorEsperado» es el entero que, al ser escrito en base 10,
 *       tiene la forma «aaaammdd» que representa la fecha
 *       «dia»/«mes»/«agno», formada por los valores de los parámetros
 *       «dia», «mes» y «agno».
 * Post: Escribe un mensaje en pantalla informando acerca de si la
 *       función «componer», invocada con los argumentos de entrada «dia»,
 *       «mes» y «agno», calcula el valor correcto «valorEsperado».
 *       En caso negativo, informa también acerca del valor
 *       incorrecto que calculó la función.
 *       Si se ha calculado el resultado correcto, el valor de «todoOk»
 *       no se modifica y en caso contrario, se establece en «false».
 */
void probarComponer(unsigned dia, unsigned mes, unsigned agno, 
                    unsigned valorEsperado, bool &todoOk);


/*
 * Pre:  «diaEsperado», «mesEsperado» y «agnoEsperado» son el día, mes y
 *       año representados por el entero «fecha» que, al ser escrito en
 *       base 10, tiene la forma «aaaammdd» donde los dígitos «aaaa»
 *       representan el año, los, dígitos «mm» el mes y los dígitos «dd»,
 *       el día.
 * Post: Escribe un mensaje en pantalla informando acerca de si la
 *       función «descomponer», invocada con el argumento de entrada
 *       «fecha», calcula los valores correctos de día, mes y año.
 *       En caso negativo, informa también acerca de los valores
 *       incorrectos que calculó la función.
 *       Si se ha calculado el resultado correcto, el valor de «todoOk»
 *       no se modifica y en caso contrario, se establece en «false».
 */
void probarDescomponer(unsigned fecha, unsigned diaEsperado, 
                       unsigned mesEsperado, unsigned agnoEsperado, bool &todoOk);


/*
 * Pre:  «valorEsperado» es true si y solo si «fecha1» es anterior
 *       cronológicamente a «fecha2».
 * Post: Escribe un mensaje en pantalla informando acerca de si la función
 *       «esAnterior», invocada con los argumentos «fecha1» y «fecha2», ha
 *       devuelto el valor correcto «valorEsperado». En caso negativo, ha
 *       informado también acerca del valor incorrecto que devolvió la función.
 *       Si se ha calculado el resultado correcto, el valor de «todoOk»
 *       no se modifica y en caso contrario, se establece en «false».
 */
void probarEsAnterior(unsigned fecha1, unsigned fecha2, bool valorEsperado, bool &todoOk);


/*
 * Pre:  1 ≤ mes ≤ 12, agno > 1582 y «valorEsperado» es el número de días
 *       del mes correspondiente al parámetro «mes» del año
 *       correspondiente al parámetro «agno».
 * Post: Escribe un mensaje en pantalla informando acerca de si la
 *       función «diasDelMes», invocada con los argumentos «mes» y «agno»,
 *       Devuelve el valor correcto «valorEsperado». En caso negativo,
 *       informa también acerca del valor incorrecto devuelto por
 *       la función.
 *       Si se ha calculado el resultado correcto, el valor de «todoOk»
 *       no se modifica y en caso contrario, se establece en «false».
 */
void probarDiasDelMes(unsigned mes, unsigned agno, unsigned valorEsperado, bool &todoOk);


/*
 * Pre:  agno > 1582 y «valorEsperado» es el número de días que tiene el
 *       año «agno».
 * Post: Escribe un mensaje en pantalla informando acerca de si la
 *       función «diasDelAgno», invocada con el argumento
 *       «agno», Devuelve el valor correcto «valorEsperado». En caso
 *       negativo, informa también acerca del valor incorrecto
 *       devuelto por la función.
 *       Si se ha calculado el resultado correcto, el valor de «todoOk»
 *       no se modifica y en caso contrario, se establece en «false».
 */
void probarDiasDelAgno(unsigned agno, unsigned valorEsperado, bool &todoOk);


/*
 * Pre:  1 ≤ dia ≤ 31, 1 ≤ mes ≤ 12 y agno > 1582, la fecha formada por
 *       «dia/mes/agno» es una fecha válida del calendario gregoriano y
 *       «valorEsperado» es el número de día del año de esa fecha.
 * Post: Escribe un mensaje en pantalla informando acerca de si la
 *       función «diaEnElAgno», invocada con los argumentos «dia», «mes» y
 *       «agno», Devuelve el valor correcto «valorEsperado». En caso
 *       negativo, informa también acerca del valor incorrecto
 *       devuelto por la función.
 *       Si se ha calculado el resultado correcto, el valor de «todoOk»
 *       no se modifica y en caso contrario, se establece en «false».
 */
void probarDiaEnElAgno(unsigned dia, unsigned mes, unsigned agno,
                       unsigned valorEsperado, bool &todoOk);


/*
 * Pre:  La fecha formada por «diaSigEsperado»/«mesSigEsperado»/«agnoSigEsperado»
 *       representa el día siguiente a la fecha formada por «dia»/«mes»/«agno».
 * Post: Escribe un mensaje en pantalla informando acerca de si la función
 *       «diaSiguiente», invocada con los argumentos «dia», «mes» y «agno», ha
 *       obtenido los valores correctos correspondientes a la fecha siguiente 
 *       («diaSigEsperado», «mesSigEsperado» y «agnoSigEsperado»). En caso
 *       negativo, informa también acerca del valor incorrecto que devolvió
 *       la función.
 *       Si se ha calculado el resultado correcto, el valor de «todoOk»
 *       no se modifica y en caso contrario, se establece en «false».
 */
void probarDiaSiguiente(unsigned dia, unsigned mes, unsigned agno,
                        unsigned diaSigEsperado, unsigned mesSigEsperado,
                        unsigned agnoSigEsperado, bool &todoOk);
   
                        
/*
 * Pre:  1 ≤ dia ≤ 31, 1 ≤ mes ≤ 12 y agno >= 1900, la fecha formada por
 *       «dia/mes/agno» es una fecha válida del calendario gregoriano y
 *       «valorEsperado» codifica el día de la semana de la fecha
 *       representada por los valores de los parámetros «dia», «mes» y «agno», de
 *       acuerdo con la siguiente codificación: el 0 codifica el lunes, el 1
 *       codifica martes y así sucesivamente hasta el 6, que codifica el domingo.
 * Post: Escribe un mensaje en pantalla informando acerca de si la
 *       función «diaDeLaSemana», invocada con los argumentos «dia», «mes» y
 *       «agno», Devuelve el valor correcto «valorEsperado». En caso
 *       negativo, informa también acerca del valor incorrecto
 *       devuelto por la función.
 *       Si se ha calculado el resultado correcto, el valor de «todoOk»
 *       no se modifica y en caso contrario, se establece en «false».
 */
void probarDiaDeLaSemana(unsigned dia, unsigned mes, unsigned agno,
                         unsigned valorEsperado, bool &todoOk);
