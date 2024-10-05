#include <iostream>
#include <unordered_map>
#include <string>
#include<bits/stdc++.h>
using namespace std;

int countVibgyorOccurrences(const string& str) {
    string requiredChars = "VIBGYOR";
    unordered_map<char, int> charCount;

    for (char c : str) {
        if (requiredChars.find(c) != string::npos) {
            charCount[c]++;
        }
    }

    for (char c : requiredChars) {
        if (charCount[c] == 0) {
            return 0;
        }
    }
    int maxCount = INT_MAX;  
    for (char c : requiredChars) {
        maxCount = min(maxCount, charCount[c]);
    }

    return maxCount;
}

int main() {
    string inputString;
    cin >> inputString;

    int result = countVibgyorOccurrences(inputString);
    cout << result << endl;

return 0;
}
