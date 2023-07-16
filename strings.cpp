#include <iostream>

using namespace std;

int main(){
    string text1 = "Hello";
    string text2 = "Fred";

    // string concatenantion
    string text3 = text1 + ' ' + text2; // add empty string '' to add a space
    cout << text3;
//
// getting user input with cin
    string input;
    cout <<  "Please enter a number: " << endl;
    cin >> input;
    cout << "You entered: " << input << endl;

// more user info 
    string name;
    cout << "Please give me your name " ;
    cin >> input; 
    cout << "Hello " + input;
}