#include <iostream>
#include <vector>

int main()
{
    std::vector<int> vec{10, 9, 8, 7, 6};
    for (int i : vec)
    {
        std::cout << "i is " << i << '\n';
    }
    return 0;
}