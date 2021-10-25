'use strict'

process.stdin.resume();
process.stdin.setEncoding('utf-8')

let inputString = '';
let currentIndex = 0;

process.stdin.on('data',(string)=>{
    inputString += string;
})

process.stdin.on('end',()=>{
    inputString = inputString.split('\r\n');

    main();
});

function readLine(){
    return inputString[currentIndex++];
}

function downToZero(n){

    let move = 1;
    let queue = [];
    let moveList = new Array(n+1);
    for(let i=0;i<n+1;i++) moveList[i] = 0;

    queue.push(n);
    let temp =queue.shift();
    while(temp != null){
       // console.log(temp);
        //console.log("\ntemp=",temp);
        if(temp==0) break;

            let sqr = parseInt(Math.sqrt(temp),10);
            let i=sqr;
            for(;i>1;i--){
                if(temp%i == 0 && (temp/i > 1) ){
                    let max = Math.max(i,temp/i);
                    //console.log("max",max);
                    if(moveList[max] == 0){
                        //console.log("ent=",max);
                        
                        moveList[max] = move;
                        //console.log("excecute",temp,moveList[temp]);
                        queue.push(max);
                        move++;
                        
                    }
                    
                }
            }
           
            if(i==1 && moveList[--temp] == 0){
                //console.log("end 2=",temp);
                queue.push(temp);
                moveList[temp] = move;
                move++;
                temp = queue.shift();
            }else{
    
                temp = queue.shift();
                //console.log("else",temp);
            }
    }
    //console.log(moveList)
    return moveList[0];
    
}

function main(){

    let q = parseInt(readLine(),10);

    for (let qItr = 0; qItr < q; qItr++) {
        const n = parseInt(readLine().trim(), 10);

        const result = downToZero(n);

       console.log(result);
    }

}