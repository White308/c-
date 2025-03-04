#include <iostream>

using namespace std;

string findDayOfWeek(int month, int day) {
    int year = 2009;

    if (month <3) {
        month += 12;
        year -= 1;
    }

    int K = year % 100; 
    int J = year / 100;

    int h = (day + 13 * (month + 1) / 5 + K + (K/4) + (J / 4) + (5 * J)) % 7;


    string days[] = {"Saturday","Sunday","Monday","Tuesday","Wednesday","Thursday","Friday"};

    return days[h];

}

int main() {
    int month, day;
    cout << "Enter month and day";
    cin >> month >> day;

    string result = findDayOfWeek(month, day);
    cout << "Berlen gun su gune dusyar: " << result << endl;

    return 0;
}
