//
//  main.cpp
//  C++ course
//
//  Created by Michał Kiełkowski on 18/02/2021.
//
#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    
    string characterName = "John";
    int characterAge = 35;
    
    cout << "There once was a man named " << characterName << endl;
    cout << "He was "<< characterAge << " years old" << endl;
    
    characterName = "Mike";
    cout << "He liked the name " << characterName << endl;
    cout << "But he did not like being " << characterAge << endl;
    return 0;
}
