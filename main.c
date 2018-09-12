#include <stdio.h>

double soma(double x, double y){

    return x+y;

}

double sub(double x, double y){

    return x-y;
}

double mul(double x, double y){

    return x*y;
}

double div(double x, double y){

    return x/y;
}

int menu(){
    int op;
    printf("\n 1. Soma\n 2. Subtracao\n 3. Multiplicacao\n 4. Divisao\n 0. SAIR");
    printf("\nDigite a opcao desejada:");
    scanf("%i", &op);
    return op;
}

int main(){
    printf("\n****CALCULADORA****");
    printf("\n\n Selecione a opção desejada:");
    double x, y;
    int op=9;
    do{
        op = menu();
        switch(op){
            case 1:
                printf("\n Digite x: ");
                scanf("%lf", &x);
                printf("\n Digite y: ");
                scanf("%lf", &y);
                
                printf("\nRESULTADO: %lf", soma(x,y));
                break;
            case 2:
                printf("\n Digite x: ");
                scanf("%lf", &x);
                printf("\n Digite y: ");
                scanf("%lf", &y);
                
                printf("\nRESULTADO: %lf", sub(x,y));
                break;
            case 3:
                printf("\n Digite x: ");
                scanf("%lf", &x);
                printf("\n Digite y: ");
                scanf("%lf", &y);
                
                printf("\nRESULTADO: %lf", mul(x,y));
                break;
            case 4:
                printf("\n Digite x: ");
                scanf("%lf", &x);
                printf("\n Digite y: ");
                scanf("%lf", &y);
                
                printf("\nRESULTADO: %lf", div(x,y));
                break;
            default:
                break;
        }
    }while(op!=0);

    return 0;
}