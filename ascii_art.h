#ifndef ASCII_ART
#define ASCII_ART
#define BOARD_SIZE 4

#include <stdio.h>
#include <Windows.h>

void print_uwu() {
    printf("                       \n");
    printf("                       \n");
    printf("    (   (  (       (   \n");
    printf("    )\\  )\\))(      )\\  \n");
    printf(" _ ((_)((_)()\\  _ ((_) \n");
    printf("| | | |_(()((_)| | | | \n");
    printf("| |_| |\\ V  V /| |_| | \n");
    printf(" \\___/  \\_/\\_/  \\___/  \n");
    printf("                       \n");
}

void print_welcome() {
    printf(" __          __  _                            _          _____               _        __ _____   _ \n");
    Sleep(100);
    printf(" \\ \\        / / | |                          | |        |  __ \\             | |      /_ | ____| | |\n");
    Sleep(100);
    printf("  \\ \\  /\\  / /__| | ___ ___  _ __ ___   ___  | |_ ___   | |__) |   _ _______| | ___   | | |__   | |\n");
    Sleep(100);
    printf("   \\ \\/  \\/ / _ \\ |/ __/ _ \\| '_ ` _ \\ / _ \\ | __/ _ \\  |  ___/ | | |_  /_  / |/ _ \\  | |___ \\  | |\n");
    Sleep(100);
    printf("    \\  /\\  /  __/ | (_| (_) | | | | | |  __/ | || (_) | | |   | |_| |/ / / /| |  __/  | |___) | |_|\n");
    Sleep(100);
    printf("     \\/  \\/ \\___|_|\\___\\___/|_| |_| |_|\\___|  \\__\\___/  |_|    \\__,_/___/___|_|\\___|  |_|____/  (_)\n");
    Sleep(1000);
    
}

void print_ref_solved_matrix() {
    printf("  _____ _    _      _      _   _                 _            _      _        _              __   _   _          _                      _ _  \n");
    Sleep(100);
    printf(" |_   _| |_ (_)___ (_)___ | |_| |_  ___   ______| |_ _____ __| |  __| |_ __ _| |_ ___   ___ / _| | |_| |_  ___  | |__  ___  __ _ _ _ __| (_) \n");
    Sleep(100);
    printf("   | | | ' \\| (_-< | (_-< |  _| ' \\/ -_) (_-< _ \\ \\ V / -_) _` | (_-<  _/ _` |  _/ -_) / _ \\  _| |  _| ' \\/ -_) | '_ \\/ _ \\/ _` | '_/ _` |_  \n");
    Sleep(100);
    printf("   |_| |_||_|_/__/ |_|__/  \\__|_||_\\___| /__|___/_|\\_/\\___\\__,_| /__/\\__\\__,_|\\__\\___| \\___/_|    \\__|_||_\\___| |_.__/\\___/\\__,_|_| \\__,_(_)\n");
    Sleep(100);
    printf("                                                                                                                                             \n");
    Sleep(500);


    int board[BOARD_SIZE][BOARD_SIZE] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 0}
    };
    int empty_row = 3, empty_col = 3;
    int i, j;

    printf("\n");
    for (i = 0; i < BOARD_SIZE; i++) {
        for (j = 0; j < BOARD_SIZE; j++) {
            if (board[i][j] == 0 && i == empty_row && j == empty_col) {
                printf("\033[1;36m[   ]\033[0m");  // Cyan-colored empty cell
            } else {
                printf("[ %2d ]", board[i][j]);   // Numbered cell
            }
        }
        printf("\n");
    }
    printf("\n");
    Sleep(2000);
}

