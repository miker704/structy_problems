// knight attack
// A knight and a pawn are on a chess board. Can you figure out the minimum number of moves required for the
//  knight to travel to the same position of the pawn? On a single move, the knight can move in an "L" shape; 
//  two spaces in any direction, then one space in a
//  perpendicular direction. This means that on a single move, a knight has eight possible positions it can move to.
// https://structy-static.s3.amazonaws.com/knight-movement.png
// Write a function, knightAttack, that takes in 5 arguments:

// n, kr, kc, pr, pc

// n = the length of the chess board
// kr = the starting row of the knight
// kc = the starting column of the knight
// pr = the row of the pawn
// pc = the column of the pawn
// The function should return an int representing the minimum number of moves required for
//  the knight to land ontop of the pawn. The knight cannot move out-of-bounds of the board.
//   You can assume that rows and columns are 0-indexed. This means that if n = 8, 
//   there are 8 rows and 8 columns numbered 0 to 7. If it is not possible for the knight to attack the pawn,
//    then return -1.


// const knightAttack = (n, kr, kc, pr, pc) => {
//     let chessBoard = buildBoard(n, kr, kc, pr, pc);
//     // console.table(chessBoard);
//     let validHorseyMoves = [
//         [-2, 1], [-2, -1], [2, 1], [2, -1], [-1, 2], [1, 2], [-1, -2], [1, -2]
//     ];
//     // validX = [-2, -2, 2, 2, -1, 1 - 1, 1];
//     // validY = [1, -1, 1, -1, 2, 2, -2, -2];

//     let queue = [[kr, kc, 0]];
//     let visited = new Set();
//     visited.add(kr + "," + kc);
//     while (queue.length !== 0) {
//         let [kR, kC, numOfMoves] = queue.shift();
//         if (chessBoard[kR][kC] == 'P') {
//             return numOfMoves;
//         }
//         for (let validMove of validHorseyMoves) {
//             let [moveRow, moveCol] = validMove;
//             let nextRow = kR + moveRow;
//             let nextCol = kC + moveCol;
//             let newPos = `${nextRow},${nextCol}`;
//             if (isBoardBound(chessBoard, nextRow, nextCol) && !visited.has(newPos)) {
//                 visited.add(newPos);
//                 queue.push([nextRow, nextCol, numOfMoves + 1]);
//             }
//         }
//     }

//     return -1;
// };

// const buildBoard = (n, kr, kc, pr, pc) => {
//     let chessBoard = Array(n).fill(null).map(() => Array(n).fill("X"));
//     chessBoard[pr][pc] = "P";
//     chessBoard[kr][kc] = "H";
//     return chessBoard;
// }

// const isBoardBound = (board, row, col) => {
//     let rBound = 0 <= row && row < board.length;
//     let cBound = 0 <= col && col < board[0].length;
//     return rBound && cBound;
// }


// const moveHorsey = (board, row, col) => {

// }

//optimized method

const knightAttack = (n, kr, kc, pr, pc) => {

    let queue = [[kr, kc, 0]];
    let visited = new Set();
    while (queue.length !== 0) {
        let [currX, currY, numMoves] = queue.shift();
        let currPos = `${currX},${currY}`;
        if (currX === pr && currY === pc) {
            return numMoves;
        }
        let currentMoveSet = getHorseyMoves(n, currX, currY);
        for (let move of currentMoveSet) {
            let [nextX, nextY] = move;
            let newPos = `${nextX},${nextY}`;
            if (!visited.has(newPos)) {
                queue.push([nextX, nextY, numMoves + 1]);
                visited.add(newPos);
            }
        }
    }
    return -1;
}

const getHorseyMoves = (n, kr, kc) => {
    let horseMoveSet = [
        [kr + -2, kc + 1], [kr + -2, kc + -1], [kr + 2, kc + 1], [kr + 2, kc + -1], [kr + -1, kc + 2], [kr + 1, kc + 2], [kr + -1, kc + -2], [kr + 1, kc + -2]
    ];
    let validHorseyMoves = [];
    for (let move of horseMoveSet) {
        let [movX, movY] = move;
        let rBound = 0 <= movX && movX < n;
        let cBound = 0 <= movY && movY < n;
        if (rBound && cBound) { validHorseyMoves.push(move); }
    }

    return validHorseyMoves;
}



console.log(knightAttack(8, 1, 1, 2, 2)); // -> 2
console.log(knightAttack(8, 1, 1, 2, 3)); // -> 1
console.log(knightAttack(8, 0, 3, 4, 2)); // -> 3
console.log(knightAttack(8, 0, 3, 5, 2)); // -> 4
console.log(knightAttack(24, 4, 7, 19, 20)); // -> 10
console.log(knightAttack(100, 21, 10, 0, 0)); // -> 11
console.log(knightAttack(3, 0, 0, 1, 2)); // -> 1
console.log(knightAttack(3, 0, 0, 1, 1)); // -> null
