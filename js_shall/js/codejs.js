let _inputLines;
let _lineNumber = 0;
let inputReader = _inputReader();
 
function _main() {
  _inputLines = _inputData
    .trim()
    .split("\n")
    .map((string) => {
      return string.trim();
    });
 
  //------------------------------ <Solution> -------------------------------//
  let t = inputReader.readNumber();
  //let t = 1;
 
  function solve() {
    let s = inputReader.readLine().split("");
    let n = s.map((x) => {
      return Number(x);
    });
    for (let i = n.length - 1; i > 0; i--) {
      if (n[i] + n[i - 1] >= 10) {
        let sum = n[i] + n[i - 1];
        n[i - 1] = Math.floor(sum / 10);
        n[i] = sum % 10;
        console.log(n.join(""));
        return;
      }
    }
    n[1] += n[0];
    n.shift();
    console.log(n.join(""));
  }
 
  while (t--) {
    solve();
  }
 
  //------------------------------ <Solution> -------------------------------//
}
 
var _inputData = "";
function cacheInput(data) {
  _inputData += data;
}
 
process.stdin.resume();
process.stdin.setEncoding("utf8");
process.stdin.on("data", cacheInput).on("end", _main);
 
function _inputReader() {
  function readNumber() {
    return Number(_inputLines[_lineNumber++]);
  }
 
  function readLine() {
    return _inputLines[_lineNumber++];
  }
 
  return {
    readNumber,
    readLine,
  };
}