#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

int main()
{
    char seguir='s';
    int opcion=0, flag = 0;
    float num1 = 0,num2 = 0,rta,rtaSuma,rtaResta,rtaDivision,rtaMultiplicacion, rsp;

    while(seguir=='s')
    {
        system("cls");
        printf("1- Ingresar 1er operando (A=%.1f)\n", num1);
        printf("2- Ingresar 2do operando (B=%.1f)\n", num2);
        printf("3- Calcular todas las operaciones\n");
        printf("4- Mostrar todos los resultados\n");
        printf("5- Salir\n");

        scanf("%d",&opcion);

        switch(opcion)
        {
            case 1:
                num1 = pedirNumero();
                break;
            case 2:
                num2 = pedirNumero();
                break;
            case 3:
                rtaSuma = sumar(num1, num2);
                rtaResta = restar(num1, num2);
                rtaDivision = dividir(num1, num2);
                rtaMultiplicacion = multiplicar(num1, num2);
                rta = factorear(num1);
                rsp = factorear(num2);
                flag = 1;
                break;
            case 4:
                if(flag == 0)
                {
                    printf("antes hay que realizar las todas las operaciones\n");
                    system("pause");
                }
                else
                {
                    system("cls");
                    printf("la suma es: %2.f\n", rtaSuma);
                    printf("la resta es: %2.f\n", rtaResta);
                    if(rtaDivision > 0)
                    {
                        printf("la division es: %.2f\n", rtaDivision);
                    }
                    else
                    {
                        printf("no se pudo realizar la division\n");
                    }
                    printf("la multiplicacion es: %2.f\n", rtaMultiplicacion);
                    printf("el factorial del numero %2.f es: %2.f\nel factorial del numero %2.f es: %2.f\n", num1, rta, num2, rsp);
                    system("pause");
                }

                break;
            case 5:
                seguir = 'n';
                break;

        }

    }

    return 0;
}

