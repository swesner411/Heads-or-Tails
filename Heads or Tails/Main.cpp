#include <iostream>
using namespace std;

int gameloop() {
	int guess;
	cout << "Enter your prediction: (0) Quit (1) Heads (2) Tails.\n";
	cin >> guess;
	cout << "\n";
	if (guess != 1 && guess != 2 && guess != 0) { cout << "Error! Invalid entry. Please try again."; return gameloop(); }
	if (guess == 0) { return 0; }
	int coin = (rand() % 2) + 1;
	if (coin == 1) { cout << "Heads!\n"; }
	else if (coin == 2) { cout << "Tails!\n"; }
	if (coin == guess) { cout << "You win!\n"; }
	else { cout << "You lose!\n"; }
	cout << "\n";
	return gameloop();
}

int main() {
	gameloop();
}