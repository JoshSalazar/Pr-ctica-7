#include <stdio.h>
int main ()
{
  char op = '\0';
  printf("\tMenún\n\n");
  printf("Elegir la opción deseada\n");
  printf("a) Ingresar \n");
  printf("b) registrarse\n");
  printf("c) salir\n");
  scanf("%c", &op);
  switch(op)
  {
    default:
      printf("Opción no válida.\n");
      break;
    case 'a':
      printf("Se seleccionó'ingresar'.\n");
      break;
    case 'b':
      printf("Se seleccionó'registrarse'.\n");
      break;
    case 'c':
      printf("Se seleccionó'salir'.\n");
      break;
  }
  return 0;
}
