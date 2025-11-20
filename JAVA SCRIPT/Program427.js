function Calculater(fun1, fun2)
{
    console.log(fun1(11,10))
    console.log(fun2(11,10))
}

function Addition(No1, No2)
{
    return No1+No2
}

function Sub(No1, No2)
{
    return No1-No2
}

Calculater(Addition,Sub)