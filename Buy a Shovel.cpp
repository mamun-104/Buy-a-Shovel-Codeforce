#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int k,r;
    cin>>k;
    cin>>r;

    int i=1,ans;
    while(1)
    {
        if((k*i)%10==r ||(k*i)%10==0) /// mane jokhn, 10 diye vhaag jabe nissheshe, tokhn ar ki dorkar r taka vhanganor!
        {
            cout<<i;
            break;
        }
        else{i++;}

    }

    return 0;
}






