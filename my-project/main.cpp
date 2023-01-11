#include <iostream>
#include "Core.h"

int main()
{
    auto markdown = new Markdown{
        true
    };

    auto text = markdown->published ? "True" : "False";

    std::cout << "Hello World!\n";
    std::cout << text;
}