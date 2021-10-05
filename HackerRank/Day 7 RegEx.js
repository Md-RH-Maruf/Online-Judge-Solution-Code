const text = "umbrellu";

const reg = /^[aeiou]=[aeiou]$/g;

const matchResult = text.match(reg);

const searchResult = text.search(reg);

const testResult = reg.test(text);

console.log(matchResult,searchResult,testResult);