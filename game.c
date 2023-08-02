#include <stdio.h>
#include <conio.h>  // getch()
#include <stdlib.h>  
#include <time.h>
#include <Windows.h>  // Sleep()
#include <ctype.h>   // tolower()
#include "ascii_art.h"

#define BOARD_SIZE 4

int get_num_moves();
void shuffle();
int check_matrix();
void print_board();
void clear_screen();

int main() {
    int board[BOARD_SIZE][BOARD_SIZE] = {    // inicializando tabuleiro
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 0}
    };
    int empty_row = 3, empty_col = 3;       // posição do 0(espaço vazio)
    int row, col, temp;
    char ch;
    int difficulty, num_moves;
    int cont_moves = 0;
    
    print_welcome();
    print_ref_solved_matrix();
    print_diff_selection();
    scanf("%d", &difficulty);

    num_moves = get_num_moves(difficulty);              // numéro para embaralhamento
    
    print_begin_shuffle();
    shuffle(board, &empty_row, &empty_col, num_moves);  // embaralhamento 
    print_shuffle_complete();
    print_instructions();
    print_press_p();
    print_good_luck();
    
    while (!check_matrix(board)) {
        print_board(board, &empty_row, &empty_col);
        ch = getch();                                   // lê a tecla do usuário
        ch = tolower(ch);                               // converte ch para minúsculo
        switch (ch) {
            case 'w':  // para cima
                row =empty_row - 1;
                col =empty_col;
                break;
            case 's':  //para baixo
                row =empty_row + 1;
                col =empty_col;
                break;
            case 'a':  // para a direita
                row =empty_row;
                col =empty_col - 1;
                break;
            case 'd':  // para a esquerda
                row =empty_row;
                col =empty_col + 1;
                break;
            case 'p':  // sair do jogo
                exit(0);
            default:
                continue;
        }
        if (row < 0 || row >= BOARD_SIZE || col < 0 || col >= BOARD_SIZE) {  // checa validade do movimento
            clear_screen();
            printf("\033[1;31mYou can't make that move!\n\033[0m");  // ANSI escape sequence muda para vermelho
            continue;
        }
        temp = board[row][col];  //começa o troca troca
        board[row][col] = board[empty_row][empty_col];
        board[empty_row][empty_col] = temp;
        empty_row = row;
        empty_col = col;
        cont_moves++;

        clear_screen();
        printf("moves: %d\n", cont_moves);
    }
    print_congrats();
    printf("\033[32mIt took you %d moves to solve the puzzle!\033[0m", cont_moves);  //muda para verde (ANSI escape sequence)
    return 1;
}

int get_num_moves(int difficulty) {
    int num_moves;
    switch (difficulty) {
        case 1:
            num_moves = 10;
            break;
        case 2:
            num_moves = 40;
            break;
        case 3:
            num_moves = 50;
            break;
        case 4:
            num_moves = 100;
            break;
        default:
            num_moves = 100;
            break;
    }
    return num_moves;
}

void shuffle(int board[][BOARD_SIZE], int *empty_row, int *empty_col, int num_moves) {
    int i, row, col;
    int random_move, temp;

    srand(time(NULL));
    for (i = 0; i < num_moves; i++) {
        random_move = rand() % 4;     // 0 = w, 1 = s, 2 = a, 3 = d
        switch (random_move) {
                case 0:  // para cima
                    row = *empty_row - 1;
                    col = *empty_col;
                    break;
                case 1:  // para baixo
                    row = *empty_row + 1;
                    col = *empty_col;
                    break;
                case 2:  // para a direita
                    row =*empty_row ;
                    col =  *empty_col- 1;
                    break;
                case 3:  // para a esquerda
                    row = *empty_row;
                    col = *empty_col + 1;
                    break;
                default:
                    continue;
            }
        if (row < 0 || row >= BOARD_SIZE || col < 0 || col >= BOARD_SIZE) {  // checa validade do movimento
            i--;  // movimento inválido não conta, logo, se tira 1 do i para novo random move
            continue;
        }
        temp = board[row][col];                           // salva nova posição
        board[row][col] = board[*empty_row][*empty_col];  // 0 ocupa nova posição
        board[*empty_row][*empty_col] = temp;             // elemento da nova posição ocupa posição do 0
        *empty_row = row;                                 // update do empty_row
        *empty_col = col;                                 //update do empty_col
        clear_screen();
        print_board(board, empty_row, empty_col);
        Sleep(100);
    }
}

int check_matrix(int board[][BOARD_SIZE]) {
    int solved_board[BOARD_SIZE][BOARD_SIZE] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 0}
    };
    int i, j;
    for (i=0; i< BOARD_SIZE; i++) {
        for (j=0; j < BOARD_SIZE; j++) {
            if (board[i][j] != solved_board[i][j]) {
                return 0;
            }
        }
    }
    return 1;
}

void print_board(int board[BOARD_SIZE][BOARD_SIZE], int *empty_row, int *empty_col) {
    int i, j;
    printf("\n");
    for (i = 0; i < BOARD_SIZE; i++) {
        for (j = 0; j < BOARD_SIZE; j++) {
            if (board[i][j] == 0 && i == *empty_row && j == *empty_col) {
                printf("\033[1;36m[   ]\033[0m");  // elemento vazio na cor ciano (ANSI escape sequence)
            } else {
                printf("[ %2d ]", board[i][j]);   // elementos numéricos
            }
        }
        printf("\n");
    }
    printf("\n");
}
void clear_screen() {
    #ifdef _WIN32
        system("cls"); // para Windows
    #else
        system("clear"); // para Linux e macOS
    #endif
}