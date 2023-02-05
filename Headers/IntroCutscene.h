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
    displayText("Couple days have passed and everything was going well, user had the time of his live swimming, sun tanning and playing at the beach.\n");
    displayText("You as well wanted to visit as many tourist attractions as you could withing the week.\n\n\n");
    displayText("One of them was 'The Ofrygorian Cave', an old, abandonded cave where the Ofrygorians lived 100,000 years ago.\n\n\n");
    displayText("Everything was going well, user was fascinated by the art on the caves, although they noticed something was off.\n");
    displayText("There was a strange... smell in the cave, and as user went deeper and deeper in it, the smell got worse.\n\n\n");
    displayText("As user was going to the smell, the floor began to feel more... light, and them... *BOOM*\n");
    displayText("The floor broke...\n\n\n");
    displayText("Suddenly, you wake up in the mines.\n\n\n");
    SetConsoleTextAttribute(h, 6);
    displayText("'Am I having a bad dream, why am I in the mines?'\n\n\n");
    SetConsoleTextAttribute(h, 7);
    displayText("You hear a voice of someone in the distance;\n\n\n");
    SetConsoleTextAttribute(h, 3);
    displayText("'Well hello, hello, looks like Ashok got another person here.'\n\n\n");
    SetConsoleTextAttribute(h, 6);
    displayText("'Ashok? You mean, the current president of Ofrygo Ashok?'\n\n\n");
    SetConsoleTextAttribute(h, 3);
    displayText("'Yes, you see, less and less Ofrygorians work in the mines these days and Ashok has been sick of it, so he lures tourists into the cave so he can have people mine for him.'\n\n\n");
    SetConsoleTextAttribute(h, 6);
    displayText("'What? Why? Why would he do this, this makes no sense!'\n\n\n");
    SetConsoleTextAttribute(h, 3);
    displayText("'Well, I would like to know too, you see, no one actually knows why he is doing this, but I speculate that it's for a project he has been talking about for years.'\n\n\n");
    SetConsoleTextAttribute(h, 6);
    displayText("'What? What project? What is happening, and who are you?'\n\n\n");
    SetConsoleTextAttribute(h, 3);
    displayText("'He hasn't said much about the project of his, he keeps it a secret, and damn I would like to know too.'\n");
    displayText("'Oh by the way I am the shopkeeper here, I sell pickaxes, weapons and a bunch of stuff, too'\n\n\n");
    SetConsoleTextAttribute(h, 6);
    displayText("'Nice to meet you, anyways... What am I supposed to do now?'\n\n\n");
    SetConsoleTextAttribute(h, 3);
    displayText("'Well, you need to mine ores and sell them to me, so you can buy a minecart and escape this hellhole.'\n\n\n");
    SetConsoleTextAttribute(h, 6);
    displayText("'Why cant you just give it to me?'\n\n\n");
    SetConsoleTextAttribute(h, 3);
    displayText("'You see I would, but Ashok has guards hidden everywhere watching us, if I give you something for free or for less, we would be killed instantly.'\n\n\n");
    SetConsoleTextAttribute(h, 6);
    displayText("'Jesus, I guess he wants to use the ores for his project of his?'\n\n\n");
    SetConsoleTextAttribute(h, 3);
    displayText("'I think so'\n\n\n");
    displayText("'I don't know honestly, but all I can give you is this wooden pickaxe and sword to start you off.'\n");
    displayText("'Here, take them, and good luck friend, there are many creatures wandering in the caves, so try not to die, ok?'\n\n\n\n");
}