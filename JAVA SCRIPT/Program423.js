function sumDigit(No)
{
    let iCount = 0, iSum = 0

    while(No != 0)
    {
        iDigit = No % 10
        iSum = iSum + iDigit
        No = Math.floor(No / 10);
    }
    return iSum
}

let value = 123
let iRet = 0

iRet = sumDigit(value)

console.log("Sum of digits is: "+iRet)
