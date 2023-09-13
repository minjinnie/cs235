#include <iostream>
#include <string>
using namespace std;

int main(int argc, char const*argv[]) {
    if (argc != 4) {
        cout << "You forgot to write three integer" << endl;
        return 1;
    }

    int start = stoi(argv[1]);
    int end = stoi(argv[2]);
    int divisor = stoi(argv[3]);

    if (start <= end) {
        for (int i = start; i <= end; i++) {
            if (i % divisor == 0) {
                cout << i << endl;
            }
        }
    } else {
        for (int i = start; i >= end; i--) {
            if (i % divisor == 0) {
                cout << i << endl;
            }
        }
    }
    return 0;
}
