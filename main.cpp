#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int n1=0,n2=1,risultato=0;
    if (n>=2){
        cout<<n2<<endl;
        int i;
        for(i=1;i<n;i++){
            risultato=n1+n2;
            n1=n2;
            n2=risultato;
            cout<<risultato<<endl;
        }
    }
    else{
        cout<<"errore";
    }

    return 0;
}

