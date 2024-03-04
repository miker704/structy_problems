// max palin subsequence
// Write a function, maxPalinSubsequence, that takes in a string as an argument.
// The function should return the length of the longest subsequence of the string
// that is also a palindrome.

// A subsequence of a string can be created by deleting any characters of the string,
//  while maintaining the relative order of characters.
#include <cmath>
#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>

int maxPalinSubsequence(std::string);
int _maxPalinSubsequence(std::string, int,int, std::unordered_map<std::string, int> &);

int maxPalinSubsequence(std::string str) {
    std::unordered_map<std::string, int> u_map;
    return _maxPalinSubsequence(str, 0, str.size()-1, u_map);
}

int _maxPalinSubsequence(std::string str, int i, int j, std::unordered_map<std::string, int> &u_map) {
   return 1;
  
}

int main() {

    std::cout << maxPalinSubsequence("luwxult") << std::endl;                                                                    // -> 5
    std::cout << maxPalinSubsequence("xyzaxxzy") << std::endl;                                                                   // -> 6
    std::cout << maxPalinSubsequence("lol") << std::endl;                                                                        // -> 3
    std::cout << maxPalinSubsequence("boabcdefop") << std::endl;                                                                 // -> 3
    std::cout << maxPalinSubsequence("z") << std::endl;                                                                          // -> 1
    std::cout << maxPalinSubsequence("chartreusepugvicefree") << std::endl;                                                      // -> 7
    std::cout << maxPalinSubsequence("qwueoiuahsdjnweuueueunasdnmnqweuzqwerty") << std::endl;                                    // -> 15
    std::cout << maxPalinSubsequence("enamelpinportlandtildecoldpressedironyflannelsemioticsedisonbulbfashionaxe") << std::endl; // -> 31
    return 0;
}