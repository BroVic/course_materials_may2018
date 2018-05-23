#include <iostream>
#include <string>

std::string say_hello(std::string name)
{
    return "Hello " + name;
}

int main() {
   std::string me = "Victor";
   std::string msg = say_hello(me);

   std::cout << msg << '\n';
   std::cout << "The value of 'me' is now " << me << '\n';
   return 0;
}