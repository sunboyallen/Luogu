#include <iostream>

using namespace std;

int main() {
    double x;
    cin >> x;
    double bike = 27.0 + 23.0 + x / 3.0;
    double walk = x / 1.2;
    if (bike < walk) {
        cout << "Bike";
    } else if (bike > walk) {
        cout << "Walk";
    } else {
        cout << "All";
    }
}
