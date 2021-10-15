#include <vector>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

enum Door {
    Porta =1,
    Porta2,
};

void RestartDoorA() {
    srand(time(NULL));
    int round = 1;
    char letra;
    while (true) {
        const char arrayNum[2] = { '1', '2' };
        int randIndex = rand() % 2;
        int choice;
        std::cout << "Choose a Step: \n";
        std::cin >> choice;
        if (choice == randIndex) {
            round++;

            std::cout << "Continue\n" << round << " de 5 rodadas" << std::endl;
            if (round == 5) {
                std::cout << "CHUGHAHABNIDA!!VOCÊ VENCEU O JOGO!" << std::endl;
                exit(0);
            }
        }
        else {
            system("cls");
            std::cout << "ELIMINADO\n" << std::endl;
            std::cout << "\nSe deseja reiniciar aperte R ou 0 para sair e morrer\n";
            std::cin >> letra;
            if (letra == 'R') {
                RestartDoorA();
            }
            if (letra == '0') {
                exit(0);
            }
            else {
                exit(0);
            }
        }
    }
}

void RestartDoorB() {
    srand(time(NULL));
    int round = 1;
    char letra;
    while (true) {
        const char arrayNum[3] = { '1', '2', '3'};
        int randIndex = rand() % 3;
        int choice;
        std::cout << "Choose a Step: \n";
        std::cin >> choice;
        if (choice == randIndex) {
            round++;

            std::cout << "Continue\n" << round << " de 5 rodadas" << std::endl;
            if (round == 5) {
                std::cout << "CHUGHAHABNIDA!!VOCÊ VENCEU O JOGO!" << std::endl;
                exit(0);
            }
        }
        else {
            system("cls");
            std::cout << "ELIMINADO\n" << std::endl;
            std::cout << "\nSe deseja reiniciar aperte R ou 0 para sair e morrer\n";
            std::cin >> letra;
            if (letra == 'R') {
                RestartDoorB();
            }
            if (letra == '0') {
                exit(0);
            }
            else {
                exit(0);
            }
        }
    }
}

int main()
{
    std::cout << "\t\t===============WELCOME!===============\n \n\t\t=========I WANT TO PLAY A GAME!=====\n" << std::endl;
    std::cout << "\tApenas as teclas 1 e 2 correspondem aos STEPS.\n";
    std::cout << "\n Escolha uma porta jogador" << std::endl;
    std::vector < std::pair<int, std::string>> Portas{
        {1, "Porta A"},
        {2, "Porta B"},
    };
    for (auto it = Portas.begin(); it != Portas.end(); ++it) {
        const char *pP = it->second.c_str();
        std::cout << it->first << '\t' << it->second << std::endl;
    }
    int DoorOption;
    std::cin >> DoorOption;
    char letra;
    if (DoorOption == Door::Porta) {
        srand(time(NULL));
        int round =1;
        while (true) {
            const char arrayNum[2] = { '1', '2' };
            int randIndex = rand() % 2;
            int choice;
            std::cout << "Choose a Step: \n";
            std::cin >> choice;
            if (choice == randIndex) {
                round++;
                
                std::cout << "Continue\n" << round <<" de 5 rodadas"<< std::endl;
                if (round == 5) {
                    std::cout << "CHUGHAHABNIDA!!VOCÊ VENCEU O JOGO!" << std::endl;
                    exit(0);
                }
            }
            else {
                system("cls");
                std::cout << "ELIMINADO\n" << std::endl;
                std::cout << "\nSe deseja reiniciar aperte R ou 0 para sair e morrer\n";
                std::cin >> letra;
                if (letra == 'R') {
                    RestartDoorA();
                }
                if (letra == '0') {
                    exit(0);
                }
                else {
                    exit(0);
                }
            }
        }
    }
    if (DoorOption == Door::Porta2) {
        srand(time(NULL));
        int round = 1;
        while (true) {
            const char arrayNum[3] = { '1', '2', '3'};
            int randIndex = rand() % 3;
            int choice;
            std::cout << "Choose a Step: \n";
            std::cin >> choice;
            if (choice == randIndex) {
                round++;
                std::cout << "Continue\n" << round << " de 5 rodadas" << std::endl;
                if (round == 5) {
                    std::cout << "CHUGHAHABNIDA!!VOCÊ VENCEU O JOGO!" << std::endl;
                    exit(0);
                }
            }
            else {
                system("cls");
                std::cout << "ELIMINADO\n" << std::endl;
                std::cout << "\nSe deseja reiniciar aperte R ou 0 para sair e morrer\n";
                std::cin >> letra;
                if (letra == 'R') {
                    RestartDoorB();
                }
                if (letra == '0') {
                    exit(0);
                }
                else {
                    exit(0);
                }
            }
        }
    }
}
