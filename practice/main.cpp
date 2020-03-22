#include <iostream>

using namespace std;

int main()
{
    string phrase = "Intro to C++";
    string phraseSub;
    //first param grabs position, second says how many characters to grab, whitespace is included
    phraseSub = phrase.substr(8, 4);
    cout << phraseSub;

    return 0;
}
