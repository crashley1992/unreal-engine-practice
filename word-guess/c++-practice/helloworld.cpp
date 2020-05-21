#include <iostream>
#include <ctime>

using namespace std;

//greeting text 
void PrintIntro() {
    cout << "Can you guess the number I'm thinking of?" << endl;
    cout << "If you guess our number correctly 3 times, you win the game." << endl;
    cout << "It's between 1 and 10" << endl;
}

//random number is produced
bool PlayGame(bool GameReady) {
    int num = rand() % 11;
    int hint1 = num * 2 - 1;
    int guess;
    
    PrintIntro();

    cout << "\nYour clue is that when you multiple the number by 2 and subtract 1 you get: \n" << hint1 << endl;
    cout << "What number are we thinking of?" << endl;
    cin >> guess;

    if (guess == num) {
        cout << "Congrats you guessed correctly" << endl;
        return false;
    } else {
        cout << "Keep trying" << endl;
        return true;
    }
}



int main()
{
    srand(time(NULL));
    bool gameStatus = true;
    int correctGuesses = 0;
    

    while (gameStatus) {
        bool gameOn = PlayGame(gameStatus);
        ++correctGuesses;
        cout << "Amount of correct guesses :" << correctGuesses << endl;

        if (correctGuesses == 3) {
            cout << "You win!!!!!!!!!!!" << endl;
            gameStatus = false;
        }
    }

    return 0;
}
