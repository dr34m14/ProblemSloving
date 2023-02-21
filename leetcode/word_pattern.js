let pattern = "abba";
let s = "dog cat cat fish"
var wordPattern = function (pattern, s) {
    let ss = s.split(" ");
    let pas = pattern.split('');
    let res;
    for (let i = 0; i < pas.length - 1; i++) {

        if (pas[i] == pas[i + 1]) {
            if (ss[i] !== ss[i + 1]) {
                res= false;
                break;
            } else {
                res= true;

            }
        }
        else {
            if (ss[i] == ss[i + 1]) {
                
                res= false;
                break;

            } else {
                res= true;
            }
        }
    }
    return res;
};
console.log(wordPattern(pattern, s))
