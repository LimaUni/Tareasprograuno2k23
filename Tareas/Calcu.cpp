#include <iostream>
#include <math.h>
main()
{
    int x1, x2, res;
    int op;
        printf("-----------------------------------------\n");
        printf("          CACLULADORA UMG                \n");
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
        printf("\n EL RESULTADO ES= %d" , x1+x2);
        break;
    case 2:
        printf("PORFAVOR,INGRESA EL PRIMER NUMERO: ");
        scanf("%d", &x1);
        printf("PORFAVOR,INGRESA EL SEGUNDO NUMERO: ");
        scanf("%d", &x2);
        res = x1-x2;
        printf("\n EL RESULTADO ES = %d" , res);
        break;
    case 3:
        printf("PORFAVOR,INGRESA EL PRIMER NUMERO: ");
        scanf("%d", &x1);
        printf("PORFAVOR,INGRESA EL SEGUNDO NUMERO: ");
        scanf("%d", &x2);
        res = x1*x2;
        printf("\n EL RESULTADO ES = %d" , res);
        break;
    case 4:
        printf("PORFAVOR,INGRESA EL PRIMER NUMERO: ");
        scanf("%d", &x1);
        printf("PORFAVOR,INGRESA EL SEGUNDO NUMERO: ");
        scanf("%d", &x2);
        res = x1/x2;
        printf("\n EL RESULTADO ES = %d" , res);
        break;
    case 5:
        printf("PORFAVOR,INGRESA EL NUMERO: ");
        scanf("%d", &x1);
        res = sqrt(x1);
        printf("\n EL RESULTADO APROXIMADO ES = %d" , res);
        break;
    default:
        printf("NO HAZ SELECCIONADO NINGUNA OPCION, POR FAVOR SELECCIONA UNA OPCION CORRECTA");
    }
    printf("\n\n");
    system("pause");
}
