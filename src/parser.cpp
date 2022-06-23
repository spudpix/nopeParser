#include <iostream>
#include <regex>
#include <string>

int main() {    
    std::string str("Hello Regex, this is a test string");

    // Whitespace Regex catch
    std::regex wsReg("\\s+");

    std::sregex_token_iterator iter(str.begin(),str.end(),wsReg, -1);
    std::sregex_token_iterator end; // dummy iterator for vector below

    std::vector<std::string> vec(iter, end);

    for (auto a : vec)
    {
        std::cout << a << std::endl;
    }
}
