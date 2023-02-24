#include <iostream>
#include <conio.h>
#include <windows.h>
#include <string>
#include "IntroCutscene.h"

void Game() {
    system("CLS");
    for(int i = 1; i <= 3; i++) {
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

    std::string difSelection;
    int difficulty;
    int cash(0), healthPoints(0);
    HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(h, 2);
    std::cout << "Welcome to Cave Escape.\n\n";
    Sleep(2500);
    SetConsoleTextAttribute(h, 7);
    std::cout << "Select difficulty (use numbers 1-4):\n";
    SetConsoleTextAttribute(h, 3);
    std::cout << "1. Easy\n";
    SetConsoleTextAttribute(h, 6);
    std::cout << "2. Medium\n";
    SetConsoleTextAttribute(h, 8);
    std::cout << "3. Hard\n";
    SetConsoleTextAttribute(h, 4);
    std::cout << "4. Strike it Rich or Die Tryin'\n";
    SetConsoleTextAttribute(h, 7);
    again:std::cin >> difficulty;
    switch (difficulty) {
        case 1: 
            cash = 100;
            healthPoints = 100;
            difSelection = "Easy";
            break;
        case 2:
            cash = 70;
            healthPoints = 70;
            difSelection = "Medium";
            break;
        case 3:
            cash = 50;
            healthPoints = 50;
            difSelection = "Hard";
            break;
        case 4:
            cash = 0;
            healthPoints = 1;
            difSelection = "Strike it Rich or Die Tryin'";
            break;
        default:
            std::cout << "Please use the numbers 1-4 to select your difficulty:\n";
            goto again;
    }
    std::cout << '\n' << '\n';
    std::cout << "You chose.. ";
    Sleep(2500);
    std::cout << "the " << difSelection << " difficulty!\n";
    Sleep(1000);
    std::cout << "This means that you start off with " << cash << " minebucks and " << healthPoints << " HP!\n";
    Sleep(2500);
    std::cout << "Good luck on your journey and have fun!\n";
    Sleep(2500);
    system("CLS");
    for(int i = 1; i <= 3; i++) {
        std::cout << "Loading game.";
        Sleep(1000);
        system("CLS");
        std::cout << "Loading game..";
        Sleep(1000);
        system("CLS");
        std::cout << "Loading game...";
        Sleep(1000);
        system("CLS");
    }
    std::cout << "DONE\n";
    Sleep(2000);
    IntroCutscene();
    std::string choice;
    std::cout << "What would you like to do?\n";
    std::cout << "1. Mine\n";
    std::cout << "2. Sell\n";
    std::cout << "3. Shop\n\n"; 
    getline(std::cin, choice);
}