let n = 2;
let k = 1;



if (n % 2 !== 0) {
    //bijor
    if (k < (n + 1) / 2 - 1) {
        console.log(2 * (k + 1) - 1);
    } else {
        console.log(2 * (n - k - 1));
    }

} else {
    //jor
    if (k <= (n / 2) - 1) {
        console.log(2 * (k + 1) - 1);
    } else {
        console.log(2 * (n - k - 1));
    }
}