#include <iostream>
#include <windows.h>
#include <iomanip>
#include <conio.h>
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
}