//
// Created by Admn on 22/05/2018.
//

#include "fizzbuzz.h"

void fizzbuzz(int i)
{
    if (i % 3 == 0)
    {
        std::cout << "fizz\n";
    }
    else if (i % 5 == 0)
    {
        std::cout << "buzz\n";
    }
    else if ((i % 3 == 0) && (i % 5 == 0))
    {
        std::cout << "fizzbuzz\n";
    }
    else
    {
        std::cout << "not fizzy or buzzy\n";
    }
}