// SimpleCalculator.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    char ch{};
    do
    {
        double a{}, b{};
        std::cout << "Enter the numbers to be processed: " << "\n";
        std::cin >> a >> b;

        char op{};
        std::cout << "Enter your choice of calculation: " << "\n";
        std::cin >> op;

        double result{};
        switch (op)
        {
        case '+':
            result = a + b;
            break;
        case '-':
            result = a - b;
            break;
        case '*':
            result = a * b;
            break;
        case '/':
            if (b != 0)
            {
                result = a / b;
            }
            else
            {
                std::cout << "Error: Division by zero \n";
                continue;
            }
            break;
            
        default:
            std::cout << "Please enter valid operators +,-,*,/!! \n";
            continue;

        }
        std::cout << "Result is: " << result <<"\n";

        std::cout << "Do you want to continue: Enter y/Y for YES or n/N for NO "<<"\n";
        std::cin >> ch;

    } while (ch == 'y' || ch =='Y');
    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
