
function ParentTriangle(ab,ac,bc,ratio){
  ab= parseFloat(ab);
  ac= parseFloat(ac);
  bc= parseFloat(bc);
  ratio= parseFloat(ratio);
  
  let ad,ae,de,areaABC,areaADE,areaBDEC;
  let sp = (ab+ac+bc) / 2;
  areaABC = Math.sqrt(sp*(sp-ab)*(sp-bc)*(sp-ac));
  this.getAD = function() {
      let high= ab;
      let low = 0;
      let mid = (high+low) / 2;

      while(high - low > .000001){
          mid = (high+low) / 2;
          ad = mid;
          ae = (ad*ac) / ab;
          de = (ad*bc) / ab;
          let sc = (ad + ae + de) / 2;
  
          areaADE = Math.sqrt(sc * (sc- ad) * (sc-ae) * (sc - de));
          areaBDEC = areaABC - areaADE;
          let newRatio = areaADE / areaBDEC; 
          if(newRatio == ratio){
              break;
          }else if(newRatio > ratio){
              high = mid;
          }else if(newRatio < ratio){
              low = mid;
          }
      }
      return mid;
  }
}

process.stdin.resume();
process.stdin.setEncoding('utf-8');

let inputString = '';
let currentLine = 0;

process.stdin.on('data',inputStdin=>{
  inputString += inputStdin;
})

process.stdin.on('end',_ =>{
  inputString = inputString.trim().split('\n').map(s=>{
    return s.trim();
  })
  main();
})

function readLine(){
  return inputString[currentLine++];
}

function main(){

  let n = parseInt(readLine());
  
  let triangles = [];
  for(let i=0;i<n;i++){
    let temp = readLine().split(" ");
  
    triangles.push(new ParentTriangle(temp[0],temp[1],temp[2],temp[3]));
  }
  
  
  for(let i=0;i<n;i++){
    console.log(`Case ${i+1}: ${triangles[i].getAD()}`);
  }


}

