'use strict'

process.stdin.resume();
process.stdin.setEncoding('utf-8')

let inputString = '';
let currentIndex = 0;

process.stdin.on('data', (string) => {
    inputString += string;
})

process.stdin.on('end', () => {
    inputString = inputString.split('\r\n');

    main();
});

function readLine() {
    return inputString[currentIndex++];
}

function downToZero(n) {

    let queue = [];
    let moveList = new Array(n)
    for (let i = 0; i < n + 1; i++) moveList[i] = 0;
    let temp = n;

    while (temp != null) {
        if (temp == 0) break;



        let sqr = parseInt(Math.sqrt(temp), 10);
        for (let i = sqr; i > 1; i--) {
            if (temp % i == 0 && moveList[temp / i] == 0) {
                queue.push(temp / i);
                moveList[temp / i] = moveList[temp] + 1;

            }
        }


        if (moveList[temp - 1] == 0) {
            queue.push(temp - 1);
            moveList[temp - 1] = moveList[temp] + 1;

        }
        temp = queue.shift();

    }

    return moveList[0];

}

function main() {

    let q = parseInt(readLine(), 10);

    for (let qItr = 0; qItr < q; qItr++) {
        const n = parseInt(readLine().trim(), 10);

        const result = downToZero(n);

        console.log(result);
    }

}