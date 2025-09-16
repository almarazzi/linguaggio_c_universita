// provaC.cpp : Questo file contiene la funzione 'main', in cui inizia e termina l'esecuzione del programma.
//

#include <stdio.h>
int attesa(int *arrivo, int *servizio, int numPe);
int main()
{
	int arrivo[] = {0, 2, 4};
	int servizio[] = { 5, 3, 1 };
	int w =attesa(arrivo,servizio,3);
	printf("%d", w);

}
int attesa(int *arrivo, int *servizio, int numPe)
{
	int tempocorrente = 0;
	int maxW = 0;
	for (int i = 0; i < numPe; i++)
	{
		if (arrivo[i] >= tempocorrente)
		{
			tempocorrente = arrivo[i] + servizio[i];
		}
		else
		{
			int att = tempocorrente - arrivo[i];
			if(att>maxW)
				maxW = att;
			tempocorrente += servizio[i];
		}
		
	}
	return maxW;

}


// Per eseguire il programma: CTRL+F5 oppure Debug > Avvia senza eseguire debug
// Per eseguire il debug del programma: F5 oppure Debug > Avvia debug

// Suggerimenti per iniziare: 
//   1. Usare la finestra Esplora soluzioni per aggiungere/gestire i file
//   2. Usare la finestra Team Explorer per connettersi al controllo del codice sorgente
//   3. Usare la finestra di output per visualizzare l'output di compilazione e altri messaggi
//   4. Usare la finestra Elenco errori per visualizzare gli errori
//   5. Passare a Progetto > Aggiungi nuovo elemento per creare nuovi file di codice oppure a Progetto > Aggiungi elemento esistente per aggiungere file di codice esistenti al progetto
//   6. Per aprire di nuovo questo progetto in futuro, passare a File > Apri > Progetto e selezionare il file con estensione sln
