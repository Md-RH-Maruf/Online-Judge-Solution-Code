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

    main()
});

function readLine(){
    return inputString[currentIndex++];
}

function truckTour(pumps){
    let totalPump = pumps.length;

    let startingPump = 0;

    

    let currentPump = 1;
    
    let reachedPump = new Array(totalPump);
    let remainingFuel = new Array(totalPump);
    

    while(pumps[startingPump][0]<pumps[startingPump][1]){
        //reachedPump[startingPump] = startingPump;
        //remainingFuel[startingPump] = petrolpums[startingPump][0];
        startingPump++;
        //console.log("stuck");
    }

    let truckFuel = pumps[startingPump][0]-pumps[startingPump][1];

    currentPump = startingPump+1;

    let count= 0;
    while(startingPump != currentPump){
        if(reachedPump[currentPump] != undefined){
            currentPump = reachedPump[currentPump];
            truckFuel += remainingFuel[currentPump];

            while((truckFuel+pumps[currentPump][0])>=pumps[currentPump][1]){
                truckFuel += pumps[currentPump][0];
                truckFuel = truckFuel - pumps[currentPump][1];
                currentPump = currentPump+1;
                if(currentPump == totalPump) currentPump = 0;

                if(startingPump == currentPump) break;
                //console.log("stuck 1");
            }
            if(startingPump == currentPump) break;
        }else{
            while((truckFuel+pumps[currentPump][0])>=pumps[currentPump][1]){
                truckFuel += pumps[currentPump][0];
                truckFuel = truckFuel - pumps[currentPump][1];
                currentPump = currentPump+1;
                if(currentPump == totalPump) currentPump = 0;

                if(startingPump == currentPump) break;
                //console.log("stuck 2");
            }
            reachedPump[startingPump] = currentPump;
            remainingFuel[startingPump] = truckFuel;
            if(startingPump == currentPump) break;
        }
        startingPump++;
       
        while(pumps[startingPump][0]<pumps[startingPump][1]){
            //console.log("stuck 3");
            startingPump++;
            if(startingPump == totalPump) startingPump = 0;   
        }

        truckFuel = pumps[startingPump][0]-pumps[startingPump][1];
        currentPump = startingPump+1;
        if(currentPump == totalPump) currentPump = 0;
        //console.log("stuck 4",startingPump,currentPump);
        //console.log(reachedPump);
        
    }

    return startingPump;
}

function main(){

    let n = parseInt(readLine().trim(),10);

    let stations = [];
    while(n-->0){

        stations.push(readLine().split(' ').map(Number));
    }

    const result = truckTour(stations);

    console.log(result);
}