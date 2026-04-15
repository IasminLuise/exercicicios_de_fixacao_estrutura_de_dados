/*------------------MÉTODO PRINCIPAL---------------------*/
/*--------------------ATIVIDADE 06-----------------------*/
#include <stdio.h> 
#include <math.h>   //biblioteca que possibilita o cálculo

int main (){
    int num;
    int resultado;
    
    printf("Digite um número para ser calculado: ");
    scanf("%d", &num);
    
    resultado = sqrt(num);   //função da biblioteca math
    
    printf("A raiz quadrada do número digitado é: %d" ,resultado);
    
    return 0;
}
