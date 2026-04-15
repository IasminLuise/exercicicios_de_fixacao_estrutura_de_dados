/*------------------MÉTODO PRINCIPAL---------------------*/
/*--------------------ATIVIDADE 07-----------------------*/
#include <stdio.h> 

int main (){
    int num;
    int resultado;
    
    printf("Digite um número para ser calculado: ");
    scanf("%d", &num);
    
    resultado = ( num * 2);
    
    printf("O quadrado do número digitado é: %d" ,resultado);
    
    return 0;
}
