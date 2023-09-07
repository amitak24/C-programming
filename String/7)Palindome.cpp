/* Write a C++ program to check if a given string is a Palindrome or not*/

#include <iostream>
#include <string>
#include <algorithm>

bool isPalindrome(const std::string& str) {
    std::string reversed = str;
    std::reverse(reversed.begin(), reversed.end());

    if (str == reversed) {
        return true;
    }
    else {
        return false;
    }
}

int main() {
    std::string str;

    std::cout << "Enter a string: ";
    std::getline(std::cin, str);

    if (isPalindrome(str)) {
        std::cout << "The string is a palindrome\n";
    }
    else {
        std::cout << "The string is not a palindrome\n";
    }

    return 0;
}