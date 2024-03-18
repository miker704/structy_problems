// combine intervals
// Write a function, combineIntervals, that takes in a vector of intervals as an argument.
//  Each interval is a vector containing a pair of numbers representing a start and end time. 
//  Your function should combine overlapping intervals and return a vector containing the 
//  combined intervals.

// For example:

// Given two intervals:

// {1, 4} and {3, 7}

// The intervals overlap and
// should be combined into:

// {1, 7}
// You may return the combined intervals in any order.

// You can assume that the input vector contains at least one interval and all
//  intervals are valid with start < end.


const combineIntervals = (intervals) => {

    intervals = intervals.sort((a, b) => a[0] - b[0]);
    let results = [intervals[0]];

    for (let i = 1; i < intervals.length; i++) {
        let lastInterval = results[results.length - 1];
        let [lastA, lastB] = lastInterval;
        let [currentIntervalA, currentIntervalB] = intervals[i];
        if (lastB >= currentIntervalA) {
            if (currentIntervalB > lastB) {
                lastInterval[1] = currentIntervalB;
            }
        }
        else {
            results.push(intervals[i])
        }
    }
    return results;

};

let intervals = [
    [1, 4],
    [12, 15],
    [3, 7],
    [8, 13],
];
console.log(combineIntervals(intervals));
// -> [ [1, 7], [8, 15] ]
intervals = [
    [6, 8],
    [2, 9],
    [10, 12],
    [20, 24],
];
console.log(combineIntervals(intervals));
// -> [ [2, 9], [10, 12], [20, 24] ]
intervals = [
    [3, 7],
    [5, 8],
    [1, 5],
];
console.log(combineIntervals(intervals));
// -> [ [1, 8] ]
intervals = [
    [3, 7],
    [10, 13],
    [5, 8],
    [27, 31],
    [1, 5],
    [12, 16],
    [20, 22],
];
console.log(combineIntervals(intervals));
// -> [ [1, 8], [10, 16], [20, 22], [27, 31] ]
intervals = [
    [3, 7],
    [10, 13],
    [5, 8],
    [27, 31],
    [1, 5],
    [12, 16],
    [20, 32],
];
console.log(combineIntervals(intervals));
// -> [ [1, 8], [10, 16], [20, 32] ]
intervals = [
    [64, 70],
    [50, 55],
    [62, 65],
    [12, 50],
    [72, 300000],
];
console.log(combineIntervals(intervals));
// -> [ [12, 55], [62, 70], [72, 300000] ]