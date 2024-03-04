#include <algorithm>
#include <cmath>
#include <iostream>
#include <limits.h>
#include <math.h>
#include <queue>
#include <sstream>
#include <stack>
#include <string>
#include <tuple>
#include <unordered_map>
#include <unordered_set>
#include <vector>

// substituting synonyms
// Write a function, substitutingSynonyms, that takes in a sentence and an

//  unordered_map as arguments. The map contains words as keys whose values are vectors

//   containing synonyms. The function should return an array containing all possible sentences

//   that can be formed by substituting words of the sentence with their synonyms.

// You may return the possible sentences in any order, as long as you return all of them.
// std::vector<std::string> split(std::string sentence) {
// std::string join(std::vector<std::string> words) {

void printVector(std::vector<std::string>);
std::vector<std::string> split(std::string);
std::string join(std::vector<std::string>);
std::vector<std::string> substituteSynonyms(std::string, std::unordered_map<std::string, std::vector<std::string>>);
std::vector<std::vector<std::string>> _substituteSynonyms(std::vector<std::string>, std::unordered_map<std::string, std::vector<std::string>>);

std::vector<std::string> substituteSynonyms(std::string sentence, std::unordered_map<std::string, std::vector<std::string>> synonyms) {
    // todo
    std::vector<std::string> result;


    return result;
}
std::vector<std::vector<std::string>> _substituteSynonyms(std::vector<std::string> words, std::unordered_map<std::string, std::vector<std::string>> synonyms) {
    // todo


    std::vector<std::vector<std::string>> result;


    return result;
}

std::vector<std::string> split(std::string sentence) {

    std::vector<std::string> result;


    return result;
}

std::string join(std::vector<std::string> words) {
    std::string result = "";
    return result;
}

void printVector(std::vector<std::string> vec) {
    for (auto x : vec) {
        std::cout << x << " , ";
    }
    std::cout << std::endl;
}

int main() {

    std::string sentence = "follow the yellow brick road";
    std::unordered_map<std::string, std::vector<std::string>> synonyms{
        {"follow", {"chase", "pursue"}},
        {"yellow", {"gold", "amber", "lemon"}}};

    printVector(substituteSynonyms(sentence, synonyms));
    // [
    //   "chase the gold brick road",
    //   "chase the amber brick road",
    //   "chase the lemon brick road",
    //   "pursue the gold brick road",
    //   "pursue the amber brick road",
    //   "pursue the lemon brick road"
    // ]
    sentence = "I think it's gonna be a long long time";
    synonyms = {
        {"think", {"believe", "reckon"}},
        {"long", {"lengthy", "prolonged"}}};

    printVector(substituteSynonyms(sentence, synonyms));
    // [
    //   "I believe it's gonna be a lengthy lengthy time",
    //   "I believe it's gonna be a lengthy prolonged time",
    //   "I believe it's gonna be a prolonged lengthy time",
    //   "I believe it's gonna be a prolonged prolonged time",
    //   "I reckon it's gonna be a lengthy lengthy time",
    //   "I reckon it's gonna be a lengthy prolonged time",
    //   "I reckon it's gonna be a prolonged lengthy time",
    //   "I reckon it's gonna be a prolonged prolonged time"
    // ]
    sentence = "palms sweaty knees weak arms heavy";
    synonyms = {
        {"palms", {"hands", "fists"}},
        {"heavy", {"weighty", "hefty", "burdensome"}},
        {"weak", {"fragile", "feeble", "frail", "sickly"}}};

    printVector(substituteSynonyms(sentence, synonyms));
    // [
    //   "hands sweaty knees fragile arms weighty",
    //   "hands sweaty knees fragile arms hefty",
    //   "hands sweaty knees fragile arms burdensome",
    //   "hands sweaty knees feeble arms weighty",
    //   "hands sweaty knees feeble arms hefty",
    //   "hands sweaty knees feeble arms burdensome",
    //   "hands sweaty knees frail arms weighty",
    //   "hands sweaty knees frail arms hefty",
    //   "hands sweaty knees frail arms burdensome",
    //   "hands sweaty knees sickly arms weighty",
    //   "hands sweaty knees sickly arms hefty",
    //   "hands sweaty knees sickly arms burdensome",
    //   "fists sweaty knees fragile arms weighty",
    //   "fists sweaty knees fragile arms hefty",
    //   "fists sweaty knees fragile arms burdensome",
    //   "fists sweaty knees feeble arms weighty",
    //   "fists sweaty knees feeble arms hefty",
    //   "fists sweaty knees feeble arms burdensome",
    //   "fists sweaty knees frail arms weighty",
    //   "fists sweaty knees frail arms hefty",
    //   "fists sweaty knees frail arms burdensome",
    //   "fists sweaty knees sickly arms weighty",
    //   "fists sweaty knees sickly arms hefty",
    //   "fists sweaty knees sickly arms burdensome"
    // ]
    return 0;
}