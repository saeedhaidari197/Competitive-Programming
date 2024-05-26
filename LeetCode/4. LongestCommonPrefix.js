/**
 * @param {string[]} strs
 * @return {string}
 */
var longestCommonPrefix = function(strs) {
    let res = ""
    let found = false
    let iteration = 0
    strs.sort((a, b) => a.length - b.length);
    let temp = strs[0]
    for(let i=0; i<temp.length; i++){
        strs.forEach(str => {
            if(!found){
                if(temp[i] !== str.charAt(i)){
                    res = temp.substring(0,i)
                    found = true
                } 
            }
        })
    }
    if(!found) return temp
    return res
};