'use strict'

const fs = require('fs');

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


function minimumMoves(grid,startX,startY,goalX,goalY){

    if(startX == goalX && startY == goalY) return 0;
   grid = grid.map(row=>row.split(''));
   let maxSize = grid.length;

   let visiteNode = new Array(maxSize);
    for(let i=0; i< maxSize;i++){
        
        visiteNode[i] = new Array(maxSize);
    }
    
   let queue = [];
   queue.push({x: startX,y: startY});

  
   while(queue.length>0){
        let node = queue.shift();

        let tempX = node.x+1;
        let tempY = node.y;

        while(tempX<maxSize){
            if(grid[tempX][tempY] != 'X'){

                if(visiteNode[tempX][tempY] == undefined){
                    queue.push({x: tempX,y: tempY});
                    visiteNode[tempX][tempY] = {x: node.x, y : node.y};

                    if(tempX==goalX && tempY == goalY){
                        queue = [];
                        break;
                    }
                }
            }else{
                break;
            }
            

            tempX++;
        }
        tempX = node.x-1;
        tempY = node.y;
        while(tempX>=0){
            if(grid[tempX][tempY] != 'X'){

                if(visiteNode[tempX][tempY] == undefined){
                    queue.push({x: tempX,y: tempY});
                    visiteNode[tempX][tempY] = {x: node.x, y : node.y};

                    if(tempX==goalX && tempY == goalY){
                        queue = [];
                        break;
                    }
                }
            }else{
                break;
            }
            

            tempX--;
        }
        tempX = node.x;
        tempY = node.y+1;
        while(tempY<maxSize){
            if(grid[tempX][tempY] != 'X'){

                if(visiteNode[tempX][tempY] == undefined){
                    queue.push({x: tempX,y: tempY});
                    visiteNode[tempX][tempY] = {x: node.x, y : node.y};

                    if(tempX==goalX && tempY == goalY){
                        queue = [];
                        break;
                    }
                }
            }else{
                break;
            }
            

            tempY++;
        }
        tempX = node.x;
        tempY = node.y-1;
        while(tempY>=0){
            if(grid[tempX][tempY] != 'X'){

                if(visiteNode[tempX][tempY] == undefined){
                    queue.push({x: tempX,y: tempY});
                    visiteNode[tempX][tempY] = {x: node.x, y : node.y};

                    if(tempX==goalX && tempY == goalY){
                        queue = [];
                        break;
                    }
                }
            }else{
                break;
            }
            

            tempY--;
        }

   }

    
    let tempX = visiteNode[goalX][goalY].x;
    let tempY = visiteNode[goalX][goalY].y;
    let move = 1;
    while(tempX != startX || tempY != startY){
        let temp = visiteNode[tempX][tempY].x;;
        tempY = visiteNode[tempX][tempY].y;
        tempX = temp;
        move++;
    }
    return move;
   
}

function main(){
    const n = parseInt(readLine(),10);

    let grid = [];

    
    for(let i =0 ;i<n ;i++){
        grid.push(readLine());
    }

    const firstMultipleInput = readLine().replace(/\s+$/g,'').split(' ');

    const startX = parseInt(firstMultipleInput[0],10);
    const startY = parseInt(firstMultipleInput[1],10);
    const goalX = parseInt(firstMultipleInput[2],10);
    const goalY = parseInt(firstMultipleInput[3],10);

    const result = minimumMoves(grid,startX,startY,goalX,goalY);

    console.log(result)
}
