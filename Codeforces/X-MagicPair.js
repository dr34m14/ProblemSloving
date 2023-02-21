let array = [537037812705867558, 338887693834423551, 3199921013340]
let t = 0;
if (array[0] >= array[2] && array[1] >= array[2]) {
    if (array[0] === array[2] || array[1] === array[3]) {
        console.log('YES');
    } else {
        if (array[0] % array[2] == 0 || array[1] % array[2] == 0) {
            console.log('YES');
        } else {
            if ((array[0] - (array[0] % array[2])) % array[2] == 0 || (array[1] - (array[1] % array[2])) % array[2] == 0) {
                console.log('YES');
            }
        }
    }
} else {
    console.log('NO');
}