
// knightly number
// A knight is on a chess board. Can you figure out the total number of ways the knight can move to a
//  target position in exactly m moves?
//  On a single move, the knight can move in an "L" shape; two spaces in any direction, 
// then one space in a perpendicular direction. This means that on a single move, a knight has eight possible positions it can move to.

// Write a function, knightlyNumber, that takes in 6 arguments:

// n, m, kr, kc, pr, pc

// n = the length of the chess board
// m = the number of moves that must be used
// kr = the starting row of the knight
// kc = the starting column of the knight
// pr = the target row
// pc = the target column
// The function should return the number of different ways the 
// knight can move to the target in exactly m moves. The knight can revisit 
// positions of the board if needed. The knight cannot move out-of-bounds of the board. 
// You can assume that rows and columns are 0-indexed. This means that if n = 8, there are 8 rows and 8 columns numbered 0 to 7.

const knightlyNumber = (n, m, kr, kc, pr, pc) => {
    // todo
    return _knightlyNumber(n, m, kr, kc, pr, pc, {});
};

// const _knightlyNumber = (n, m, kr, kc, pr, pc, hash) => {
//     let key = `${kr},${kc},${m}`;
//     if (key in hash) { return hash[key]; }
//     if (m === 0) {
//         if (kr === pr && kc === pc) {
//             return 1;
//         }
//         else{
//             return 0;
//         }
//     }
//     if (!isBoardBound(n, kr, kc)) { return 0; }
//     let validMoves = knightMovement(n, kr, kc);
//     let numOfMoves = 0;
//     for (let move of validMoves) {
//         let [newKr, newKc] = move;
//         numOfMoves += _knightlyNumber(n, m - 1, newKr, newKc, pr, pc, hash);
//     }
//     hash[key] = numOfMoves;
//     return hash[key];
// };

// const isBoardBound = (n, kr, kc) => {
//     let rBound = 0 <= kr && kr < n;
//     let cBound = 0 <= kc && kc < n;
//     return rBound && cBound;
// }

// const knightMovement = (n, kr, kc) => {
//     let horseyMoves = [
//         [kr + -2, kc + 1],
//         [kr + -2, kc + -1],
//         [kr + 2, kc + 1],
//         [kr + 2, kc + -1],
//         [kr + -1, kc + 2],
//         [kr + 1, kc + 2],
//         [kr + -1, kc + -2],
//         [kr + 1, kc + -2]
//     ]
//     let validMoves = [];

//     for (let move of horseyMoves) {
//         let [row, col] = move;
//         if (isBoardBound(n, row, col)) {
//             validMoves.push(move);
//         }
//     }

//     return validMoves;
// }

//we can rewrite the above code to this same performance of o(m^8) even with memoization that 
// fact we can move 8 different ways per move for each move means 8  branches are create again
// per move which is unavoidable.
const _knightlyNumber = (n, m, kr, kc, pr, pc, hash) => {
    let pos = `${m},${kr},${kc}`;
    if (pos in hash) {
        return hash[pos];
    }

    if (kr < 0 || kr >= n || kc < 0 || kc >= n) {
        return 0;
    }

    if (m === 0) {
        if (kr === pr && kc === pc) {
            return 1;
        }
        else {
            return 0;
        }
    }
    let count = 0;
    let horseyMoves = [
        [kr + -2, kc + 1],
        [kr + -2, kc + -1],
        [kr + 2, kc + 1],
        [kr + 2, kc + -1],
        [kr + -1, kc + 2],
        [kr + 1, kc + 2],
        [kr + -1, kc + -2],
        [kr + 1, kc + -2]
    ]
    for (let move of horseyMoves) {
        let [row, col] = move;

        count += _knightlyNumber(n, m - 1, row, col, pr, pc, hash);
    }
    hash[pos] = count;
    return hash[pos];

};

console.log(knightlyNumber(8, 2, 4, 4, 5, 5)); // -> 2
console.log(knightlyNumber(8, 2, 7, 1, 7, 1)); // -> 3
console.log(knightlyNumber(8, 2, 5, 4, 5, 4)); // -> 8
console.log(knightlyNumber(8, 3, 5, 2, 4, 4)); // -> 21
console.log(knightlyNumber(20, 6, 18, 7, 10, 15)); // -> 60
console.log(knightlyNumber(20, 12, 8, 3, 9, 14)); // -> 98410127
console.log(knightlyNumber(8, 2, 0, 0, 1, 1)); // -> 0