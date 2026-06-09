#include <stdio.h>

//criação da função recursiva relacionado ao movimento da rainha
void rainha(int rainha2){//declaração do parametro "rainha2" para ser alterado durante a execução da função

    if (0 < rainha2 && rainha2 <= 8){//esse if vai analisar o parametro "rainha2" para manter a função funcionando até a condição ser atingida
        rainha(rainha2 - 1);//decrementando o valor de "rainha2" para que a função seja chamada novamente, criando a recursividade 
        
        printf("\n%d. esquerda", rainha2);//printando a direção que a rainha andou e a quantidade de vezes que o movimento foi feito
    }
}


//criação da função recursiva relacionado ao movimento do bispo
void bispo(int bispo2){//declaração do parametro "bispo" para ser alterado durante a execução da função

    //essas duas variáveis foram declaradas para contar a quantidade de vezes que os movimentos foram executados
     int contagem2 = 1; //essa para o movimento vertical
     int contagem = 1;//e essa para o movimento horizontal

 for (bispo2; 0 < bispo2 && bispo2 <= 5; bispo2--)//loop externo, responsavel por mover o bispo para direita
    {
        int i = 0;//declaração da variável "i" que será responsavel por mover o bispo para cima
         while (i <= 0)//loop interno, responsavel por mover o bispo para cima
     {
        printf("%d: cima\n", contagem);//vai printar a mensagem "cima" indicando quantas vezes o bispo foi para cima
        i++;//incrementação de 1 para a variável "i" para impedir loop infinito
        contagem++;//incrementação de "contagem" para mostrar quantas vezes o movimento foi feito
     }
    printf("%d: direita\n", contagem2);//print da quantidade de vezes que o bispo foi para a direita
    contagem2++;//incremento de "contagem2" para mostrar quantas vezes o movimento foi feito
   }
}


//criação da função recursiva relacionado ao movimento do bispo
void torre(int torre2){

    if (0 < torre2 && torre2 <= 5){//esse if vai analisar o parametro "torre2" para manter a função funcionando até a condição ser atingida
        torre(torre2 - 1);//decrementando o valor de "torre2" para que a função seja chamada novamente, criando a recursividade 
        
        printf("\n%d. direita", torre2);//printando a direção que a torre andou e a quantidade de vezes que o movimento foi feito
    }
}

int main() {
    
    //declarações das variáveis para cada peça
    int bispo3 = 5;
    int rainha3 = 8;
    int torre3 = 5;
    int cavalocima = 1;
    int cavalodireita = 1;
    int contagem = 1;//contagem de passos dados 


//execução do movimento da rainha
printf("\n----MOVIMENTAÇÃO RAINHA----\n");//print que indica que esse é o movimento da rainha
rainha(rainha3);//colocando a variável "rainha3" como parametro da recursividade "rainha"
    
printf("\n----MOVIMENTAÇÃO BISPO----\n");//print que indica que esse é o movimento do bispo
bispo(bispo3);//colocando a variável "bispo3" como parametro da recursividade "bispo"
   

printf("\n----MOVIMENTAÇÃO TORRE----\n");//print que indica que esse é o movimento da torre
torre(torre3);//colocando a variável "torre3" como parametro da recursividade "torre"


    //aquui é feito o movimento do cavalo usando um loop aninhado e multiplas condições
    printf("\n----MOVIMENTAÇÃO CAVALO----\n\n");//print que indica que esse é o movimento do cavalo
   for (cavalodireita; 0 < cavalodireita && cavalodireita < 2; cavalodireita++)//loop externo responsavel pelo movimento horizontal do cavalo
    {
         for (cavalocima; 0 < cavalocima && cavalocima < 3; cavalocima++)//loop interno responsavel pelo movimento vertical do cavalo
         {
            printf("%d. cima\n", contagem);//print da contagem de passos dados para cima e printando a direção do movimento
            contagem++;//incremento de "contagem" para contar os movimentos
         }
  

    contagem = 1;//resetando a variável "contagem" para ser usada no proximo print
    printf("%d: direita\n", contagem);//printa da contagem de passos dados para direita e printando a direção do movimento
   }
   
return 0;   
}