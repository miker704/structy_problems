// substituting synonyms
// Write a function, substitutingSynonyms, that takes in a sentence and an

//  unordered_map as arguments. The map contains words as keys whose values are vectors

//   containing synonyms. The function should return an array containing all possible sentences 

//   that can be formed by substituting words of the sentence with their synonyms.

// You may return the possible sentences in any order, as long as you return all of them.


const substituteSynonyms = (sentence, synonyms) => {

    let result = [];
    let words = sentence.split(" ");
    let sentences = createSentence(words, synonyms);
    for (let sent of sentences) {
        result.push(sent.join(" "));
    }
    return result;

};

const createSentence = (words, synonyms) => {
    if (words.length === 0) { return [[]]; }

    let first = words[0];
    let remainder = words.slice(1);
    let results = [];
    if (first in synonyms) {
        let suffixes = createSentence(remainder, synonyms);
        for (let synonym of synonyms[first]) {
            results.push(...suffixes.map((suff) => [synonym, ...suff]));
        }
        return results;
    }
    else {
        let suffixes = createSentence(remainder, synonyms);
        return suffixes.map((suffix) => [first, ...suffix]);
    }



}

let sentence = "follow the yellow brick road";
let synonyms = {
    follow: ["chase", "pursue"],
    yellow: ["gold", "amber", "lemon"],
};

console.log(substituteSynonyms(sentence, synonyms));
// [
//   'chase the gold brick road',
//   'chase the amber brick road',
//   'chase the lemon brick road',
//   'pursue the gold brick road',
//   'pursue the amber brick road',
//   'pursue the lemon brick road'
// ]
sentence = "I think it's gonna be a long long time";
synonyms = {
    think: ["believe", "reckon"],
    long: ["lengthy", "prolonged"],
};

console.log(substituteSynonyms(sentence, synonyms));
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
    palms: ["hands", "fists"],
    heavy: ["weighty", "hefty", "burdensome"],
    weak: ["fragile", "feeble", "frail", "sickly"],
};

console.log(substituteSynonyms(sentence, synonyms));
// [
//   'hands sweaty knees fragile arms weighty',
//   'hands sweaty knees fragile arms hefty',
//   'hands sweaty knees fragile arms burdensome',
//   'hands sweaty knees feeble arms weighty',
//   'hands sweaty knees feeble arms hefty',
//   'hands sweaty knees feeble arms burdensome',
//   'hands sweaty knees frail arms weighty',
//   'hands sweaty knees frail arms hefty',
//   'hands sweaty knees frail arms burdensome',
//   'hands sweaty knees sickly arms weighty',
//   'hands sweaty knees sickly arms hefty',
//   'hands sweaty knees sickly arms burdensome',
//   'fists sweaty knees fragile arms weighty',
//   'fists sweaty knees fragile arms hefty',
//   'fists sweaty knees fragile arms burdensome',
//   'fists sweaty knees feeble arms weighty',
//   'fists sweaty knees feeble arms hefty',
//   'fists sweaty knees feeble arms burdensome',
//   'fists sweaty knees frail arms weighty',
//   'fists sweaty knees frail arms hefty',
//   'fists sweaty knees frail arms burdensome',
//   'fists sweaty knees sickly arms weighty',
//   'fists sweaty knees sickly arms hefty',
//   'fists sweaty knees sickly arms burdensome'
// ]