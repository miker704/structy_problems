// is prime
// Write a function, isPrime, that takes in a number as an argument. The function should
//  return a boolean indicating whether or not the given number is prime.

// A prime number is a number that is only divisible by two distinct 
// numbers: 1 and itself.

// For example, 7 is a prime because it is only divisible by 1 and 7. For example, 
// 6 is not a prime because it is divisible by 1, 2, 3, and 6.

// You can assume that the input number is a positive integer.

const isPrime = (n) => {
    if (n < 2) {
        return false;
    }
    for (let i = 2; i < n; i++) {
        if (n % i === 0) { return false; }
    }
    return true;
}

console.log(isPrime(2)); //true
console.log(isPrime(3)); //trues
console.log(isPrime(4)); //false
console.log(isPrime(5)); // true
console.log(isPrime(6)); // false
console.log(isPrime(7)); // true
console.log(isPrime(8)); // false
console.log(isPrime(25)); //false
console.log(isPrime(31)); // true
console.log(isPrime(2017)); //true 
console.log(isPrime(2048)); //false
console.log(isPrime(1)); // false
console.log(isPrime(713)); //false
