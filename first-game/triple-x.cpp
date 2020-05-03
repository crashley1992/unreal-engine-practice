//preprocessor directive
#include <iostream>

using namespace std;

void PlayGame()
{
    //greeting for user to see what the purpose of the game is
    cout << "Welcome to Riddle Me This.\n";
    cout << "Use the clues provided to figure out the code combinations\n";
    cout << "To advance to the next round you will need to guy the correct numbers to the code\n";

    //declaration variables for code values, used CamelCase as per Unreal Documentation
    const int CodeA = 4;
    const int CodeB = 3;
    const int CodeC = 2;

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
        cout << "You win";
    } else {
        cout << "Keep Guessing friend";
    }
}

int main() 

{
    PlayGame();
    return 0;
}