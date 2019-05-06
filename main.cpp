//!
//! @file       main.cpp
//! @author     Hasenfresser
//! @version    1.04
//! @date       2017-12-28
//!
//! @brief      Main file of the project. Just for testing purposes.
//!

#include "MenuTemplate/MenuTemplate.hpp"
#include <iostream>
#include <clocale>
#include <io.h>
using std::cout;
using std::endl;

//!
//! @brief  Main function of MenuTemplate.
//!
//! @return int
//!
int main() {
    // Example menu for a game:
    MenuTemplate::MenuTemplate MenuA;
	
	const string heart = "\xe2\x99\xa5 ";

    MenuA.Title = "\t\tNeverwinter Nights Simple Menu";
    MenuA.Description = "Choose with UP and DOWN, select with RETURN!";
    MenuA.setCursor(heart, true);

    MenuA.addEntry("GAME_NEW", "New game");
    MenuA.addEntry("GAME_LOAD", "Load save state");
    MenuA.addEntry("GAME_EXIT", "Exit game");
    MenuA.addEntry("GAME_OPTIONS", "Game options");
    MenuA.addEntry("VIDEO_OPTIONS", "Video Options");
    MenuA.addEntry("SOUND_OPTIONS", "Sound Options");
    MenuA.addEntry("CONTROLS", "Controls");

    MenuA.swapEntries(2, "GAME_OPTIONS");

    MenuA.setCursorStartPosition(2);

    cout << MenuA.displayGetName() << endl;
    cout << "Tipo do Cursor: " << MenuA.getCursor() << endl;
    cout << "Tamanho do Cursor: " << MenuA.getCursorLength() << endl;
}
