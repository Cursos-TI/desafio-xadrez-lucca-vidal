#include <stdio.h>


int main() {
    
    //declarações das variáveis para cada peça
    int bispo = 0;
    int rainha = 0;
    int torre = 0;
    int cavalo = 0;
    int contagem = 1;//contagem de passos dados 

    //estrutura de while (movimentação da rainha)
    printf("\n----MOVIMENTAÇÃO RAINHA---- \n\n");
    while (rainha < 8)//enquanto o valor de "rainha" for menor que 8 o loop vai reiniciado
    {
        
        printf("%d: cima\n", contagem);//o valor de "contagem" é printado junto da palavra "cima"
        rainha++;//adiciona 1 a variável "rainha"   
        contagem++;//adiciona um para a variável "contagem"
    }
     
    contagem = 1;//reseta o valor de "contagem" para ser usado na próxima estrutura
    
    //extrutura do for
    printf("\n----MOVIMENTAÇÃO TORRE---- \n\n");
    for (torre; torre < 5 ; torre++)
    //o valor de "torre" foi definido no inicio do código (torre)
    //então é verificado se seu valor é menor que 5 (torre < 5)
    //por fim adiciona 1 a ele (torre++)

    {
        printf("%d: direita\n", contagem);//o valor de "contagem" é printado junto da palavra "direita"
        contagem++;//adiciona 1 a variável "contagem"
    }
    contagem = 1;//reseta o valor de "contagem" para ser usado na próxima estrutura

    printf("\n----MOVIMENTAÇÃO BISPO---- \n\n");
   do
   {
    printf("%d: cima, direita\n", contagem);//é printado o valor de "contagem" junto das palavras "cima" e "direita"
    contagem++;//é adicionado 1 a variável "contagem"
    bispo++;//é adicionado 1 a variável "bispo"
   } while (bispo < 5);//o loop será executado enquanto a variável "bispo" for menor que 5

   contagem = 1;//reseta o valor de "contagem" para ser usado na próxima estrutura
   
   
    printf("\n----MOVIMENTAÇÃO CAVALO---- \n\n");
   for (cavalo; cavalo < 1; cavalo++)//loop externo, responsavel por mover o cavalo para direita
    {
        int i = 0;//declaração da variável "i" que será responsavel por mover o cavalo para cima
         while (i <= 1)//loop interno, responsavel por mover o cavalo para cima
     {
        printf("%d: cima\n", contagem);//vai printar a mensagem "cima" indicando quantas vezes o cavalo foi para cima
        i++;//incrementação de 1 para a variável "i" para impedir liip infinito
        contagem++;//aumento da contagem de passos
     }
    contagem = 1;//reseta o valor de "contagem" para ser usado no próximo print
    printf("%d: direita\n", contagem);//print da quantidade de vezes que o cavalo foi para a direita
   }
   
return 0;   
}