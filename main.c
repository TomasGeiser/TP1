#include <stdio.h>
#include <stdlib.h>
#include "../Bibliotecas/miBiblioteca.h/miBiblio.h"
int main()
{
        char elegir;
        float x=0,y=0;
        char salir;
    do
     {
        printf("\t.Menu opciones.");
        printf("\n1.Sumar:");
        printf("\n2.Restar:");
        printf("\n3.Dividir:");
        printf("\n4.Multiplicar:");
        printf("\n5.Factorial:");
        printf("\ns.Calcular");
        printf("\nn.Salir:");
        printf("\n.Operador A:%.2f",x);
        printf("\n.Operador B:%.2f",y);
        printf("\ningrese el valor del operador A:");
        scanf("%f",&x);
        printf("ingrese el valor del operador B:");
        scanf("%f",&y);
        printf("\nComenzar s/n:");
        fflush(stdin);
        elegir = getchar();
        switch(elegir)
        {
            case 's':

            case '1':
                printf("\nSuma:");
                float sumar = suma(x,y);
            case '2':
                printf("\nResta:");
                float restar = resta(x,y);

            case '3':
                printf("\nDivision:");
                float dividir = division(x,y);

            case 'd':
                printf("\nMultiplicacion:");
                float multiplicar = multiplicacion(x,y);
            case '4':
                printf("\nFactorial:");
                float factorial1 = factorial(x);
                printf("\nEl factorial de A es:%.0f",factorial1);
                float factorial2 = factorial(y);
                printf("\nEl factorial de B es:%.0f",factorial2);
            case 'n':
                if(elegir=='n')
                {
                    break;
                }
                printf("\nDesea seguir operando? s/n:");
                fflush(stdin);
                salir = getchar();
                if (salir == 'n')
                {
                    break;
                }
                system("cls");
        }
    }while( salir == 's');
        return 0;
}
