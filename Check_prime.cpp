#include<iostream>
using namespace std;

int checkPrimeNumber(int);

int checkPrimeNumber(int n)
{
    bool flag = true;
    for(int j = 2; j <= n/2; ++j)
    {
        if (n%j == 0)
        {
            flag = false;
            break;
        }
    }
    return flag;
}

int main()
{
    int a=0,r;
    cout<<"Enter the no.."<<endl;
    cout<<"and i'll tell you if the no is prime or not!!"<<endl;
    cin>>a;
    r=checkPrimeNumber(a);
    if(r==1)
    {
        cout<<"Yes!!\n "<<a<<" is a prime number..";
    }
    else
    {
        cout<<"oppps!!\n "<<a<<" is not a prime number..";
    }
}
