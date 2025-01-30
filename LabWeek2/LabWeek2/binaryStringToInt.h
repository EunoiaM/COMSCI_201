#pragma once
#ifndef BINARY_FUNCTION_TO_STRING
#define BINARY_FUNCTION_TO_STRING

#include<iostream>
#include<string>
#include<algorithm>

bool isStringBinary(std::string check)
{
    //Refrence ChatGPT
    return std::all_of(check.begin(), check.end(), [](char c) { return c == '0' || c == '1'; });
}

int binaryStringToInt(std::string binaryStr)
{
    
    
    int binaryNum, totalValue = 0, placeValue = 1, digit = 0, base = 2;

    
    if (isStringBinary(binaryStr))
    {
        binaryNum = stoi(binaryStr);
        while (binaryNum > 0)
        {
            digit = binaryNum % 10;
            totalValue = totalValue + digit * placeValue;
            placeValue *= base;
            binaryNum = binaryNum / 10;

        }
    }
    else
    {
        std::cout << "Error: Value not binary.";
    }
    return totalValue;
}


#endif // !BINARY_FUNCTION_TO_STRING