void print_diff_selection() {
    printf("       _                                        _ _  __  __ _            _ _           \n");
    Sleep(100);
    printf("      | |                                      | (_)/ _|/ _(_)          | | |        _ \n");
    Sleep(100);
    printf("   ___| |__   ___   ___  ___  ___    __ _    __| |_| |_| |_ _  ___ _   _| | |_ _   _(_)\n");
    Sleep(100);
    printf("  / __| '_ \\ / _ \\ / _ \\/ __|/ _ \\  / _` |  / _` | |  _|  _| |/ __| | | | | __| | | |  \n");
    Sleep(100);
    printf(" | (__| | | | (_) | (_) \\__ \\  __/ | (_| | | (_| | | | | | | | (__| |_| | | |_| |_| |_ \n");
    Sleep(100);
    printf("  \\___|_| |_|\\___/ \\___/|___/\\___|  \\__,_|  \\__,_|_|_| |_| |_|\\___|\\__,_|_|\\__|\\__, (_)\n");
    Sleep(100);
    printf("                                                                              __/ |  \n");
    Sleep(100);
    printf("                                                                             |___/   \n");
    Sleep(100);
    printf("  _         ___              \n");
    Sleep(100);
    printf(" / |  ___  | __|__ _ ____  _ \n");
    Sleep(100);
    printf(" | | |___| | _|/ _` (_-< || |\n");
    Sleep(100);
    printf(" |_|       |___\\__,_/__/\\_, |\n");
    Sleep(100);
    printf("                        |__/\n");
    Sleep(100);
    printf("\n");

    printf("  ___         _  _                    _ \n");
    Sleep(100);
    printf(" |_  )  ___  | \\| |___ _ _ _ __  __ _| |\n");
    Sleep(100);
    printf("  / /  |___| | .` / _ \\ '_| '  \\/ _` | |\n");
    Sleep(100);
    printf(" /___|       |_|\\_\\___/_| |_|_|_\\__,_|_|\n");
    Sleep(100);
    printf("                                    \n");
    Sleep(100);
    printf("\n");

    printf("  ____        _  _             _ \n");
    Sleep(100);
    printf(" |__ /  ___  | || |__ _ _ _ __| |\n");
    Sleep(100);
    printf("  |_ \\ |___| | __ / _` | '_/ _` |\n");
    Sleep(100);
    printf(" |___/       |_||_\\__,_|_| \\__,_|\n");
    Sleep(100);
    printf("                               \n");
    Sleep(100);
    printf("\n");

    printf("               (        (         )     )  \n");
    Sleep(100);
    printf("     )         )\\ )     )\\ )   ( /(  ( /(  \n");
    Sleep(100);
    printf("  ( /(        (()/(    (()/(   )\\()) )\\()) \n");
    Sleep(100);
    printf("  )\\())  ___   /(_)) (  /(_)) ((_) |((_)  \n");
    Sleep(100);
    printf(" ((_)   |___| (_))   )\\(_))     ((_)_ ((_) \n");
    Sleep(100);
    printf("| | (_)       | |   ((_) |     / _ \\ |/ /  \n");
    Sleep(100);
    printf("|_  _|        | |__/ _ \\ |__  | (_) |' <   \n");
    Sleep(100);
    printf("  |_|         |____\\___/____|  \\___/_|\\_\\ \n");
    Sleep(100);
    printf("\n");
}

void print_begin_shuffle() {

    printf("    __    _________________    _____ __  ____  ________________    ________\n");
    Sleep(100);
    printf("   / /   / ____/_  __/ ___/   / ___// / / / / / / ____/ ____/ /   / ____/ /\n");
    Sleep(100);
    printf("  / /   / __/   / /  \\__ \\    \\__ \\/ /_/ / / / / /_  / /_  / /   / __/ / / \n");
    Sleep(100);
    printf(" / /___/ /___  / /  ___/ /   ___/ / __  / /_/ / __/ / __/ / /___/ /___/_/  \n");
    Sleep(100);
    printf("/_____/_____/ /_/  /____/   /____/_/ /_/\\____/_/   /_/   /_____/_____(_)   \n");
    Sleep(700);
    

}

void print_shuffle_complete() {
    printf("     _         __  __ _ _                               _     _          _ \n");
    Sleep(100);
    printf("  __| |_ _  _ / _|/ _| (_)_ _  __ _   __ ___ _ __  _ __| |___| |_ ___ __| |\n");
    Sleep(100);
    printf(" (_-< ' \\ || |  _|  _| | | ' \\/ _` | / _/ _ \\ '  \\| '_ \\ / -_)  _/ -_) _` |\n");
    Sleep(100);
    printf(" /__/|_|_\\_,_|_| |_| |_|_|_||_\\__, | \\__\\___/_|_|_| .__/\\___|\\__\\___\\__,_|\n");
    Sleep(100);
    printf("                              |___/               |_|                      \n");
    Sleep(700);
    
    
}

void print_instructions() {
    printf("               __      ___   ___ ___    _                             _   _          _    _           _                          \n");
    Sleep(100);
    printf("  _  _ ______  \\ \\    / /_\\ / __|   \\  | |_ ___   _ __  _____ _____  | |_| |_  ___  | |__| |__ _ _ _ | |__  ____ __  __ _ __ ___ \n");
    Sleep(100);
    printf(" | || (_-< -_)  \\ \\/\\/ / _ \\\\__ \\ |) | |  _/ _ \\ | '  \\/ _ \\ V / -_) |  _| ' \\/ -_) | '_ \\ / _` | ' \\| / / (_-< '_ \\/ _` / _/ -_)\n");
    Sleep(100);
    printf("  \\_,_/__|___|   \\_/\\_/_/ \\_\\___/___/   \\__\\___/ |_|_|_\\___/\\_/\\___|  \\__|_||_\\___| |_.__/_\\__,_|_||_|_\\_\\ /__/ .__/\\__,_\\__\\___|\n");
    Sleep(100);
    printf("                                                                                                              |_|                \n");

    printf("\n");

    Sleep(100);
    printf("  _   _                      _      _   _          _                      _   _         _ _                _      _           _      _        _       _ \n");
    Sleep(100);
    printf(" | |_| |_  _ _ ___ _  _ __ _| |_   | |_| |_  ___  | |__  ___  __ _ _ _ __| | | |_ ___  (_) |_ ___  ___ _ _(_)__ _(_)_ _  __ _| |  __| |_ __ _| |_ ___| |\n");
    Sleep(100);
    printf(" |  _| ' \\| '_/ _ \\ || / _` | ' \\  |  _| ' \\/ -_) | '_ \\/ _ \\/ _` | '_/ _` | |  _/ _ \\ | |  _(_-< / _ \\ '_| / _` | | ' \\/ _` | | (_-<  _/ _` |  _/ -_)_|\n");
    Sleep(100);
    printf("  \\__|_||_|_| \\___/\\_,_\\__, |_||_|  \\__|_||_\\___| |_.__/\\___/\\__,_|_| \\__,_|  \\__\\___/ |_||__/__/ \\___/_| |_|__, |_|_||_\\__,_|_| /__/|__\\__,_||__\\___(_)\n");
    Sleep(100);
    printf("                       |___/                                                                                |___/                                        \n");
    Sleep(700);
}

