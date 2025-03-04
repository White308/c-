#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void sortNumbers(vector<int> &numbers) {
    vector<int> negative, positive;

    // Separate negative and positive numbers
    for (int num : numbers) {
        if (num < 0) 
            negative.push_back(num);
        else 
            positive.push_back(num);
    }

    // Sort negative numbers in ascending order
    sort(negative.begin(), negative.end());

    // Sort positive numbers in descending order
    sort(positive.rbegin(), positive.rend());

    // Merge the sorted values back into the original list
    numbers.clear();
    numbers.insert(numbers.end(), negative.begin(), negative.end());
    numbers.insert(numbers.end(), positive.begin(), positive.end());
}

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    vector<int> numbers(n);
    cout << "Enter the numbers: ";
    for (int i = 0; i < n; i++) {
        cin >> numbers[i];
    }

    sortNumbers(numbers);

    cout << "Sorted sequence: ";
    for (int num : numbers) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}


