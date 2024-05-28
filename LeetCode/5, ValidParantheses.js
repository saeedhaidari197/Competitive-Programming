/**
 * @param {string} s
 * @return {boolean}
 */
var isValid = function(s) {
    if(s.length % 2 !== 0) return false
    for(let i=0; i<s.length; i++){
        while(s[i] === '(' || s[i] ==='{' || s[i] === '[') i++
        if(s[i] === ')' && s[i-1] === '('){
             s = s.slice(0,i-1) + s.slice(i+1)
            i -= 2
        }
        else if(s[i] === '}' && s[i-1] === '{'){
             s = s.slice(0,i-1) + s.slice(i+1)
            i -= 2
        }
        else if(s[i] === ']' && s[i-1] === '['){
             s = s.slice(0,i-1) + s.slice(i+1)
            i -= 2
        }
        else return false
    }
    return !s.length
};


//Comes to the topest category based on runtime 
// 58ms runtime.