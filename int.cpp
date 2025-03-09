#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void sortNumbers(vector<int> &numbers) {
    vector<int> negative, positive;

    for (int num : numbers) {
        if (num < 0) 
            negative.push_back(num);
        else 
            positive.push_back(num);
    }

    sort(negative.begin(), negative.end());

    sort(positive.rbegin(), positive.rend());

    numbers.clear();
    numbers.insert(numbers.end(), negative.begin(), negative.end());
    numbers.insert(numbers.end(), positive.begin(), positive.end());
}

int main() {
    int n;
    cout << "Sanlaryn elementini giriz: ";
    cin >> n;

    vector<int> numbers(n);
    cout << "Sanlary giriz: ";
    for (int i = 0; i < n; i++) {
        cin >> numbers[i];
    }

    sortNumbers(numbers);

    cout << "kiciden ula: ";
    for (int num : numbers) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}


