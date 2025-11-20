function countSmall(Arr)
{
    let iCount = 0
    let i = 0
    for(i = 0; i < Arr.length; i++)
    {
        if(Arr[i] >= 'a' && Arr[i] <= 'z')
        {
            iCount++;
        }
    }
    return iCount
}

let Ret = 0

Ret = countSmall("InDiA")

console.log("Number of small character are: "+Ret)