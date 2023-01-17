
#include <iostream>
using namespace std;
int main() {
    
    int NUM, BIN, b, scelta;
    cout<<"1 per bin, 2 per dec, 0 per exit"<<endl;
    cin>>scelta;    

    switch (scelta) {
        case 1:
        cout << "Inserisci il valore di NUM";
        cin>>NUM;
        
        while (NUM>0) {
		if (NUM%2==0){
			b='0'+b;
		}
		else{
			b='1'+b;
		NUM=NUM/2;
		}
		
	}
	cout<<"Il valore in binario è ", NUM;
        break;
        case 2:
        cout << "Inserisci il valore di NUM";
        cin>>NUM;
        
        break;
        case 0:
        
        break;
        
    }
    

    return 0;
}