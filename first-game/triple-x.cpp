//preprocessor directive
#include <iostream>

using namespace std;
// using namespace rand;

void PrintIntroduction(int Difficulty) {
    //greeting for user to see what the purpose of the game is
    cout << "\nWelcome to Riddle Me This.\n";
    cout << "Use the clues provided to figure out the code combinations\n";
    cout << "Your current level is : " <<  Difficulty << endl; 
    cout << "To advance to the next round you will need to guess the correct numbers to the code\n";
}

bool PlayGame(int Difficulty)
{
    PrintIntroduction(Difficulty);
    //declaration variables for code values, used CamelCase as per Unreal Documentation
    const int CodeA = rand() % Difficulty + 1;
    const int CodeB = rand() % Difficulty + 1;
    const int CodeC = rand() % Difficulty + 1;

    const int CodeSum = CodeA + CodeB + CodeC;
    const int CodeProduct = CodeA * CodeB * CodeC;

    //Product and sum print to the terminal
    cout << "There are 3 numbers in the code\n";
    cout << "The code add up to: " << CodeSum << endl;
    cout << "The codes multiple to give: " << CodeProduct << endl;

    //takes user input for guess
    int GuessA, GuessB, GuessC;

    //store play's guess
    cout << "Enter 3 numbers when you have an answer.\n";
    cin >> GuessA >> GuessB >> GuessC;

    int GuessSum = GuessA + GuessB + GuessC;
    int GuessProduct = GuessA * GuessB * GuessC;

   //Check ig play guess is correct
    if (GuessSum == CodeSum && GuessProduct == CodeProduct) {
        cout << "Correct Guess!\n";
        return true;
    } else {
        cout << "Keep Guessing friend\n";
        cout << "Still on level: " << Difficulty << endl;
        return false;
    }
}

int main() 
{
    int LevelDifficulty = 1;
    const int MaxDifficulty = 5;

    while (LevelDifficulty <= MaxDifficulty) //loops game until all levels are completed
    {
        bool bLevelComplete = PlayGame(LevelDifficulty);
        cin.clear(); //clears any errors
        cin.ignore(); //discards the buffer

        if (bLevelComplete)
        {
            //increase level difficulty
            ++LevelDifficulty;
            cout << "Your new level is: " << LevelDifficulty << endl;
            if (LevelDifficulty == MaxDifficulty) 
            {
                cout << "Congrats! You Win!!!!" << endl;
                return false;
            }
        }
        
     }

    return 0;
}