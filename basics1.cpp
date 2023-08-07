#include <iostream>

using namespace std;

int main(){
    cout << "Hello World" << endl;
    int x = 12345;
    cout << x * x * x * x * x * x * x<< endl; // the resulting computation is larger than what can be stored in an integer type
    char y = 'y';
    cout << "This is a string: " << y << endl;
    string z = "This is a string var";
    cout << "String var z = " << z << endl;
    bool l = true;
    cout << "this is an example of a bool var: l = " << l << endl;
    return 0;
}