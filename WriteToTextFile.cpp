//Writing on a text file
#include <iostream>
#include <fstream>

using namespace std;

int main () {
    ofstream myfile("example.txt");

    if (myfile.is_open()) {
        myfile << "This is a line." << endl;
        myfile << "This is another line" << endl;
        myfile.close();
    }
    else {
        cout << "Unable to open file";
    }

    return 0;
}