#include <iostream>

using namespace std;

int main() {
    const int LENGTH = 10;
    const int WIDTH = 5;
    const char NEWLINE = '\n';
    int area;

    // LENGTH = 20; // This will cause a compilation error because LENGTH is a constant

    area = LENGTH * WIDTH;
    cout << area;
    cout << NEWLINE;
    return 0;
}