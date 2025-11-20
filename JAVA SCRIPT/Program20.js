function SumFac(No)
{
    let iSum = 0
    for(let i = 0; i<=(No/2); i++)
    {
        if(No%i == 0)
        {
            iSum = iSum + i
        }
    }
    return iSum
}

let value = 12
let iRet = 0

iRet = SumFac(value);

console.log("Sum of factor is: "+iRet)