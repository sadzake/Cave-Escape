#include <iostream>
#include <conio.h>
#include <windows.h>
#include <string>

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

    std::string user, difSelection;
    int difficulty;
    int cash(0), healthPoints(0);
    HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(h, 2);
    std::cout << "Welcome to Cave Escape, please enter your name: ";
    SetConsoleTextAttribute(h, 7);
    getline(std::cin, user);
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
            std::cout << "Please use the numbers 1-4 to choose your difficulty:\n";
            goto again;
    }
}