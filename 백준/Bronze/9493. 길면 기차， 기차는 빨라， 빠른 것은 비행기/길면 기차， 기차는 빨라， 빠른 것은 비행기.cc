#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    int M, A, B;

    while (true) {
        cin >> M >> A >> B;
        if (M == 0 && A == 0 && B == 0) break;

        double A_hour = (double)M / A;
        double B_hour = (double)M / B;

        int diff = round((A_hour - B_hour) * 3600);

        int hours = diff / 3600;
        int minutes = (diff % 3600) / 60;
        int seconds = (diff % 3600) % 60;

        cout << hours << ":"
            << setw(2) << setfill('0') << minutes << ":"
            << setw(2) << setfill('0') << seconds << "\n";
    }
}