#include <iostream>
#include <conio.h>
#include <windows.h>

void Game() {
    system("CLS");
    for(int i = 1; i <= 2; i++) {
        std::cout << "Loading.";
        Sleep(1000);
        system("CLS");
        std::cout << "Loading..";
        Sleep(1000);
        system("CLS");
        std::cout << "Loading...";
        Sleep(1000);
        system("CLS");
    }
    std::cout << "DONE\n";
    Sleep(2000);
    system("CLS");

    
}