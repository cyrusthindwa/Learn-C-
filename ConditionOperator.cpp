#include <iostream>

using namespace std;

int main() {
    //Local variable declaration:
    int x, y = 10;

    x = (y == 10) ? 30 : 40; // value of x will be 100 because y is 10
    cout << "Value of x is : " << x << endl;

    return 0;
}