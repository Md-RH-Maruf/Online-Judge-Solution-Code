'use strict'

process.stdin.resume();
process.stdin.setEncoding('utf-8');

let inputString = '';
let lineCount = 0;

process.stdin.on('data',(stdInString)=>{
    inputString += stdInString;
});

process.stdin.on('end',()=>{
    inputString = inputString.split('\r\n');

    main();
})

function readLine(){
    return inputString[lineCount++];
}


function main(){
    let testCase = parseInt(readLine(),10);

    let inputs = [];
    while(testCase-->0){
        inputs.push(readLine());
    }

    inputs.forEach((input)=>{
        let values = input.split(' ').map(n=>parseInt(n,10));

        let max = Math.max(...values)+1;
        if(values[0]==values[1] && values[1]==values[2]){
            values[0]++;
            values[1]++;
            values[2]++;
        }else{
        for(let i=0;i<3;i++){
                if(max-values[i]>1){
                    values[i] = max-values[i]
                }else{
                    values[i] = max-values[i]-1;
                }
            }
        }
        console.log(`${values[0]} ${values[1]} ${values[2]}`)
        
    });
}