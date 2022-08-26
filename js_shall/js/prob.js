//day 6 bitwise operators in hacker rank
// let n=5;

// const { loadFont } = require("figlet");

// for(let i =1;i<n+1;i++){
//     for(let j=i+1;j<n+1;j++){
//         if(i!=j){
//             let x=i &j
//             console.log(x,"=",i,j);
//         }


//     }

// }
// let a=[2,5,10,3,9]
// a.sort((a,b)=>{return a-b})
// console.log(a)
// let s='12:40:22AM'
// let reg=/(PM)/g
// if(reg.test(s)){
//     let array=s.match(/\d+/g)



//     let hournum = parseInt(array[0]);
//     console.log(hournum)
//         if (hournum < 12) {
//             array[0] = ("0" + (hournum + 12)).slice(-2);

//             console.log(array.join(":"))
//         }
//         else {
//             console.log(array.join(":"))
//         }

//     // console.log('yes',array)
// }
// else{
//     let array=s.match(/\d+/g)

//     let hournumam = parseInt(array[0]);
//         if (hournumam == 12) {
//             array[0] = ("0" + (hournumam - 12)).slice(-2);
//             console.log(array.join(":"))
//         }
//         else {
//             console.log(array.join(":"))
//         }
// }

// let a='011';
// let b='011';
// let c=parseInt(a,2)+parseInt(b,2);
// console.log(c.toString(2));
// var a;
// console.log(undefined < 4)
// let even = 0;
// let odd = 0;
// let n_string = '';
// process.stdin.on('data', function(data) {
//     n_string += data;
// });
// let n = parseInt(n_string)
// if (n % 2 == 0) {
//     even += 1 + n / 2;
//     odd += n + 1 - even;
//     console.log(`Even Number is=${even} and Odd Number is=${odd}`);
// } else {
//     even += (n + 1) / 2;
//     odd += n + 1 - even;
//     console.log(`Even Number is=${even} and Odd Number is=${odd}`);
// }

// function main(data) {
//     let n = parseInt(data);
//     let even = 0;
//     let odd = 0;
//     for (let i = 0; i <= n; i++) {
//         if (i % 2 == 0) {
//             even += 1;
//         } else {
//             odd += 1;
//         }
//     }
//     return `Even Number is=${even} and Odd Number is=${odd}`
// }
// process.stdin.on('data', (data) => {
//     process.stdout.write(main(data));
// });




// let arr = [1, 1, 0, 1, 0, 1, 1, 1, 1, 1, 0, 0, 1, 1, 1]
// let arrstringOnly1 = arr.join('').split('0')
// console.log(arrstringOnly1.sort()[arrstringOnly1.length - 1].length);









// function divisor(n) {
//     let div_array = [];
//     let i = 1;
//     while (i <= n) {
//         if (n % i == 0) {
//             div_array.push(i)
//         }
//         i++;
//     }
//     return div_array;
// }
// let c = [] //10>
// let b = [] //10<
// let a = divisor(60)
// a.filter((e) => {
//     if (e >= 10) {
//         b.push(e)

//     } else {
//         c.push(e)
//     }
// })
// let d = []
// console.log(b);
// b.map((e) => {
//     // let oneString = String(e).split('').forEach((e) => {
//     //     let sumOfoneNum = 0;
//     //     sumOfoneNum = sumOfoneNum + parseInt(e)
//     // })
//     // d.push(oneString)
//     let oneString = String(e).split('')
//     console.log(oneString);

// })

// process.stdin.setEncoding("utf-8");
// process.stdin.on('data', (data) => {
//     process.stdout.write(String(data.split(/\s+/gm).length - 1));
//     process.stdin.pause()
// });