'use strict';


process.stdin.resume();
process.stdin.setEncoding('utf-8');

let inputString = '';
let currentLine = 0;

process.stdin.on('data', function(inputStdin) {
    inputString += inputStdin;
});

process.stdin.on('end', function() {
    inputString = inputString.split('\n');

    main();
});

function readLine() {
    return inputString[currentLine++];
}



function solve(arr, queries) {
    // Write your code here
    let n = arr.length;
    let q = queries.length;
    let minArr=[];
    for(let i=0;i<q;i++){
        let d = queries[i];
        let maxArr = [];
        
        for(let j=0;j < (n-d+1);j++){
            maxArr.push(Math.max(...(arr.slice(j,j+d))));
        }
        minArr.push(Math.min(...maxArr));
    }

    return minArr;
}

function main() {
    

    const firstMultipleInput = readLine().replace(/\s+$/g, '').split(' ');

    const n = parseInt(firstMultipleInput[0], 10);

    const q = parseInt(firstMultipleInput[1], 10);

    const arr = readLine().replace(/\s+$/g, '').split(' ').map(arrTemp => parseInt(arrTemp, 10));

    let queries = [];

    for (let i = 0; i < q; i++) {
        const queriesItem = parseInt(readLine().trim(), 10);
        queries.push(queriesItem);
    }

    const result = solve(arr, queries);

   console.log(result);
}