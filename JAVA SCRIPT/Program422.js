function countDigit(No)
{
    let iCount = 0

    while(No != 0)
    {
        No = Math.floor(No / 10);
        console.log(No)
        iCount++;
    }
    return iCount
}

let value = 123
let iRet = 0

iRet = countDigit(value)

console.log("Total digits are: "+iRet)
