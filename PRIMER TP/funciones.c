#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"


float sumar (float x, float y)
{
    float suma;
    suma = x + y;
    return suma;
}

float restar (float x, float y)
{
    float resta;
    resta = x - y;
    return resta;
}

float dividir (float x, float y)
{
    float div;
    div = x / y;
    return div;
}

float multiplicar (float x, float y)
{
    float mult;
    mult = x * y;
    return mult;
}

float factorial (float x)
{
       int contp;
       int contn;
       float fact;
        if (x>0)
    {
        contp=x;
        fact=x;
        while(contp>1)
    {   contp=contp-1;
        fact=fact*contp;
        printf ("\n- %.2f",fact);

    }
    }

     if (x<0)
    {
        contn=x;
        fact=x;
        while(contn<-1)
    {   contn=contn+1;
        fact=fact*contn;
        printf ("\n- %.2f",fact);


    }
    }


    return fact;
}

