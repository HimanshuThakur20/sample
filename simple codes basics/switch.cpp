#include <iostream>

using namespace std;

int main(){

    // Write a program to find whether an alphabet is a vowel or a consonant.

    char alpha;
    cin>>alpha;

    switch(alpha){
        case 'a': cout<<"Vowel\n";
                break;
        case 'e': cout<<"Vowel\n";
                break;
        case 'i': cout<<"Vowel\n";
                break;
        case 'o': cout<<"Vowel\n";
                break;
        case 'u': cout<<"Vowel\n";
                break;
        case 'A': cout<<"Vowel\n";
                break;
        case 'E': cout<<"Vowel\n";
                break;
        case 'I': cout<<"Vowel\n";
                break;
        case 'O': cout<<"Vowel\n";
                break;
        case 'U': cout<<"Vowel\n";
                break;
        default: cout<<"consonant";                                
    }

    return 0;
}