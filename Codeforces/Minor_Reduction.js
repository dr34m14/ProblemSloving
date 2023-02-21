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
    var number_of_int = parseInt(readline());

    for (let j = 0; j < number_of_int; j++) {
        let x = readline();
        let main_number = 0;

        for (let i = 0; i < x.length - 1; i++) {
        
            let get_2_digSum = +(x[i]) + +(x[i + 1]);
            let arr = x.split('');
            arr[i] = '';
            arr[i + 1] = get_2_digSum;
            let NUM_newSt = BigInt(arr.join(''));
            if (NUM_newSt > main_number) {
                main_number = NUM_newSt;
            }
        
        }
        
        console.log(String(main_number));
        

    }


}