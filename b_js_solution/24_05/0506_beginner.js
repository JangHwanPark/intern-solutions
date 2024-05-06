export const solution = (strList) => {
    let res = [];
    strList.forEach((str) => res.push(str.length));
    return res;
}

console.log(`TestCase1`)
console.log(solution(["We", "are", "the", "world!"]))

console.log(`TestCase2`)
console.log(solution(["I", "Love", "Programmers."]	))