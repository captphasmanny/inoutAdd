//
//  main.cpp
//  inoutAdd
//
//  Created by Emanuel Alfaro on 11/9/23.
//

#include <iostream>

int readNumber()
{
    int x{};
    std::cout << "Please enter a number: ";
    std::cin >>x;
    
    return x;
}

void writeAnswer(int y)
{
    std::cout << y << '\n';
}

int main()
{
    int a{readNumber()};
    int b{readNumber()};
    writeAnswer(a+b);
}
