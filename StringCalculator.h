#include<iostream>
#include<string>
#include<vector>

class StringCalculator
{
     bool validateInput(std::string input);
     void extractInputData(std::string input,std::vector<int>&inputData);
    public:
       int add(std::string input);
};
