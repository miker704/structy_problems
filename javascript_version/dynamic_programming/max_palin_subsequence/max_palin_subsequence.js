// max palin subsequence
// Write a function, maxPalinSubsequence, that takes in a string as an argument. 
// The function should return the length of the longest subsequence of the string 
// that is also a palindrome.

// A subsequence of a string can be created by deleting any characters of the string,
//  while maintaining the relative order of characters.


//game plan

/**
 * check word first best case the entire word is a palindrome 
 * if entire word.reverse === word return word.length
 * else if word.length-1 === idx return 0
 * funct(str,buildstr,idx,hash) 
 *  buildstr+= str[idx]
 * 
 * use a for loop 
 *  let min - infinity
 *          for let i =0; i<str.length; i++
 * buildstr+=
 *               
 * if(build)   
 *                  
 * return min
 */



// let object = new Object();
// let set = new Set();
// const maxPalinSubsequence = (str) => {
//     // let array= new Array();
//     for(let i=0; i<str.length; i++){

//     for(let j = str.length; j > i; j--){
//         // console.log(`str i = ${str[i]}, j = ${str[j]}`)


//         let subString = str.slice(i,i+j);
//         // array.push(subString);
//         set.add(subString);

//         for(let k = 1; k<subString.length; k++){
//             let subStringOfSubString = subString;
//             subStringOfSubString = subStringOfSubString.replace(subStringOfSubString[k],"");
//              maxPalinSubsequence(subStringOfSubString);
//         }

//     }        

//     }
//     // return array= array.filter((word,idx)=>{
//     //     return word === word.split("").reverse().join("");
//     // });
//     // return array;
// }


let object = new Object();
let mPSSS = new Set();
let array = new Array();

// const maxPalinSubsequence = (str,array = []) => {

//     // let array = new Array()
//     for(let i = 0; i< str.length; i++){
//         for(let j=str.length; j>i; j--){
//             let subString = str.slice(i,i+j);
//             let sS = str.substr(i,i+j);
//             console.log(`subString = ${subString}`);
//             console.log(`sS = ${sS}`);



//             array.push(subString);
//             for(let k = 1; k<subString.length;k++){
//                 let subStringOfSubString = subString;
//                 subStringOfSubString = subStringOfSubString.replace(subStringOfSubString[k],"");
//                return maxPalinSubsequence(subStringOfSubString,array);
//             }
//         }
//     }

//     // return array =array.flat(Infinity).filter((word,idx) => {
//     //     return word === word.split("").reverse().join("");
//     // });
//     return array;
// }


//iterative amd recurison method
// const maxPalinSubsequence = (str, array = []) => {

//     for (let i = 0; i < str.length; i++) {
//         for (let j = str.length; j > i; j--) {
//             let subString = str.slice(i, i + j);

//             if(!array.includes(subString)){
//                 array.push(subString);

//             }
//             for (let k = 1; k < subString.length; k++) {
//                 let sS = subString;
//                 sS = sS.replace(sS[k], "");
//                 maxPalinSubsequence(sS, array);
//             }

//         }
//     }
//     return array = array.filter((word,idx) => {
//        return word === word.split("").reverse().join("");
//     });

// }


// const maxPalinSubsequence = (str, hash = {}, maxVal = 0) => {



//     for (let i = 0; i < str.length; i++) {
//         for (let j = str.length; j > i; j--) {
//             let subString = str.slice(i, i + j);

//                 if(subString === subString.split("").reverse().join("") && subString.length > maxVal){
//                     maxVal = subString.length;
//                     hash[subString] = maxVal;
//                     // console.log(`subString = ${subString} is a palindrome with length of ${subString.length} `);

//                 }


//             for (let k = 1; k < subString.length; k++) {
//                 let sS = subString;
//                 sS = sS.replace(sS[k], "");
//                 maxVal=maxPalinSubsequence(sS, hash, maxVal);
//             }
//         }
//     }
//     return maxVal;

// }


// const maxPalinSubsequence = (str, hash = {}, i = 0, j = str.length,  maxVal = 0) => {

//     if(i > str.length ){
//         return 0;
//     }
//     if( j <i){
//         return 0;
//     }
//     let subSeq = str.slice(i,i+j);

//     if(subSeq === subSeq.split("").reverse().join("") && subSeq.length > maxVal){
//         return maxVal = subSeq.length;
//     }

//     if(subSeq in hash){return hash[subSeq];}

//     for(let k = 1; k < subSeq.length; k++){
//         let sSOSS = subSeq;
//         sSOSS=sSOSS.replace(subSeq[k],"");
//         maxVal = maxPalinSubsequence(sSOSS,hash,i+1,j-1,maxVal);
//     }

//     hash[subSeq] = subSeq.length;
//     return maxVal;
// // 

// }



// const maxPalinSubsequence = (str, maxVal = 0, hash = {}) => {
//     if (str in hash) { return hash[str]; }
//     if (str.length === 0) { return 0; }
//     if (str.length === 1) { return 1; }
//     if (str[0] === str[str.length - 1]) { return 2 + maxPalinSubsequence(str.slice(1, str.length - 1), maxVal, hash) }
//     let left = maxPalinSubsequence(str.slice(1, str.length), maxVal, hash);
//     let right = maxPalinSubsequence(str.slice(0, str.length - 1), maxVal, hash);
//     maxVal += Math.max(left, right);
//     hash[str] = maxVal;
//     return maxVal;
// }
//another way to do this problem
const maxPalinSubsequence = (str, i = 0, j = str.length - 1, hash = {}) => {
    let key = `${i}${j}`;
    if(key in hash){return hash[key];}
    if (i === j) {
        return 1;
    }
    if (i > j) { return 0; }
    if (str[i] === str[j]) {
        return 2 + maxPalinSubsequence(str, i + 1, j - 1, hash);
    }
    let takeLeft = maxPalinSubsequence(str, i + 1, j, hash);
    let takeRight = maxPalinSubsequence(str, i, j - 1, hash);
    hash[key] = Math.max(takeLeft, takeRight);
    return hash[key];
};

console.log(maxPalinSubsequence("luwxult")); // -> 5
console.log(maxPalinSubsequence("xyzaxxzy")); // -> 6
console.log(maxPalinSubsequence("lol")); // -> 3
console.log(maxPalinSubsequence("boabcdefop")); // -> 3
console.log(maxPalinSubsequence("z")); // -> 1
console.log(maxPalinSubsequence("chartreusepugvicefree")); // -> 7
console.log(maxPalinSubsequence("qwueoiuahsdjnweuueueunasdnmnqweuzqwerty")); // -> 15
console.log(maxPalinSubsequence("enamelpinportlandtildecoldpressedironyflannelsemioticsedisonbulbfashionaxe")); // -> 31