#include <iostream>

using namespace std;
int main()
{
    // you have to declare vars and types in c++
    int x = 25;

    string y = "hello";
    string z = "world";
    
    cout << y << z << endl;

    cout << x << endl;
    x+=1;
    cout << x << endl;


    float a = 5.51;
    int b = static_cast<int>(a);
    std::cout << b;



    return 0;
} // namespace std;
