
var findRLE = function(str) {
    let res = "";
    let count = 1;
    for (let i = 1; i < str.length; i++) {
        if (str[i] == str[i - 1]) {
            count++;
        } else {
            res += count + str[i - 1];
            count = 1;
        }
    }    
    res += count + str[str.length - 1];
    return res;
}

var countAndSay = function(n) {
    if (n == 1) return "1"; 
    return findRLE(countAndSay(n - 1)); 
};

console.log(countAndSay(9))