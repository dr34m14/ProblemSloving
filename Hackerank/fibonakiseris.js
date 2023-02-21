function fibonaki(j) {
    if (j <= 2) {
        return 1;
    } else {
        return fibonaki(j - 1) + fibonaki(j - 2);
    }

}

console.log(fibonaki(105))