#include <iostream>
#include <math.h>

main()
{
    float numero;
    int x1, x2, res;
    int op;
        printf("-----------------------------------------\n");
        printf("          CALCULADORA UMG                \n");
        printf("      QUE DESEAS HACER EL DIA DE HOY?    \n");
        printf("               [1]-SUMAR                 \n");
        printf("               [2]-RESTAR                \n");
        printf("               [3]-MULTIPLICAR           \n");
        printf("               [4]-DIVIDIR               \n");
        printf("               [5]-RAIZ CUADRADA         \n");

        scanf("%d", &op);
        switch(op)
    {
    case 1:
        printf("PORFAVOR,INGRESA EL PRIMER NUMERO: ");
        scanf("%d", &x1);
        printf("PORFAVOR,INGRESA EL SEGUNDO NUMERO: ");
        scanf("%d", &x2);
        res = x1+x2;
        printf("\n EL RESULTADO DE LA SUMA ES DE = %d" , x1+x2);
        break;
    case 2:
        printf("PORFAVOR,INGRESA EL PRIMER NUMERO: ");
        scanf("%d", &x1);
        printf("PORFAVOR,INGRESA EL SEGUNDO NUMERO: ");
        scanf("%d", &x2);
        res = x1-x2;
        printf("\n EL RESULTADO DE LA RESTA ES DE = %d" , res);
        break;
    case 3:
        printf("PORFAVOR,INGRESA EL PRIMER NUMERO: ");
        scanf("%d", &x1);
        printf("PORFAVOR,INGRESA EL SEGUNDO NUMERO: ");
        scanf("%d", &x2);
        res = x1*x2;
        printf("\n EL RESULTADO DE LA MULTIPLICACION ES DE = %d" , res);
        break;
    case 4:
        printf("PORFAVOR,INGRESA EL PRIMER NUMERO: ");
        scanf("%d", &x1);
        printf("PORFAVOR,INGRESA EL SEGUNDO NUMERO: ");
        scanf("%d", &x2);
        res = x1/x2;
        printf("\n EL RESULTADO DE LA DIVISION ES DE = %d" , x1+x2);
        break;
    case 5:
        float x1;
        printf("PORFAVOR,INGRESA EL NUMERO: ");
        scanf("%d", &numero);
        numero = sqrt(numero);
        printf("LA RAIZ CUADRADA DE TU NUMERO ES: %d\n", numero);
        break;
    default:
        printf("NO HAZ SELECCIONADO NINGUNA OPCION, POR FAVOR SELECCIONA UNA OPCION CORRECTA");
        break;
    }
    printf("\n\n");
    system("pause");
}
