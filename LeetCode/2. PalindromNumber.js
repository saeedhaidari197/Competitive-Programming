/**
 * @param {number} x
 * @return {boolean}
 */
var isPalindrome = function(x) {
    if(x < 0) return false 
    if(x === 0) return true
    let num = x.toString()
    for(let i = 0; i < num.length / 2; i++){
        if(num[i] !== num[num.length - i - 1]) return false
    }
    return true
};