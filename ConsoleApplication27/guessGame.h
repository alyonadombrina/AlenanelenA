#pragma once
#include <iostream>
#include <ctime>
using namespace std;

// gues game class. Use StartGame() to start game!;
class Game {
public:

	// starts the game
	void StartGame() {
		cout << "Hi!Input A and B" << endl;
		cin >> A >> B;

		SearchDigit();
	}

private:
	int A, B;
	int searchable;

	void SearchDigit() {
		searchable = rand() % B + A;
		int average;
		int uwu = 0;
		while (1) {
			average = (A + B) / 2;
			cout << "Your guessed number is " << average << " ?" << endl;
			cout << "If the guessed number more searchable, input 2 " << endl;
			cout << "If the guessed number less searchable, input 3 " << endl;
			cout << "If the guessed number equal searchable, input 4 " << endl;
			cout << "Input: ";
			cin >> uwu;
			switch (uwu) {
			case 2: A = average;
				break;
			case 3: B = average;
				break;
			case 4: cout << "You digit is " << average << "!" << endl;
				break;

			default:
				break;
			}
			if (uwu == 4) break;
		}
	}

};