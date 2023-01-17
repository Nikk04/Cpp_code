#include<iostream>
using namespace std;

 
int
main ()
{
  
int N, scelta, i, S = 0, M = 0, Num, c, d;
  
 
 
cout << "Inserisci N: " << endl;
  
cin >> N;
  
 
int v[N];
  
 
 
 
for (i = 0; i < N; i++)
    {
      
cout << "Inserisci un numero: " << endl;
      
cin >> v[i];
    
}
  
 
cout << "1 Sommare  del vettore e visualizzare il risultato" << endl;
  
cout <<
    "2 Calcolare la media aritmetica degli elementi del vettore e visualizzare il risultato"
    << endl;
  
cout <<
    "3 Acquisire un numero Num e conteggiare quanti elementi del vettore sono ad esso inferiori e quanti sono superiori. Visualizzare i due risultati."
    << endl;
  
cout << "0 Uscita dal programma " << endl;
  
cout << "Scegli un opzione : " << endl;
  
cin >> scelta;
  
  do
    {
      
switch (scelta)
	{
	
case 0:
	  
break;
	
case 1:
	  
for (i = 0; i < N; i++)
	    {
	      
S = S + v[i];
	    
}
	  
 
cout << "La somma degli elementi del vettore C( : " << S << endl;
	  
break;
	
case 2:
	  
for (int i = 0; i < N; i++)
	    {
	      
S = S + v[i];
	    
} 
M = S / N;
	  
 
 
cout << "La media aritmetica degli elementi del vettore : "
	    << M << endl;
	  
break;
	
case 3:
	  
cout << "Inserisci un numero : " << endl;
	  
cin >> Num;
	  
if (v[i] < Num) {
	      
c++;
	      
cout << "Gli elementi del vettore negativi sono : " << c <<
		endl;
	    
 
}
	  
if (v[i] > Num) {
	      
d++;
	      
cout << "Gli elementi del vettore positivi sono : " << d << endl;
	    
 
}
	  
break;
	
 
 
}
    
} while (scelta <= 0);
  
return 0;

 
 
}
