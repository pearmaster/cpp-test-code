
#include "s.h"
#include <iostream>

int main(int argc, char ** argv) {

    mystruct foo = {1, 2, "hello world"};

    std::cout << foo.z << std::endl;
    return 0;

}