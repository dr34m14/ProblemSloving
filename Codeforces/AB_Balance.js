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

    function AB_Balance(s) {

        let Instring = s
        if (Instring.match(/ab|ba/g)) {
            let ab = Instring.match(/ab/g) || 0;
            let ab_count = ab.length || 0;
            let ba = Instring.match(/ba/g) || 0;
            let ba_count = ba.length || 0;
            if (ab_count > ba_count) {
                let Instring_get0 = Instring.replace('ab', 'bb')
                return AB_Balance(Instring_get0);
            } else if (ab_count < ba_count) {
                let Instring_get0 = Instring.replace('ba', 'bb')
                return AB_Balance(Instring_get0);
            } else {
                return Instring;
            }


        } else {
            return Instring;
        }
    }
    var n = parseInt(readline());
    for (let i = 0; i < n; i++) {
        let s = readline();
        console.log(AB_Balance(s));


    }
}