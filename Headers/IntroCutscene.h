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
    SetConsoleTextAttribute(h, 4);
    displayText("While you were watching the television, an ad appears on the TV:\n");
    displayText("'You want a break from life? To enjoy yourself? Well we here at Hotel Ofrygo have just the right destination for you! The island Ofrygo, located in the middle of the Bay of Bengal, is a nice remote island with amazing tourist destinations, such as 'the Statue of King Rajendra', the first king of Ofrygo, who defeated the British Empire who tried to invade the country.'\n");
    SetConsoleTextAttribute(h, 7);
}