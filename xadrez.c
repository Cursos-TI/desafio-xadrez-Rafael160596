#include <stdio.h>
#include <locale.h>

// Função para mover a torre
void moverTorre(int casas) {

    if (casas > 0)
    {
        printf("Direita\n");
        moverTorre(casas -1); // chamada recursiva
    }    
      
} 

// Função para mover a rainha
void moverRainha(int casas) {
    if (casas > 0) {
        printf("Esquerda\n");
        moverRainha(casas - 1); // chamada recursiva
    }
}

// Função para mover o bispo
void moverBispo(int casas) {
    if (casas > 0) {
        // Loop externo → movimento vertical (Cima)
        for (int i = 0; i < 1; i++) {

                printf("Cima\n");

            // Loop interno → movimento horizontal (Direita)
            for (int j = 0; j < 1; j++) {
                printf("Direita\n");
            }
        }
        moverBispo(casas - 1); // chamada recursiva
    }
}

// Função para mover o cavalo
void moverCavalo() {
    // Movimento único do cavalo: 2 para cima e 1 para direita
    for (int i = 0; i < 1; i++) {       // loop externo controla o movimento completo
        for (int j = 0; j < 3; j++) {   // loop interno controla cada passo
            if (j < 2) {                // duas primeiras iterações
                printf("Cima\n");
                continue;               // pula direto para a próxima iteração
            }
            if (j == 2) {               // última iteração
                printf("Direita\n");
                break;                  // encerra o loop interno
            }
        }
    }
}
int main ()
{
    setlocale(LC_ALL, "Portuguese"); //Setando em portugues para usar caracteres especiais
       
    printf("\n***** Movimentando as Peças do xadrez *****\n");

    printf("\n*** Torre move-se para: ***\n");

         moverTorre(5); // Chamada da função recursiva para mover a torre 5 casas para direita

    printf("\n*** Bispo move-se para: ***\n");

         moverBispo(5); // Chamada da função recursiva para mover o bispo 5 casas na diagonal (1 cima + 1 direita)

    printf("\n*** Rainha move-se para: ***\n");
    
         moverRainha(8); // Chamada da função recursiva para mover a rainha 8 casas para esquerda

    printf("\n *** Cavalo move-se para: ***\n");

         moverCavalo(); // Chamada da função para mover o cavalo 1 vez

    return 0;
}