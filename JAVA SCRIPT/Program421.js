function checkPerfect(No)
{
    let iSum = 0
    for(let i = 0; i<=(No/2); i++)
    {
        if(No%i == 0)
        {
            iSum = iSum + i
        }
    }
    return [iSum == No]
}

let value = 28
let iRet = false

iRet = checkPerfect(value);

if(iRet == true)
{
    console.log(value+" is a perfect number")
}
else
{
    console.log(value+" is NOT a perfect number")
}
