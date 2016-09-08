#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

int main()
{
    char seguir = 's';
    int opcion = 0;
    float x=0, y=0;
    float resultado = 0;
    int flag1=0, flag2=0;

    do
    {
        system("cls");

        if (flag1 == 0)
        {
        printf("\n1- Ingresar 1er operando (A = %.2f): ", x);
        scanf("%f", &x);
        flag1=1;
        }

        if (flag2 == 0)
        {
        printf("\n2- Ingresar 2do operando (B = %.2f): ", y);
        scanf("%f", &y);
        flag2=1;
        }


		printf("\n\nC A L C U L A D O R A \n");
        printf("\n * 1- Ingresar 1er operando (A = %2.2f) ", x);
        printf("\n * 2- Ingresar 2do operando (B = %2.2f) ", y);
        printf("\n * 3- calcular la suma (A + B)");
        printf("\n * 4- calcular la resta (A - B)");
        printf("\n * 5- calcular la division (A / B)");
        printf("\n * 6- calcular la multiplicacion (A * B)");
        printf("\n * 7- calcular el factorial (A!)");
        printf("\n * 8- calcular todas las operaciones");
        printf("\n\n * 9- Salir\n");



        printf("\nElija la opcion: ");
        scanf("%d", &opcion);

        switch(opcion)
        {
            case 1:
                printf("\n1- Ingresar 1er operando (A = %.2f): ", x);
                scanf("%f", &x);
                break;

            case 2:
                printf("\n2- Ingresar 2do operando (B = %.2f): ", y);
                scanf("%f", &y);
                break;

            case 3:
                resultado = sumar (x,y);
                printf ("\nEl resultado de la suma es: %.2f\n\n", resultado);
                system("pause");
                break;
            case 4:
                resultado = restar (x,y);
                printf ("\nEl resultado de la resta es: %.2f\n\n", resultado);
                system("pause");
                break;
            case 5:
                while(x == 0 && y == 0)
                {
                    printf("Sintaxis error. reingrese numeros\n");

                    printf("\nIngresar 1er operando (A = %.2f): ", x);
                    scanf("%f", &x);

                    printf("\nIngresar 2do operando (B = %.2f): ", y);
                    scanf("%f", &y);
                }
                while(x != 0 && y == 0)
                    {
                        printf("Sintaxis error. reingrese numeros\n");

                        printf("\nIngresar 1er operando (A = %.2f): ", x);
                        scanf("%f", &x);

                        printf("\nIngresar 2do operando (B = %.2f): ", y);
                        scanf("%f", &y);
                    }

                resultado = dividir (x,y);
                printf ("\nEl resultado de la division es: %.2f\n\n", resultado);

                system("pause");
                break;
            case 6:
                resultado = multiplicar (x,y);
                printf ("\nEl resultado de la multiplicacion es: %.2f\n\n", resultado);
                system("pause");
                break;
            case 7:
                resultado = factorial (x);
                printf ("\nEl factorial de A es: %.2f\n\n", resultado);
                system("pause");
                break;
            case 8:
                resultado = sumar (x,y);
                printf ("\nEl resultado de la suma es: %.2f\n\n", resultado);

                resultado = restar (x,y);
                printf ("\nEl resultado de la resta es: %.2f\n\n", resultado);

                  if (x == 0 && y == 0)
                {
                    printf("Error, no se puede dividir por 0, reingrese numeros\n");

                    printf("\nIngresar 1er operando (A = %.2f): ", x);
                    scanf("%f", &x);

                    printf("\nIngresar 2do operando (B = %.2f): ", y);
                    scanf("%f", &y);

                    resultado = dividir (x,y);
                    printf ("\nEl resultado de la division es: %.2f\n\n", resultado);

                }
                else
                {
                     if (x != 0 && y == 0)
                    {
                        printf("Error, no se puede dividir por 0, reingrese numeros\n");

                        printf("\nIngresar 1er operando (A = %.2f): ", x);
                        scanf("%f", &x);

                        printf("\nIngresar 2do operando (B = %.2f): ", y);
                        scanf("%f", &y);

                        resultado = dividir (x,y);
                        printf ("\nEl resultado de la division es: %.2f\n\n", resultado);
                    }
                    else
                    {
                        resultado = dividir (x,y);
                        printf ("\nEl resultado de la division es: %.2f\n\n", resultado);
                    }
                }

                resultado = multiplicar (x,y);
                printf ("\nEl resultado de la multiplicacion es: %.2f\n\n", resultado);

                resultado = factorial (x);
                printf ("\nEl factorial de A es: %.2f\n\n", resultado);

                system("pause");
                break;
            case 9:
                seguir = 'n';
                break;
        }

    }while(seguir=='s');


    return 0;
}
