function Summation(brr)
{
    let sum = 0
    for(let i = 0; i<brr.length; i++)
    {
        sum = sum + brr[i]
    }
    return sum
}

Arr = [11,21,51,100,111,121]

let iRet = 0

iRet = Summation(Arr)

console.log("Sum : "+iRet)