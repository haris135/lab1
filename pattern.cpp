#include <iostream>
#include <string>
using namespace std;
//comment added to make changes
int main() {
    string str, pattern;
    cout << "Enter the text: ";
    getline(cin, str);
    cout << "Enter the pattern: ";
    getline(cin, pattern);

    int textLen = str.size();
    int patLen = pattern.size();
    int index = -1; 

    for (int i = 0; i <= textLen - patLen; i++) {
        int j;
        for (j = 0; j < patLen; j++) {
            if (str[i + j] != pattern[j]) {
                break;
            }
        }

        if (j == patLen) { 
            index = i; 
            break;    
        }
    }

    cout << "Pattern found at index: " << index << endl;
    return 0;
}
