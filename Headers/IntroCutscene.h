#include <iostream>
#include <windows.h>
#include <string>
#include <conio.h>
//Making this in plain C++ is a pain in the ass

void displayText(std::string text) {
    for(int i = 0; i < text.length(); i++) {
        std::cout << text[i];
        Sleep(100);
    }
}

void IntroCutscene() {
    HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
    system("CLS");
    displayText("While you were watching the television, an ad appears on the TV:\n");
    SetConsoleTextAttribute(h, 4);
    displayText("'You want a break from life? To enjoy yourself? Well we here at Hotel Ofrygo have just the right destination for you! The island Ofrygo, located in the middle of the Bay of Bengal, is a nice remote island with amazing tourist destinations, such as 'the Statue of King Rajendra', the first king of Ofrygo, who defeated the British Empire who tried to invade the country.\n");
    displayText("Participate in scuba diving, jet skiing, and snorkel near the shores of the world's best beaches!\n");
    displayText("The best part? It's competely free! If you're one of the lucky 1000 people who call this number on the screen! Call right away and get a free one week trip!'\n\n\n");
    SetConsoleTextAttribute(h, 7);
    displayText("Intrigued, you call the number right away and a person on the other line says:\n");
    SetConsoleTextAttribute(h, 4);
    displayText("'Congratulations! You're one of the lucky 1000 people who got a free trip to Ofrygo!'\n\n\n");
    SetConsoleTextAttribute(h, 7);
    displayText("You were extremely happy, as you worked in the mines for the past 20 years and you thought you needed a break.\n\n\n");
    displayText("After landing on the island, you couldn't believe the beauty. You enjoyed every second of it.\n\n\n");
}