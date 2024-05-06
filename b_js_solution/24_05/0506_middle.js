const solution = (str) => {
    let res = '', cnt = 0;
    for (let c of str) {
        if (c === '(') {
            if (cnt > 0) res += '(';
            cnt++;
        } else if (c === ')') {
            cnt--;
            if (cnt > 0) res += ')';
        }
        // DebugLog
        console.log(`cnt: ${cnt}, res: ${res}`);
    }
    return res;
}

console.log('TestCase1');
console.log(solution("(()())(())")); // ()()()

console.log('\nTestCase2');
console.log(solution("(()())(())(()(()))"));

console.log('\nTestCase3');
console.log(solution("()()"));