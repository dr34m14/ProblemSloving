let cout = 0;

function divisors(n) {
    // Write your code here

    if (n % 2 == 0) {
        cout += 1;
        console.log('inter');
        return divisors(n / 2);
    } else {
        return cout;
    }
}
console.log(divisors(10));