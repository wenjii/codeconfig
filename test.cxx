#include "test.h"

Test::Test()
{
    std::cout << "start" << std::endl;
}

Test::~Test()
{
    std::cout << "end" << std::endl;
}

void Test::hello()
{
    std::cout << "hello world!" << std::endl;
}