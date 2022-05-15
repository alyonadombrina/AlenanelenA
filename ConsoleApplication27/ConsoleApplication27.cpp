

#include <iostream>
#include <ctime>
#include "guessGame.h"
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	srand(time(0));
	
	Game guessGame;
	guessGame.StartGame();

    return 0;
}

