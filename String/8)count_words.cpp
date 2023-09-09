/*Write a C++ program to count all the words in a given string. Words must 
be separated by only one space*/

#include <iostream>
#include <string>
#include <sstream>

int countWords(const std::string& str) {
    std::istringstream iss(str);
    std::string word;
    int count = 0;

    while (iss >> word) {
        count++;
    }

    return count;
}

int main() {
    std::string str;

    std::cout << "Enter a string: ";
    std::getline(std::cin, str);

    int wordCount = countWords(str);

    std::cout << "Number of words: " << wordCount << std::endl;

    return 0;
}