// tribonacci
// Write a function tribonacci that takes in a number argument, n, 
//and returns the n-th number of the Tribonacci sequence.

// The 0-th and 1-st numbers of the sequence are both 0.

// The 2-nd number of the sequence is 1.

// To generate further numbers of the sequence, calculate the sum of previous three numbers.

// Solve this recursively.

const tribonacci = (n, hash = {}) => {
    if (n in hash) { return hash[n]; }
    if (n === 0 || n == 1) { return 0; }
    if (n === 2) { return 1; }
    hash[n] = tribonacci(n - 3, hash) + tribonacci(n - 2, hash) + tribonacci(n - 1, hash);
    return hash[n];
}


console.log(tribonacci(0)); // 0
console.log(tribonacci(1)); // 0
console.log(tribonacci(2)); // 1
console.log(tribonacci(5)); // 4
console.log(tribonacci(7)); // 13
console.log(tribonacci(14)); // 927
console.log(tribonacci(20)); // 35890
console.log(tribonacci(37)); // 1132436852