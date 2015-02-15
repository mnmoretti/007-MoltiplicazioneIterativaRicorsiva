#include <stdio.h> 
#include <stdlib.h> 
 
 
 int moltiplicazioneIterativa(int a, int b); 
 int moltiplicazioneRicorsiva(int a, int b); 
 
 
 int main(int argc, char** argv) { 
     int a,b; 
     int rIterativo, rRicorsivo; 
      
     printf("Inserisci a, il primo fattore (intero): "); 
     scanf("%d", &a); 
     printf("Inserisci b, il secondo fattore (intero non negativo): "); 
     scanf("%d", &b); 
      
     rIterativo = moltiplicazioneIterativa(a, b); 
     rRicorsivo = moltiplicazioneRicorsiva(a, b); 
      
     printf("%d * %d = %d (formulazione iterativa)\n", a, b, rIterativo); 
     printf("%d * %d = %d (formulazione ricorsiva)\n", a, b, rRicorsivo); 
     return (EXIT_SUCCESS); 
 } 
 
 
 int moltiplicazioneIterativa(int a, int b) { 
     int risultato,i; 
      
     for(i=0;i<b;i++) { 
         risultato += a; 
     } 
      
     return risultato; 
 } 
 int moltiplicazioneRicorsiva(int a, int b) { 
     int risultato = 0; 
      
     if(b!=0) { 
         risultato = a + moltiplicazioneRicorsiva(a,b-1); 
     }else { 
         return risultato; 
     } 
}
