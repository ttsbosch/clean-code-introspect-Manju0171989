#include<iostream>
#include<string>
#include<vector>

class StringCalculator
{
     std::vector<int> ExtractedIntInputData;
     bool validateInput(std::string input);
     std::vector<int> StringCalculator::extractDigits(std::string input);
    public:
       int add(std::string input);
};
