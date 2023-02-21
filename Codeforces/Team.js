"use strict";
process.stdin.resume();
process.stdin.setEncoding("utf-8");

let inputString = "";
let currentLine = 0;

process.stdin.on("data", (inputStdin) => {
    inputString += inputStdin;
});

process.stdin.on('end', _ => {
    inputString = inputString.trim().split('\n').map(string => {
        return string.trim();
    });

    main();
});

function readline() {
    return inputString[currentLine++];
}

function main() {
    let n = parseInt(readline());
    let main_array = [];
    let result = 0;
    for (let i = 0; i < n; i++) {
        let given_problem = readline().split(' ').map(e => parseInt(e)).sort((a, b) => b - a)
        main_array.push(given_problem)
    }
    main_array.forEach((a1) => {
        if (a1[0] === 1 && a1[1] === 1) {
            result++;
        }
    })
    console.log(result);
}