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
---
# Massimo
- La funzione riceve due numeri interi a 8 bit con segno a e b e restituisce il valore massimo.