void print_press_p() {
    printf("   _______                          _     __     __                   _ __                             _      _ \n");
    Sleep(100);
    printf("  /  _/ _/ __ _____  __ __  _    __(_)__ / /    / /____    ___ ___ __(_) /_    ___  _______ ___ ___   ( )___ ( )\n");
    Sleep(100);
    printf(" _/ // _/ / // / _ \\/ // / | |/|/ / (_-</ _ \\  / __/ _ \\  / _ `/ // / / __/   / _ \\/ __/ -_|_-<(_-<   |// _ \\|/ \n");
    Sleep(100);
    printf("/___/_/   \\_, /\\___/\\_,_/  |__,__/_/___/_//_/  \\__/|___/  \\_, /\\_,_/_/\\__(_) / .__/_/  \\__/___/___/    / .__/   \n");
    Sleep(100);
    printf("         /___/                                             /_/           |/ /_/                       /_/       \n");
    Sleep(700);
}

void print_good_luck() {
    printf("  _____             __  __           __   __\n");
    Sleep(100);
    printf(" / ___/__  ___  ___/ / / / __ ______/ /__/ /\n");
    Sleep(100);
    printf("/ (_ / _ \\/ _ \\/ _  / / /_/ // / __/  '_/_/ \n");
    Sleep(100);
    printf("\\___/\\___/\\___/\\_,_/ /____|_,_/\\__/_/\\_(_)  \n");
    Sleep(700);
}

void print_congrats() {
    printf("                                    .'''.       \n");
    Sleep(100);
    printf("       .'''.      .        *''*    :_\\/_:     . \n");
    Sleep(100);
    printf("      :_\\/_:   _\\(/_  .:.*_\\/_*   : /\\ :  .'.:.'.\n");
    Sleep(100);
    printf("  .'''.: /\\ :   ./)\\   ':'* /\\ * :  '..'.  -=:o:=-\n");
    Sleep(100);
    printf(" :_\\/_:'.:::.    ' *''*    * '.\\'/.' _\\(/_'.':'.\n");
    Sleep(100);
    printf(" : /\\ : :::::     *_\\/_*     -= o =-  /)\\    '  *\n");
    Sleep(100);
    printf("  '..'  ':::'     * /\\ *     .'/\\.\\'.   '\n");
    Sleep(100);
    printf("      *            *..*         :\n");
    Sleep(100);
    printf("        *\n");
    Sleep(100);
    printf("        *\n");
    Sleep(300);


    printf("__   __                _ _     _   _ _   _   _____                             _       _ \n");
    Sleep(100);
    printf("\\ \\ / /               | (_)   | | (_) | | | /  __ \\                           | |     | |\n");
    Sleep(100);
    printf(" \\ V /___  _   _    __| |_  __| |  _| |_| | | /  \\/ ___  _ __   __ _ _ __ __ _| |_ ___| |\n");
    Sleep(100);
    printf("  \\ // _ \\| | | |  / _` | |/ _` | | | __| | | |    / _ \\| '_ \\ / _` | '__/ _` | __/ __| |\n");
    Sleep(100);
    printf("  | | (_) | |_| | | (_| | | (_| | | | |_|_| | \\__/\\ (_) | | | | (_| | | | (_| | |_\\__ \\_|\n");
    Sleep(100);
    printf("  \\_/\\___/ \\__,_|  \\__,_|_|\\__,_| |_|\\__(_)  \\____/\\___/|_| |_|\\__, |_|  \\__,_|\\__|___(_)\n");
    Sleep(100);
    printf("                                                              __/ |                    \n");
    Sleep(100);
    printf("                                                             |___/                     \n");
    Sleep(700);
}


#endif // ASCII_ART