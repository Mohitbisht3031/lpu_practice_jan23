/*Find the sum of all the natural numbers from 1 to n.*/
#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;

    int s = 0;
    // for(int i = 1;i<=n;i++){
    //     s+=i;
    // }
    s = (n*(n+1))/2;
    cout<<s<<endl;

    return 0;
}