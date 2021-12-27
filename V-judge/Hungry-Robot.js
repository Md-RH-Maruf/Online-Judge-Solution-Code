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
    const line = readLine().replace(/\s+$/g,'').split(' ');

   

    let days = ['b','a','a','b','c','a','c'];
    let maxDays = 0;
    let currentDay = 0;
    for(let i=0; i< 7;i++){
        let a = line[0];
        let b = line[1];
        let c = line[2];
        let tempMax = 0;

        currentDay = i;
        let loop = true;
        while(loop){

            switch(days[currentDay]){
                case 'a':
                    if(a>0){
                        a--;
                        tempMax++
                        
                    }else{
                        loop=false;
                    }
                    
                    break;
                case 'b':
                    if(b>0){
                        b--;
                        tempMax++

                    }else{
                        loop=false;
                    }
                    break;
                case 'c':
                    if(c>0){
                        c--;
                        tempMax++
                    }else{
                        loop=false;
                    }
                    break;
            }
            if(tempMax>maxDays) maxDays = tempMax;
            currentDay= (currentDay+1)%7;
        }
        


    }
    console.log(maxDays);
}