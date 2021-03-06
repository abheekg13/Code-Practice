// wordJumble.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <iostream>
#include <ctime>
#include <string>
#include <cstdlib>

using namespace std;

int main() {

	//create the list of words and hints:
	enum fields {WORD, HINT, NUM_FIELDS};
	const int NUM_WORDS = 5;
	const string WORDS[NUM_WORDS][NUM_FIELDS] = 
	{
		{"wall", "Feel like you're banging your head agaiinst something?"},
		{"glasses","May help you see the answer"},
		{"labored","Taking your time with it"},
		{"persistant","Keep at it"},
		{"jumble","What this game is all about"}
	};

	//pick a random word from choices:
	srand(static_cast<unsigned int>(time(0)));
	int choice = (rand() % NUM_WORDS);
	string theWord = WORDS[choice][WORD];
	string theHint = WORDS[choice][HINT];

	//jumble the word:
	string jumble = theWord;
	int length = jumble.size();
	for (int i = 0; i < length; i++) {

		//generate two random indices:
		int index1 = (rand() % length);
		int index2 = (rand() % length);

		//swap them:
		char temp = jumble[index1];
		jumble[index1] = jumble[index2];
		jumble[index2] = temp;
	}

	//welcome the player:
	cout << "\t\t Welcome to Word Jumble!\n\n";
	cout << "Unscramble the letters to make a word.\n";
	cout << "Enter 'hint' for a hint.\n";
	cout << "Enter 'quit' to exit the game.\n";

	cout << "The jumble is: " << jumble;

	string guess;
	cout << "\n\n Your guess: ";
	cin >> guess;

	//game loop:
	while ((guess != theWord) && (guess != "quit")) {
		
		if (guess == "hint")
			cout << theHint;
		else
			cout << "That's not it! Guess again!";
		
		cout << "\n\n Your guess: ";
		cin >> guess;
	}

	if (guess == theWord)
		cout << "\nThat's correct! You guessed it!\n";

	cout << "\n Thanks for playing!\n";

	return 0;
}

