let piles = [1];
let k = 100000
var minStoneSum = function (piles, k) {
    let min = 0;
    piles.sort(function (a, b) { return b - a });
    if (piles[0]!= 1 ) {

        for (let i = 0; i < k; i++) {
            piles[i] = Math.ceil(piles[i] / 2);


        }
    }

    for (let j = 0; j < piles.length; j++) {
        min = min + piles[j];
    }
    return min;
};
let res = minStoneSum(piles, k)
console.log(res)
