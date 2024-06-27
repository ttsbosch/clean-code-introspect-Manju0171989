#include "StringCalculator.h"
StringCalculator::StringCalculator
{
    ExtractedIntInputData.clear();
}
bool StringCalculator::isValidInput(std::string input)
{    
     bool result = false;
     //std::vector<int> extractedData;
     ExtractedIntInputData=extractInputData(input);
     if(extractDigits.size()==0)
     {
        result=false;
     }else
     {
        result = true;
     }
     // for(const auto& item:extractedData)
     //  {
     //      if(item<0)
     //  }
        return result; 
}
std::vector<int> StringCalculator::extractDigits(std::string input)
{
        inputData.clear();
        if (!inputData.empty())
        {
            
           // Check for custom delimiter
            std::string delimiter = ",";
            std::string numbers_part = numbers;
    
            // if (numbers.substr(0, 2) == "//") {
            //     std::tie(delimiter, numbers_part) = parseCustomDelimiter(numbers);
            // }
    
            // Split numbers based on delimiter or newline
            std::regex regex("[\n" + delimiter + "]");
            std::vector<std::string> tokens(
                std::sregex_token_iterator(numbers_part.begin(), numbers_part.end(), regex, -1),
                std::sregex_token_iterator()
            );
    
            // Convert to integers            
            for (const auto& token : tokens) 
            {
                if (!token.empty()) 
                {
                    int num = std::stoi(token);
                    inputData.push_back(num);
                }
            }
        }
}
   std::pair<std::string, std::string> StringCalculator::parseCustomDelimiter(const std::string& numbers) {
        std::istringstream iss(numbers);
        std::string delimiter;
        std::getline(iss, delimiter, '\n');

        // Skip "//" prefix
        delimiter = delimiter.substr(2);

        // Rest of the string after the delimiter line
        std::string numbers_part;
        std::getline(iss, numbers_part, '\0');

        return {delimiter, numbers_part};
    }
int StringCalculator::add(std::string input)
{
    int sum=0;
     for(const auto& item:ExtractedIntInputData)
      {
          sum += item;
      }

  return sum;
}


