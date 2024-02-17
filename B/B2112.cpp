#include <cstring>
#include <iostream>

using namespace std;

char S1[20];
char S2[20];

int winner() {
    if (strcmp(S1, S2) == 0) {
        return 0;
    } else if (strcmp(S1, "Rock") == 0) {
        if (strcmp(S2, "Scissors") == 0) {
            return 1;
        } else {
            return -1;
        }
    } else if (strcmp(S1, "Scissors") == 0) {
        if (strcmp(S2, "Paper") == 0) {
            return 1;
        } else {
            return -1;
        }
    }
    // if (strcmp(S1, "Paper") == 0) {
    else {
        if (strcmp(S2, "Rock") == 0) {
            return 1;
        } else {
            return -1;
        }
    }
}

int main() {
    int N;
    cin >> N;
    while (N--) {
        cin >> S1 >> S2;
        int result = winner();
        if (result == 0) {
            cout << "Tie" << endl;
        } else if (result == 1) {
            cout << "Player1" << endl;
        } else {
            cout << "Player2" << endl;
        }
    }
}
