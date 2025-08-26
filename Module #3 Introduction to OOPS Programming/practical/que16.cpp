#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cout << "Enter a string: ";
    cin >> str;   // input string (without spaces)

    int n = str.length();
    bool isPalindrome = true;

    // Compare characters from start and end
    for(int i = 0; i < n / 2; i++) {
        if(str[i] != str[n - i - 1]) {
            isPalindrome = false;
            break;
        }
    }

    // Display result
    if(isPalindrome)
        cout << str << " is a Palindrome." << endl;
    else
        cout << str << " is NOT a Palindrome." << endl;

    return 0;
}
