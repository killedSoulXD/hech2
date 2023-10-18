#include <iostream>
using namespace std;

void df(int i,int q){
    if(i>q){
        return ;
    }
    cout<<i<<" ";
    for(int j =0;j<10;j++){
        df((10*i)+j,q);
    }
}

int main() {
    int q;
    cin >> q;
    cout<<"0 ";
    for(int i=1 ; i<=9 ; i++){
        df(i,q);
    }
	return 0;
}