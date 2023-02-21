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

function print(x) {
    console.log(x);
}


function main() {
    var number_of_int = parseInt(readline());

    for (let i = 0; i < number_of_int; i++) {
        var word = readline()
        const input_len = word.length;
        if (input_len <= 10) {
            print(word)
        } else {
            print(`${word[0]}${input_len-2}${word[input_len-1]}`)
        }
    }





}