// Place_value.cpp 

#include <iostream>

int main()
{
    std::cout << "Enter the digit: ";
    long long number, n;
    void placeValue(int x);
    while (std::cin >> number)
    {
        n = number;
        if (n > 0)
        {
            int zeroEnd = 0;
            while (n % 10 == 0)
            {
                placeValue(zeroEnd);
                std::cout << "digit 0 of number " << number << std::endl;
                zeroEnd++;
                n = n / 10;
            }

            for (int i = zeroEnd; n > 0; i++)
            {
                
                placeValue(i);
               
                short current_digit_number;
                current_digit_number = n % 10;
                std::cout << "digit " << current_digit_number << " of number " << number << std::endl;

                n = n / 10;

            }
            std::cout << "Enter the next digit: ";
        }
    }
    return 0;
}

void placeValue(int x)
{
     switch (x)
                {
                case 0:
                    std::cout << "Ones: ";
                    break;
                case 1:
                    std::cout << "Tens: ";
                    break;
                case 2:
                    std::cout << "Hundreds: ";
                    break;
                case 3:
                    std::cout << "Thousands: ";
                    break;
                case 4:
                    std::cout << "Ten Thousands: ";
                    break;
                case 5:
                    std::cout << "Hundred Thousands: ";
                    break;
                case 6:
                    std::cout << "Millions: ";
                    break;
                case 7:
                    std::cout << "Ten Millions: ";
                    break;
                case 8:
                    std::cout << "Hundred Millions: ";
                    break;
                case 9:
                    std::cout << "Billions: ";
                    break;
                case 10:
                    std::cout << "Ten Billions: ";
                    break;
                case 11:
                    std::cout << "Hundred Billions: ";
                    break;
                case 12:
                    std::cout << "Trillions: ";
                    break;
                case 13:
                    std::cout << "Ten Trillions: ";
                    break;
                case 14:
                    std::cout << "Hundred Trillions: ";
                    break;
                case 15:
                    std::cout << "Quadrillions: ";
                    break;
                case 16:
                    std::cout << "Ten Quadrillions: ";
                    break;
                case 17:
                    std::cout << "Hundred Quadrillions: ";
                    break;
                case 18:
                    std::cout << "Quintillions: ";
                    break;
                case 19:
                    std::cout << "Ten Quintillions: ";
                    break;
                case 20:
                    std::cout << "Hundred Quintillions: ";
                    break;
                case 21:
                    std::cout << "Sextillions: ";
                    break;
                case 22:
                    std::cout << "Ten Sextillions: ";
                    break;
                case 23:
                    std::cout << "Hundred Sextillions: ";
                    break;
                case 24:
                    std::cout << "Septillions: ";
                    break;
                case 25:
                    std::cout << "Ten Sextillions: ";
                    break;
                case 26:
                    std::cout << "Hundred Sextillions: ";
                    break;
                default:
                    std::cout << "smth: ";
                    break;
                }
}
