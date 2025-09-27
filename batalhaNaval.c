#include <stdio.h>
#include <string.h> // Para a função memset, se necessário, ou usar loops for

// Definição do tamanho do tabuleiro
#define TAMANHO_TABULEIRO 10
#define AGUA 0
#define NAVIO 3

// --- Funções Auxiliares ---

// Função para inicializar o tabuleiro com AGUA (0)
void inicializar_tabuleiro(int tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO]) {
    // Usamos loops aninhados (for) para percorrer todos os elementos da matriz
    for (int i = 0; i < TAMANHO_TABULEIRO; i++) {
        for (int j = 0; j < TAMANHO_TABULEIRO; j++) {
            tabuleiro[i][j] = AGUA;
        }
    }
}

// Função para exibir o tabuleiro completo
void exibir_tabuleiro(int tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO]) {
    printf("\n   ");
    // Exibe os índices das colunas (0 a 9)
    for (int j = 0; j < TAMANHO_TABULEIRO; j++) {
        printf(" %d", j);
    }
    printf("\n");
    printf("  ----------------------\n");

    // Exibe o conteúdo da matriz
    for (int i = 0; i < TAMANHO_TABULEIRO; i++) {
        printf("%d |", i); // Exibe o índice da linha
        for (int j = 0; j < TAMANHO_TABULEIRO; j++) {
            printf(" %d", tabuleiro[i][j]);
        }
        printf("\n");
    }
}

// Função para posicionar os quatro navios
void posicionar_navios(int tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO]) {
    // Nota: Para este nível, a validação de sobreposição e limites não é estritamente pedida,
    // mas em um jogo real seria essencial. Aqui, assumimos coordenadas válidas.

    // 1. Navio 1: Vertical (Tamanho 3)
    // Início: (2, 1)
    tabuleiro[2][1] = NAVIO;
    tabuleiro[3][1] = NAVIO;
    tabuleiro[4][1] = NAVIO;
    printf("- Navio 1 (Vertical) posicionado de (2,1) a (4,1).\n");

    // 2. Navio 2: Horizontal (Tamanho 4)
    // Início: (8, 3)
    tabuleiro[8][3] = NAVIO;
    tabuleiro[8][4] = NAVIO;
    tabuleiro[8][5] = NAVIO;
    tabuleiro[8][6] = NAVIO;
    printf("- Navio 2 (Horizontal) posicionado de (8,3) a (8,6).\n");

    // 3. Navio 3: Diagonal Principal (Tamanho 3)
    // Início: (0, 7) e segue para (2, 9)
    // Posições: (0, 7), (1, 8), (2, 9)
    tabuleiro[0][7] = NAVIO;
    tabuleiro[1][8] = NAVIO;
    tabuleiro[2][9] = NAVIO;
    printf("- Navio 3 (Diagonal) posicionado de (0,7) a (2,9).\n");

    // 4. Navio 4: Diagonal Secundária (Tamanho 4)
    // Início: (6, 9) e segue para (9, 6)
    // Posições: (6, 9), (7, 8), (8, 7), (9, 6)
    tabuleiro[6][9] = NAVIO;
    tabuleiro[7][8] = NAVIO;
    tabuleiro[8][7] = NAVIO;
    tabuleiro[9][6] = NAVIO;
    printf("- Navio 4 (Diagonal) posicionado de (6,9) a (9,6).\n");
}

// --- Função Principal (main) ---

int main() {
    int tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO];

    printf(">>> Batalha Naval - Nível Aventureiro <<<\n");
    printf("Tabuleiro %dx%d. 0 = Água, 3 = Navio.\n", TAMANHO_TABULEIRO, TAMANHO_TABULEIRO);

    // 1. Inicializar o Tabuleiro
    inicializar_tabuleiro(tabuleiro);

    // 2. Posicionar os Navios
    printf("\n--- Posicionamento dos Navios ---\n");
    posicionar_navios(tabuleiro);

    // 3. Exibir o Tabuleiro Completo
    printf("\n--- Tabuleiro Completo ---\n");
    exibir_tabuleiro(tabuleiro);

    printf("\nNível Aventureiro Concluído!\n");
    return 0;
}
