//
//  main.cpp
//  working with strings
//
//  Created by Michał Kiełkowski on 18/02/2021.
//

#include <iostream>
using namespace std;


int main(int argc, const char * argv[]) {
    // insert code here...
    string phrase = "Giraffe Academy";
    string phrasesub;
    phrasesub = phrase.substr(8, 3);
    phrase[0] = 'B';
    cout << phrase;
    cout << "" << endl;
    cout << phrase.length();
    cout << "" << endl;
    cout << phrase[2];
    cout << "" << endl;
    cout << phrase.substr(8, 3);
    cout << "" << endl;
    cout << phrasesub;

    return 0;
}
