/*Salazar ANicasio Joshua
ejercicio 4 calculadora con funciones
Practica 7 27/9/24*/
#include <stdio.h>
#include <math.h>


int resp;

int suma(int a, int b)
{
  resp = a + b;
  return(resp);
}

int resta(int a, int b)
{
  resp = a - b;
  return(resp);
}

int multi(int a, int b)
{
  resp = a * b;
  return(resp);
}

int div(int a, int b)
{
  resp = a / b;
  return(resp);
}

int exp(int a, int b)
{
  resp = pow(a,b);
  return (resp);
}

int main()
{
  int a=0, b=0;
  int respuesta;

  printf("Dime que operación debes realizar: \n");
  printf("1.")
