// decomposition_number_to_digits.cpp 


#include <iostream>
#include <cmath>

int main()
{
    std::cout << "Enter the digit: ";
    long long number, remainder;
    
    while (std::cin >> number)
    {
        remainder = number;
        if (remainder > 0)
        {
            int countDigits;
            int i = 0;
            do
            {
                i++;
                remainder = remainder / 10;
                countDigits = i;
            } while (remainder!=0);

            std::cout <<"Count of digits: " << countDigits << "\n";
            remainder = number;
            i = 0;
            for (int j = countDigits; j > 0; j--)
            {
                long long placeValue;
                placeValue = pow(10, j - 1);
                std::cout << ++i << " digit " << (remainder - remainder % placeValue) / placeValue << " of number " << number << "\n";
                remainder = remainder - (remainder / placeValue) * placeValue;
                std::cout.width(50);
                std::cout.right;
                std::cout << "Remainder: " << remainder << "\n";
                std::cout.width(50);
                std::cout.right;
                std::cout << "Place value: " << placeValue << std::endl;
            }
            std::cout << "Enter the next digit: ";
        }
    }
    return 0;
}
