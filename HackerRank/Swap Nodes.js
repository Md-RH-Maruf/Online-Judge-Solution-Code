'use strict'

process.stdin.resume();
process.stdin.setEncoding('utf-8');

let inputString = '';
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



class Node{
    constructor(data) {
        this.data = data;
    }
    left = null;
    right = null;
}
let nodes = [];
function main(){
    const n = parseInt(readLine().trim(), 10);
    
    let indexes = Array(n);
    let root  = new Node(1);
    let queues = [];
    
    let temp = root;
    for (let i = 0; i < n; i++) {
       
        let inputs = readLine().replace(/\s+$/g, '').split(' ').map(index=>parseInt(index,10));
        
        if(inputs[0] != -1){
        
            let newNode = new Node(inputs[0]);
            temp.left = newNode;
            queues.push(newNode); 
        }
        if(inputs[1] != -1){
           
            let newNode = new Node(inputs[1]);
            temp.right = newNode;
            queues.push(newNode);
        }
        
        temp = queues.shift();
        //indexes[i] = readLine().replace(/\s+$/g, '').split(' ').map(indexesTemp => parseInt(indexesTemp, 10));
    }

    nodes[0] = [root];
    initialDepth(root,1);

    
    
    const queriesCount = parseInt(readLine().trim(), 10);

    let queries = [];

    for (let i = 0; i < queriesCount; i++) {
        const queriesItem = parseInt(readLine().trim(), 10);
        queries.push(queriesItem);
    }

    //console.log(inOrderTraversal(root));
    let h = nodes.length;
    queries.forEach(index=>{
        //console.log(nodes[index-1]);
        let depth = index;
        while(depth < h){
            nodes[depth-1] = nodes[depth-1].map(node=>{
                let temp = node.left ;
                node.left = node.right;
                node.right = temp;
    
                return node;
            });
            depth += index;
        }

        
        //console.log(nodes[index-1]);
        console.log(inOrderTraversal(root));
    });
   
    
   
}

function initialDepth(root, index){
    if(nodes[index]== undefined) nodes.push([]);
    if(root.left != null){
        nodes[index].push(root.left);
        initialDepth(root.left,index+1);
    }
    if(root.right != null){
        nodes[index].push(root.right);
        initialDepth(root.right,index+1);
    }
}

function inOrderTraversal(root){
    let returnData = '';
    if(root.left != null){
        returnData += inOrderTraversal(root.left)+" ";
    }
    returnData +=  root.data;
    if(root.right != null){
        returnData += " "+inOrderTraversal(root.right);
    }
    return returnData;
}