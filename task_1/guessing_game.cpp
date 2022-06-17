#include <iostream>
#include <map>
#include <random>

int main()
{
    std::random_device rd;
    std::map<int, int> hist;
    std::uniform_int_distribution<int> dist(0, 99);

    int guess = 0;

    std::cout << "Number Guessing Game\n\n";
    while (dist(rd) != guess)
    {
        std::cout << "Enter number between 0 and 99\n";
        std::cin >> guess;
        if (std::cin.fail())
        {
            std::cout << "Please Enter Number between 0 and 99\n";
        }
        else if (guess >= dist.max() || guess < dist.min())
        {
            std::cerr << "[WARNING] : Number must be between 0 and 99" << std::endl;
        }
        else if (guess > dist(rd))
        {
            std::cout << ">Your number is bigger than guess number\n";
        }
        else if (guess < dist(rd))
        {
            std::cout << "Your number is smaller than guess number\n";
        }
        else
        {
            std::cout << "Correct you won the number is: " << guess << std::endl;
            break;
        }
    }
    return 0;
}