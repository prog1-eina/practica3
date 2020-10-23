/******************************************************************************\
 * Curso de Programación 1. Tema 7 y práctica 3
 * Autores originales: Miguel Ángel Latre y Javier Martínez
 * Modificado por: ¡PON AQUÍ TU NOMBRE! (funciones establecidas en la práctica 3)
 * Última revisión: 23 de octubre de 2020
 * Resumen: Fichero calculos.hpp de interfaz del módulo de biblioteca
 *          «calculos» que facilita algunas funciones para trabajar con
 *          datos de tipo entero
 *          Versión específica de la práctica 3.
\******************************************************************************/


/*
 * Pre:  ---
 * Post: Ha devuelto el número de cifras de «n» cuando «n» se escribe en
 *       base 10.
 */
unsigned int numCifras(int n);


/*
 * Pre:  ---
 * Post: Ha devuelto la suma de las cifras de «n» cuando «n» se escribe en
 *       base 10.
 */
unsigned int sumaCifras(int n);


/*
 *  Pre:  i ≥ 1
 *  Post: Ha devuelto la «i»-ésima cifra menos significativa de «n» cuando
 *        «n» se escribe en base 10.
 */
unsigned int cifra(int n, unsigned int i);


/*
 *  Pre:  ---
 *  Post: Ha devuelto el número que escrito en base 10 es la imagen
 *        especular de «n» cuando «n» se escribe también en base 10.
 */
int imagen(int n);


/*
 *  Pre:  ---
 *  Post: Ha devuelto el factorial de «n».
 */
unsigned int factorial(unsigned int n);


/*
 *  Pre:  ---
 *  Post: Ha devuelto true si y solo si «n» es un número primo.
 */
bool esPrimo(unsigned int n);


/*
 *  Pre: a ≠ 0 o b ≠ 0
 *  Post: Ha devuelto el máximo común divisor de <a> y <b>.
 */
unsigned int mcd(int a, int b);
