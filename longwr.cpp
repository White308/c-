#include <iostream>
#include <sstream>
#include <string>

using namespace std;

string findLongestWord(const string &text) {
    istringstream stream(text);
    string word, longestWord;

    while (stream >> word) {
        if (word.length() > longestWord.length()) 
            longestWord = word;
    }

    return longestWord;

}

int main() {
    string text;
    cout << "Sozlem giriz: ";
    getline(cin, text);

    string longestWord = findLongestWord(text);

    if (!longestWord.empty()) {
        cout << "In uzyn soz su: " << longestWord << endl;
    } else {
        cout << "Sozlemden soz tapylmady. " << endl;
    }

    return 0;
}