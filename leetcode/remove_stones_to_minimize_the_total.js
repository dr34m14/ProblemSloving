let piles = [4122, 9928, 3477, 9942];
let k = 6
var minStoneSum = function (piles, k) {
    let min = 0;

    if (piles[0].constructor === Array) {
        piles = piles[0];
    }
    piles.sort(function (a, b) { return b - a });
    if (piles.length > 1 && piles.length > k) {

        for (let i = 0; i < k; i++) {
            piles[i] = Math.ceil(piles[i] / 2);


        }
    } else {
        let i = 0;
        console.log(piles,k)
        while (k--&&i<=k) {
                piles[i] = Math.ceil(piles[i] / 2);


            i++;
        }
    }

    for (let j = 0; j < piles.length; j++) {
        min = min + piles[j];
    }
    return min;
};
let res = minStoneSum(piles, k)
console.log(res)
