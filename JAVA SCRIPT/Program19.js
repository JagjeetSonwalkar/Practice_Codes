function Max(brr)
{
    let iMax = brr[0];
    for(let i = 0; i<brr.length; i++)
    {
        if(brr[i] > iMax)
        {
            iMax = brr[i]
        }
    }
    return iMax
}

Arr = [121,21,51,100,111,121,1,88,512,7]

let iRet = 0

iRet = Max(Arr)

console.log("Max is: "+iRet)