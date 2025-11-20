// Display the Swap of 2 values.

#include<iostream>
using namespace std;

void Swap(int *iptr1 , int *iptr2)
{
    int iTemp = 0 ;

    iTemp = *iptr1 ;
    *iptr1 = *iptr2 ;
    *iptr2 = iTemp ;
}

int main()
{
    int iNum1 = 0 , iNum2 = 0 ;

    cout<<"Enter the Number : \n";
    cin>>iNum1 ;

    cout<<"Enter the Number : \n";
    cin>>iNum2 ;

    cout<<"Before Swap : \n";
    cout<<iNum1<<"\t"<<iNum2<<"\n"; 

    Swap(&iNum1,&iNum2);

    cout<<"After Swap : \n";
    cout<<iNum1<<"\t"<<iNum2<<"\n"; 

    return 0 ;
}