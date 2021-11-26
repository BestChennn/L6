#include<iostream>
using namespace std;

int main(){
    int N=1,E=0,O=0;
    if(N!=0){
        while(N!=0){
            cout << "Enter an integer: ";
            cin >> N;

            if(N%2==0){
                E++ ;
            }else{
                O++ ;
            }
        }

    }
    cout << "#Even numbers = "<< E-1 <<"\n";
    cout << "#Odd numbers = " << O ;
    return 0;
}
