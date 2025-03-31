#include <iostream>
using namespace std;

void getInfo(int &pickFrom, int &numPicks);
double computeWays(int n, int k);
double factorial(int num);

void getInfo(int &pickFrom, int &numPicks) {
    cout << "How many balls (1-12) are in the pool to pick from? ";
    cin >> pickFrom;
    while (pickFrom < 1 || pickFrom > 12) {
        cout << "Input Error!\n";
        cout << "Enter a number between 1 and 12: ";
        cin >> pickFrom;
    }

    cout << "How many balls (1-" << pickFrom << ") will be drawn? ";
    cin >> numPicks;
    while (numPicks < 1 || numPicks > pickFrom) {
        cout << "Input Error!\n";
        cout << "Enter a number between 1 and " << pickFrom << ": ";
        cin >> numPicks;
    }
}

double computeWays(int n, int k) {
    return factorial(n) / (factorial(k) * factorial(n - k));
}

double factorial(int num) {
    if (num <= 1) {
        return 1;
    } else {
        return num * factorial(num - 1);
    }
}
