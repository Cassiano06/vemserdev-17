#include <stdio.h>
#include <stdlib.h>
int menu();
void quadrado();
void retangulo();
void triangulo();
void encerrar();
int main()
{
    char sn, op;
    int encerrar = 0;
        system("clear");
        printf("seja bem vindo ao sistema\n");
        do{
            op = menu();
            switch (op)
            {
            case 1:
                quadrado();
                break;
            case 2:
                retangulo();
                break;
            case 3:
                triangulo();
                break;
            default:
                encerrar = 1;
                break;
            }
        }while(encerrar == 0);

        return 0;
}
int menu(){
    int op;
    system("clear");
    printf("Menu de opçoes");
    printf("\n1.Quadrado");
    printf("\n2.Retangulo");
    printf("\n3.Triangulo");
    printf("\n4.Encerrar");
    printf("\n.Sua opcao\n");
    scanf("%d", &op);
    fflush(stdin);
    return op;
}
void quadrado(){ 
    float m1,area,perimetro;
    system("clear");
    printf("Calculando a área de um quadrado");
    printf("\n\n Digite o comprimento do lado\n");
    scanf("%f", &m1);
    area = m1*m1;
    perimetro = 4 * m1;
    printf("\n\nArea: %f",area);   
    printf("\nPerimetro: %f\n", perimetro);
}
void retangulo(){
    float l1,l2,area,perimetro;
    system("clear");
    printf("Calculando a área de um retangulo");
    printf("\n\n Digite o comprimento de cada lado\n");
    scanf("%f %f", &l1, &l2);
    area = l2*l1;
    perimetro = (2 * l1) * (2 * l2);
    printf("\n\nArea: %f",area);   
    printf("\nPerimetro: %f\n", perimetro);
}
void triangulo(){
    float base,altura,area;;
    system("clear");
    printf("Calculando a área de um triangulo");
    printf("\n\n Digite o comprimento da base\n");
    scanf("%f", &base);
    printf("\n\n Digite o comprimento de cada altura\n");
    scanf("%f", &altura);
    area = (base*altura)/2;
    printf("\n\nArea: %f\n",area);
}
