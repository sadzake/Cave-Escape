#include <iostream>
#include <windows.h>
#include <iomanip>
#include <conio.h>
#include <string>
#include "Game.h"
#include "Instructions.h"

void MainMenu() {
    system("CLS");
    std::string choice;
    HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(h, 6);
    int width = 25;
    int text_width = 15;
    int spaces = (width - text_width) / 2;

    std::cout << std::setw(spaces) << "" << "       CAVE ESCAPE\n";
    std::cout << std::setw(spaces) << "" << "A Typing based mining game\n\n";
    SetConsoleTextAttribute(h, 7);
    std::cout << std::setw(spaces) << "" << "         New Game\n";
    std::cout << std::setw(spaces) << "" << "       Instructions\n\n";
    again:getline(std::cin, choice);
    if (choice == "Game" || choice == "game" || choice == "New Game" || choice == "new game") {
        Game();
    }
    else if (choice == "Instructions" || choice == "instructions") {
        Instructions();
    }
    else {
        std::cout << "Unknown input, type instructions to see how to play the game and use commands.\n";
        goto again; 
    }
}