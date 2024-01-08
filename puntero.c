#include<stdio.h>

int sumar (int a, int b);
void sumarRorReferencia (int *a, int *b);
int main(int argc, char const *argv[])
{
    int num1, num2, resultado;
    printf ("Ingrese el 1er valor\n");
    scanf ("%d", &num1);
    printf ("Ingrese el 2do valor.\n");
    scanf ("%d", &num2);

   resultado = sumar (num1, num2);
   printf ("El resultado es: %d", resultado);
    return 0;
}
int sumar (int a, int b)
{
    return a + b;
}

void sumarPorReferencia (int*a, int *b, int *resultado)
{
    *resultado = *a + *b;
}