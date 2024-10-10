/*Salazar Anicasio Joshua
ejercicio 4 calculadora con funciones
Práctica 7 27/9/24*/

#include <stdio.h>
#include <math.h>

int resp;

int suma(int a, int b)
{
  resp = a + b;
  return(resp);
}
int resta(int a , int b)
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
int expo(int a, int b)
{
  resp = pow(a,b);
  return (resp);
}

int main()
{
  int a=0, b=0, option;
  int respuesta;

  printf("Dime que operación debes realizar: \n");
  printf("1 .- Suma\n");
  printf("2 .- Resta\n");
  printf("3 .- Multiplicación\n");
  printf("4 .- División\n");
  printf("5 .- Exponente\n");
  scanf("%d", &option);

  printf("Introduce el primer número: ");
  scanf("%d", &a);
  printf("Introduce el segundo número: ");
  scanf("%d", &b);
  
  switch(option)
  {
    default:
    respuesta = 0;
    break;
    case 1:
    respuesta = suma(a,b);
    break;
    case 2:
    respuesta = resta(a,b);
    break;
    case 3:
    respuesta = multi(a,b);
    break;
    case 4:
    respuesta = div(a,b);
    break;
    case 5:
    respuesta = expo(a,b);
    break;
  }

  printf("El restultado de la operación es: %d\n", respuesta);
  return 0;
}
