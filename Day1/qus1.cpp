/*Check is a year is leap year or not.*/
#include<bits/stdc++.h>

using namespace std;

int main(){
    int year;
    cout<<"Enter a year: ";
    cin>>year;
    
    if(year%4 == 0){
        cout<<year<<" this is a leap year"<<endl;
    }else{
        cout<<year<<" thid is not a leap year"<<endl;
    }

    return 0;
}