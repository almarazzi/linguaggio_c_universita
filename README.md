# linguaggio_C_universita
---
## Introduzione
Questo repository è stato creato per scopi universitari e raccoglie esercizi, progetti e codice sviluppato nell’ambito del corso di Fondamenti di Informatica 1.
Gli esempi sono programmati in C e possono essere eseguiti utilizzando Visual Studio come ambiente di sviluppo.

L’obiettivo è fornire esempi pratici di algoritmi, strutture dati e simulazioni di problemi reali, utili per comprendere meglio i concetti affrontati a lezione.

Nota: Il materiale presente è pensato esclusivamente per uso didattico e non per scopi commerciali.
---
# Indice
- [Problema_Esempio](#Problema_Esempio)
- [Massimo](#Massimo)
- [Multipli](#Multipli)
- [Quadrato della distanza](#Quadrato_della_distanza)
- [Ordine_di_grandezza](#Ordine_di_grandezza)
- [Cifre_Binarie](#Cifre_Binarie)
- [Select_Sort](#Selection_Sort (`select_sort`))
---
# Problema_Esempio
 - La società BigBurger Inc. vuole vedere se è fattibile avere una sola 
persona al bancone sia a prendere gli ordini sia a servirli. In ogni 
BigBurger, i clienti arriveranno e si metteranno in fila. Quando arrivano 
alla cassa fanno il loro ordine, che sarà preparato e servito. Poi lasciano 
la fila e la prossima persona in fila sarà in grado di ordinare.

- Abbiamo bisogno di sapere quanto tempo un cliente può essere costretto 
ad aspettare prima di poter effettuare un ordine. 
- Dato un rapporto che elenca ogni cliente per una giornata tipo, vogliamo 
calcolare il tempo massimo di attesa del cliente. 

- Ogni cliente nel rapporto è caratterizzato da un orario di arrivo (misurato 
in minuti, dall’apertura del negozio) e una durata di servizio (il numero di 
minuti dall’ordine al servizio).
- Creare una funzione maxWait che riceve due puntatori a int (arrivi e 
servizio), che descrivono n clienti. La funzione restituisce il tempo 
massimo trascorso da un cliente tra arrivo e ordine. 

- Gli elementi corrispondenti di arrivi e servizio sono riferiti allo stesso 
cliente, e sono dati nell’ordine in cui arrivano al negozio (arrivi è in ordine 
non decrescente).
- Se più clienti arrivano contemporaneamente, essi accederanno alla fila 
assieme, nell’ordine indicato negli array.
- prototipo della Funzione: int attesa(int* arrivo, int* servizio, int numPe);
---
# Massimo
- La funzione riceve due numeri interi a 8 bit con segno a e b e restituisce il valore massimo.
- prototipo della Funzione:  char massimo(char a, char b);
---
# Multipli
- La funzione riceve due numeri interi a 32 bit con segno a e b e restituisce 1 se a è un multiplo di b, altrimenti 0.
- prototipo della Funzione:  bool multipli(int a, int b);
---
# Quadrato_della_distanza
- La funzione riceve le coordinate di due punti P1(x1,y1) e P2(x2,y2) restituise il quadrato della distanza tra due punti, ovvero D^2=(x1-x2)^2-(y1-y2)^2
- prototipo della Funzione:  double Quadrato_Della_Distanza(double x1, double y1, double x2, double y2)
---
 # Ordine_di_grandezza
- La funzione riceve un valore intero non negativo a 32 bit val e ritorna l'esponente della massima potenza del dieci contenuta in val
-  prototipo della Funzione:  char Ordine_di_grandezza(unsigned int Numero)
  ---
  # Cifre_Binarie
- La funzione riceve un valore intero non negativo a 32 bit val e un indice di posizione n e deve ritornare il bit di posizione n in val. Il bit meno significativo è quello di posizione 0, mentre il bit più significativo è quello di posizione 31.
- prototipo della funzione:  unsigned char Cifre_Binarie(unsigned int numero, unsigned int n)
---
  # Selection_Sort (`select_sort`)

![Selection Sort](https://upload.wikimedia.org/wikipedia/commons/9/94/Selection-Sort-Animation.gif)  
*Animazione del Selection Sort (Fonte: Wikipedia)*

---

## Descrizione
`Select_Sort` è un algoritmo di ordinamento semplice che ordina una lista confrontando ogni elemento con tutti gli altri e posizionando l'elemento minimo nella posizione corretta.  

È ideale per apprendere i concetti base degli algoritmi di ordinamento, anche se non è efficiente per grandi dataset.

---

## Caratteristiche
- Ordinamento crescente (default) o decrescente (opzionale)
- Funziona su array
- Algoritmo **in-place** → non richiede memoria aggiuntiva
- Complessità:
  - Tempo: O(n²)
  - Spazio: O(1)

---

## Funzionamento

### Passaggi principali
1. Considera il primo elemento come minimo.
2. Confronta con tutti gli elementi successivi per trovare il minimo reale.
3. Scambia il minimo con il primo elemento.
4. Ripeti per il resto della lista fino al termine.

### Esempio visivo
Lista iniziale: `[64, 25, 12, 22, 11]`

| Passo | Lista corrente       | Azione                            |
|-------|--------------------|----------------------------------|
| 1     | `[64, 25, 12, 22, 11]` | Minimo=11 → scambia con 64        |
| 2     | `[11, 25, 12, 22, 64]` | Minimo=12 → scambia con 25        |
| 3     | `[11, 12, 25, 22, 64]` | Minimo=22 → scambia con 25        |
| 4     | `[11, 12, 22, 25, 64]` | Lista ordinata                    |
