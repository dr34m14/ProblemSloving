// let a = [3, 4]
// let b = [24, 48]
// let a_big_num = a.sort((a, b) => b - a)[0]
// let b_big_num = b.sort((a, b) => b - a)[0]
// let at_limite_dividor = (b_big_num < a_big_num) ? (a_big_num / b_big_num) : b_big_num / a_big_num;
// let set_Acomon_dividor = new Set()

// for (let i = 1; i <= at_limite_dividor; i++) {
//     a.forEach((e) => {
//         if (e * i >= a_big_num) {
//             set_Acomon_dividor.add(e * i)
//         }

//     })
// }
// //main working set:
// let array_of_set_A_comon_dividor = Array.from(set_Acomon_dividor);

// //upora problem
// function all_dividor_or_not(arr, num) {
//     let result = true;
//     for (let z = 0; z < arr.length; z++) {
//         if (arr[z] % num !== 0) {
//             result = false;
//         }
//     }
//     return result;
// }
// let new_b_dividor_set = new Set();

// for (let j = 0; j < array_of_set_A_comon_dividor.length; j++) {

//     if (all_dividor_or_not(b, array_of_set_A_comon_dividor[j])) {
//         new_b_dividor_set.add(array_of_set_A_comon_dividor[j])
//     }

// }
// console.log(Array.from(new_b_dividor_set));

// a.forEach((f) => {
//     all_dividor_or_not(Array.from(new_b_dividor_set), f)
// })

let a = [3, 4]
let b = [24, 48]
let n=2;
let m=2;

function gunitok(num){
// retun a arr

}
for(let i=1;i<+n;i++){
gunitok(a[i]);
}