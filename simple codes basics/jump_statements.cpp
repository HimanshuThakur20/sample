// #include<iostream>

// using namespace std;

// int main(){

// // Write a program to print all odd numbers till n.

// int n;
// cin>>n;
// cout<<"\n\n";

// for(int i=0;i<=n;i++){
//     if(i%2==0)
//     continue;
//     cout<<i<<endl;
// }

//     return 0;
// }



// Write a program to print all prime numbers in a given range

#include <iostream>

using namespace std;

int main(){

    int a,b,i,j;

    cin>>a>>b;
    cout<<endl;
    for(i=a;i<=b;i++){
        for(j=2;j<i;j++){
            if(i%j==0)
            break;
        }
        if(j==i)
        cout<<i<<endl;
    }

    return 0;
}