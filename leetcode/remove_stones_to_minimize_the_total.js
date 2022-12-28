let piles = [5, 4, 9];
let k = 2
var minStoneSum = function (piles, k) {
    let min = 0;
    piles.sort(function (a, b) { return b - a });
    console.log(piles)
        for (let i = 0; i < k; i++) {
            piles[i] = Math.ceil(piles[i] / 2);


        }
    
    console.log(piles)
    for (let j = 0; j < piles.length; j++) {
        min = min + piles[j];
    }
    return min;
};
let res = minStoneSum(piles, k)
console.log(res)
