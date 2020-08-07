#include<stdio.h>
int main(){
    int n,ind=0, count=0, mmax=0;
    char bin[100];
    cin >> n;
    while(n){
        if(n%2==0) {
            bin[ind]='0';
            n = n / 2;
            ind = ind + 1;
            }
        else if(n%2==1) {
            bin[ind]='1';
            n = n / 2;
            ind = ind + 1;
        }
    }
    for(int i=0; i<=(ind-1); i++){
        if(bin[i] == '1' && bin[i+1] == '1'){
            count++;
            if(mmax < count)
                mmax = count;
        }
        else
            count=0;
    }
    cout << mmax + 1 << endl;
    return 0;
    }
