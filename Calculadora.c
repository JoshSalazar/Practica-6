/*Salazar Anicasiop Joshua
Ejericio 1 Práctica 6
Hacer una calculadora.*/


#include <stdio.h>
#include <math.h>


int main ()
{
  int a = 0, b = 0, operation = 0;
  int option;

  printf("Dime, ¿qué deseas realizar? \n");
  printf("1 .- Suma\n");
  printf("2 .- Resta\n");
  printf("3 .- Multiplicación\n");
  printf("4 .- División\n");
  scanf("%d", &option);



  do
  {
    printf("Dame dos números:\n");
    printf("número 1: ");
    scanf("%d", &a);
    printf("número 2: ");
    scanf("%d", &b);

    switch (option)
    {
      case 1:
        operation = a + b;
        break;
      case 2:
        operation = a - b;
        break;
      case 3:
        operation = a * b;
        break;
      case 4:
        operation = a / b;
        break;   
    }

    printf("El resultado de la operacion es: %d\n", operation);

    printf("¿Quieres hacer otra operación? \n");
    printf("1 .- Suma\n");
    printf("2 .- Resta\n");
    printf("3 .- Multiplicación\n");
    printf("4 .- División\n");
    printf("¿Deseas salir? \n");
    printf("-1 .- Salir\n");
    scanf("%d", &option);
  }
  while (option != -1);

  return 0;
}
