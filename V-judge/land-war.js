'use strict'

process.stdin.resume();
process.stdin.setEncoding('utf-8');

let inputString = ''
let currentIndex = 0;

process.stdin.on('data',(input)=>{
    inputString += input;
});

process.stdin.on('end',()=>{
    inputString = inputString.split('\n');

    main();
});

function readLine(){
    return inputString[currentIndex++];
}

function main(){
    let t = parseInt(readLine().trim(),10);
    let lands = readLine().replace(/\s+$/g,'').split(' ').map(Number);

    let sum = 0;
    let div = 0;
    let max = 0;
    let min = 0;
    for(let i =0 ; i<t;i++){
        sum += lands[i];
    }
    div = parseInt(sum/2,10);
    for(let i =0 ; i<t;i++){
        max += lands[i];
        if(max>div && max < min){
            c
        }
    }


}