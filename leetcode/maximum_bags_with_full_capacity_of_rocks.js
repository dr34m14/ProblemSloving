/**
 * @param {number[]} capacity
 * @param {number[]} rocks
 * @param {number} additionalRocks
 * @return {number}
 */

let capacity = [2, 3, 4, 5]
let rocks = [1, 2, 4, 4]
let additionalRocks = 2




var maximumBags = function (capacity, rocks, additionalRocks) {
    let have_rock = additionalRocks;
    let max = 0;
    let last_arr = []


    for (let j = 0; j < capacity.length; j++) {

        if (have_rock != 0) {

            if (capacity[j] > rocks[j] && capacity[j] != rocks[j]) {
                let def = capacity[j] - rocks[j];
                have_rock = have_rock - def;
                last_arr.push(def + rocks[j]);
            } else {
                last_arr.push(rocks[j])
            }
        }
        else{
            last_arr.push(rocks[j])

        }
    }

    console.log(last_arr)
    for (let i = 0; i < last_arr.length; i++) {
        if (capacity[i] == last_arr[i]) {
            max++;
        }
    }
    return max;
};


let res = maximumBags(capacity, rocks, additionalRocks)
console.log(res)