#include <iostream>
#include <string>
#include <limits>

int main() {
    std::string s;
    std::getline(std::cin, s);
    bool appeared[26] = {false};
    
   for (int j = 0; j < s.length(); j++) {
    char c = s[j];
    // Rest of your code


        if (std::isalpha(c)) {
            appeared[std::tolower(c) - 'a'] = true;
        }
    }
    
    char minChar = std::numeric_limits<char>::max(); 
    
    for (int i = 0; i < 26; i++) {
        if (!appeared[i]) {
            char currentChar = 'a' + i;
            if (currentChar < minChar) {
                minChar = currentChar;
            }
        }
    }
    
 
        std::cout << "Ky tu thieu nhat: " << minChar << std::endl;
    
    
    return 0;
}

