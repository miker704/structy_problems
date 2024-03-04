#include <boost/array.hpp>
#include <iostream>
#include <string>

std::string greet(std::string s) {
    return "";
}

int main() {

    std::cout << greet("alvin") << std::endl;             //'hey alvin'
    std::cout << greet("jason") << std::endl;             //'hey jason'
    std::cout << greet("how now brown cow") << std::endl; //'hey how now brown cow'
}