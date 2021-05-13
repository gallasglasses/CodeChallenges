// inputIntegerPositiveNumber.cpp

#include <iostream>
#include <ctype.h>
#include <string>
#include <sstream> 

unsigned long numericValidation(void);

int main()
{
    unsigned long yourNumber;
    std::cout << "Enter the integer positive number ('q' to terminate): ";

    yourNumber = numericValidation();
    while (yourNumber != 0)
    {
        std::cout << "Your number is " << yourNumber << std::endl;
        std::cout << "Enter the next number ('q' to terminate):\n";
        yourNumber = numericValidation();
    }

    std::cout << "\nProgram completed!\n";
    
   
    return 0;
}

unsigned long numericValidation(void)
{
    std::string userInput = "";

    int numCount = 0;
    unsigned long userConvertedNum;

    bool isIntNumber = false;
    bool isFloatNumber = false;
    bool isNegativeNumber = false;
    bool isZeroFirst = false;
    bool isZeroNumber = false;
    bool isExit = false;

    do
    {
        //std::cout << "Enter the number: ";
        std::cin >> userInput;

        if (userInput[0] == '-')
        {
            isNegativeNumber = true;
            numCount = 0;
        }
        else if (userInput[0] == '0' && isdigit(userInput[1]))
        {
            isZeroFirst = true;
            numCount = 0;
        }
        else if (userInput[0] == 'q')
        {
            isExit = true;
            numCount = 0;
        }
        else
            for (int i = 0; i < userInput.size(); i++)
            {
                if (isdigit(userInput[i]))
                {
                    numCount++;
                    isIntNumber = true;
                }
                else
                {
                    isIntNumber = false;
                    numCount = 0;
                }
                if (userInput[i] == '.')
                {
                    isFloatNumber = true;
                    numCount = 0;
                }
            }
        if (userInput[0] == '0' && numCount == 1 && isIntNumber == true)
        {
            isZeroNumber = true;
            isIntNumber = false;
            numCount = 0;
        }

        if (numCount == userInput.size() && isZeroNumber == false)
        {
            std::stringstream ssInput(userInput);
            ssInput >> userConvertedNum;
        }
        else
        {
            if (isFloatNumber == true)
                std::cout << "It's float-point number!\nEnter the integer number: ";
            else if (isNegativeNumber == true)
                std::cout << "It's negative number!\nEnter the positive number: ";
            else if (isZeroFirst == true)
                std::cout << "There the first number is zero!\nEnter the number: ";
            else if (isZeroNumber == true)
                std::cout << "It's zero!\nEnter the number: ";
            else if (isExit == true)
                break;
            else std::cout << "It's not a number!\nEnter the number (only digits without letters, symbols): ";

            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

            numCount = 0;
            isIntNumber = false;
            isFloatNumber = false;
            isNegativeNumber = false;
            isZeroFirst = false;
            isZeroNumber = false;

        }

    } while (isIntNumber == false && isExit == false);

    if (isExit == true)
        userConvertedNum = 0;

    return userConvertedNum;

}