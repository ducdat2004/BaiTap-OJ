#include <iostream>
#include <string>
#include <sstream>

int countValidWords(const std::string& input) {
    std::istringstream iss(input);
    std::string word;
    int maxWordCount = 0;

    while (iss >> word) {
        int wordCount = 0;
        for (char c : word) {
            if (std::isalpha(c) || std::isdigit(c)) {
                wordCount++;
            }
        }
        if (wordCount > maxWordCount) {
            maxWordCount = wordCount;
        }
    }

    return maxWordCount;
}

int main() {
    std::string input;
    std::cout << "Nhập xâu ký tự: ";
    std::getline(std::cin, input);

    int maxWordCount = countValidWords(input);

    std::cout << "Số từ dài nhất chỉ gồm chữ cái hoặc số: " << maxWordCount << std::endl;

    return 0;
}
