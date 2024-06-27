#include<iostream>
#include<string>
#include<vector>

class StringCalculator
{
     std::vector<int> ExtractedIntInputData;
     bool isValidInput(std::string input);
     std::vector<int> extractDigits(std::string input);
     std::pair<std::string, std::string> parseCustomDelimiter(const std::string& numbers)
    public:
       int add(std::string input);
       StringCalculator();
};
