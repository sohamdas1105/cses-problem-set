
#include <iostream>
#include <string>

using namespace std;

int main() {
    string sequence;
    cin >> sequence;

    int longest_repetition = 1;
    int current_repetition = 1;

    for (int i = 1; i < sequence.length(); ++i) {
        if (sequence[i] == sequence[i - 1]) {
            current_repetition++;
            longest_repetition = max(longest_repetition, current_repetition);
        } else {
            current_repetition = 1;
        }
    }

    cout << longest_repetition << endl;

    return 0;
}
