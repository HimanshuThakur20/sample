#include <iostream>

using namespace std;

int main(){

// Program to display multiplication table upto 10.

for(int j=2;j<=10;j++){

    for(int i=1;i<=10;i++){
        cout<<j<<"x"<<i<<"="<<j*i<<endl;
    }
    cout<<endl;
}


    return 0;
}





// // Program to add only positive numbers.

// #include<iostream>

// using namespace std;

// int main(){

// int number,sum=0;

// cout<<"\nEnter a number:";
// cin>>number;

// while(number>=0){
// sum=sum+number;

// cout<<"\nEnter a number:";
// cin>>number;
// }

// cout<<"\nSum = "<<sum;
//     return 0;
// }
