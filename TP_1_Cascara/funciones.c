#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

/** \brief Solicita un número y lo retorna
 *  \return Número ingresado por el usuario
 *
 */
float pedirNumero()
{
    float num;
    system("cls");
    printf("ingrese primer numero: ");
    scanf("%f", &num);

    return num;
}

/** \brief Suma dos numeros y retorna la suma
 *
 * \param Numero flotante 1
 * \param Numero flotatne 2
 * \return Suma entre numero flotante 1 y numero flotante 2
 *
 */
float sumar(float n1, float n2)
{
    float rta;
    rta = n1 + n2;
    return rta;
}

/** \brief Resta dos numeros y retorna la resta
 *
 * \param Numero flotante 1
 * \param Numero flotatne 2
 * \return Ruma entre numero flotante 1 y numero flotante 2
 *
 */
float restar(float n1, float n2)
{
    float rta;
    rta = n1 - n2;
    return rta;
}

/** \brief Divide dos numeros y retorna la division
 *
 * \param Numero flotante 1
 * \param Numero flotatne 2
 * \return division entre numero flotante 1 y numero flotante 2
 *
 */
float dividir(float n1, float n2)
{
    float rta;
    rta = n1 / n2;
    return rta;
}

/** \brief Multiplica dos numeros y retorna la multiplicacion
 *
 * \param Numero flotante 1
 * \param Numero flotatne 2
 * \return Multiplicacion entre numero flotante 1 y numero flotante 2
 *
 */
float multiplicar(float n1, float n2)
{
    float rta;
    rta = n1 * n2;
    return rta;
}

/** \brief Factoriza un numero flotante y retorna su factorial
 *
 * \param Numero flotante
 * \return Factorial de un numero entero
 *
 */
float factorear(float n1)
{
    int i;
    float factorial = 1;

     for(i=1;i<=n1;i++)
    {
        factorial = factorial * i;
    }

    return factorial;
}



