#define RESET   "\033[0m"
#define RED     "\033[31m"      /* Red */
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <mmsystem.h> 
#include <conio.h>
#include <string.h>


char Protagonista [30];

void Musica (void);
void Introduzione (void);
void Banner (void);
void Info (void);
void InizioEp1 (void);
void EP1 (void);

int main(int argc, char *argv[]) {

	printf("\n");
	printf("\n");

	Banner ();
 
	printf("\n");
	printf("\n");
	Info ();
	
	 Musica ();
    //TRAMA ITRODUZIONE
	Introduzione ();

	printf("\n");
	printf("\n");
	

	//inizio introduzione episodio
	InizioEp1();
	//fine introduzione episodio

	//richiesta nome
	char nome[20];
	int risposta;
	
	printf("Ciao, il mio nome e' Ai-chan e sono la narratrice del gioco.\n");
	sleep(2);
	printf("Prima di continuare vorrei sapere che nome vorresti usare per il protagonista;\n");
	sleep(3);
	printf("Se vuoi usare il nome originale del protagonista basta che scrivi 'Kouichi'\n");
	sleep(3);
	
	do
	{
		printf("Quindi, dimmi il tuo nome: ");
		scanf("%s", nome);
		printf("Sei sicuro della tua scelta? 1=si, 2=no:\n");
		scanf("%d", &risposta);
	}while (risposta < 1 || risposta >=2);

	strcpy(Protagonista, nome);
	//Inizio ep 1
	EP1();
	//fine ep 1
	system ("PAUSE");
	return 0;
}


void Musica (void)
{
system("intro.mp3");
    FindWindow("Groove Music", NULL); 
    ShowWindow(FindWindow (NULL, "Groove Music"), SW_MINIMIZE);
}

void Introduzione (void)
{
	char nome[50], a, b, c;
	int i, scelta, CONTATORE;
    printf("Nel 1972 una studentessa del terzo anno della sezione 3 del liceo Yomiyama Nord, di nome Misaki, muore assieme alla propria famiglia nell'incendio di casa propria.\n");
	sleep (3);
	printf("L'intera classe, sconvolta dalla perdita, decide di continuare a fingere che sia ancora in vita.\n");
	sleep (3);
	printf("Alla classe si aggiungono persino i professori, ed il preside alla consegna dei diplomi fa mettere in aula anche la sua sedia.\n");
	sleep (3);
	printf("Proprio in quell'anno accade un fatto molto inquietante: nella foto di diploma della classe compare anche Misaki.\n");
	sleep (3);
	printf("Dall'anno successivo iniziano a morire in circostanze misteriose alcuni studenti, a volte con relativi parenti, ed insegnanti della sezione 3.\n");
	sleep (4);
	printf("\n");
	printf("Della primavera del 1998 un ragazzo di 15 anni, Kouichi Sakakibara, si trasferisce da Tokyo a Yomiyama per stare con i nonni mentre suo padre lavora in India.\n");
	sleep (3);
	printf("Si trasferisce proprio nella classe 3-C, ma perde le prime settimane a causa di uno pneumotorace.\n");
	sleep (3);
	printf("Mentre e' in ospedale, oltre a ricevere la visita dei suoi compagni di classe, che lo trattano in modo strano, incontra Mei, anch'essa frequentante la classe 3-C.\n");
	sleep (4);
	system("cls");
}

void Banner (void)
{
	printf("\t __________________________________________________________________________\n   ");
	printf("\t| ooo.                 8      8          .oPYo.                            |\t\n");
	printf("\t| 8  `8.               8      8          8    8                            |\t\n");
	printf("\t| 8   `8 .oPYo. o    o 8oPYo. 8 .oPYo.   8      .oPYo. oPYo. .oPYo.        |\t\n");
	printf("\t| 8    8 8    8 8    8 8    8 8 8oooo8   8      8    8 8  `' 8oooo8        |\t\n");
	printf("\t| 8   .P 8    8 8    8 8    8 8 8.       8    8 8    8 8     8.            |\t\n");
	printf("\t| 8ooo'  `YooP' `YooP' `YooP' 8 `Yooo'   `YooP' `YooP' 8     `Yooo'        |\t\n");
	printf("\t|__________________________________________________________________________|\n");
}

void Info (void)
{
	printf("/****************\n");
	printf("*Project: Double Core\n");
	printf("*Version: 0.2.0\n");
	printf("*Author: Matteo Mercurio, Alessandro Tommasino\n");
	printf("*Last modified: 28/10/2020\n");
	printf("****************/\n\n");
}

void InizioEp1 (void)
{
   printf("\t ___________________________________________________________________________________________________ \n  ");
   printf("\t| o         o                    8                o                       .oPYo.  .oPYo.    .o      |\t\n");
   printf("\t| 8         8                    8                                        8.      8    8  .  8      |\t\n");
   printf("\t| 8 odYo.  o8P oPYo. .oPYo. .oPYo8 o    o .oooo. o8 .oPYo. odYo. .oPYo.   `boo   o8YooP'     8      |\t\n");
   printf("\t| 8 8' `8   8  8  `' 8    8 8    8 8    8   .dP   8 8    8 8' `8 8oooo8   .P      8          8      |\t\n");
   printf("\t| 8 8   8   8  8     8    8 8    8 8    8  oP'    8 8    8 8   8 8.       8       8          8      |\t\n");
   printf("\t| 8 8   8   8  8     `YooP' `YooP' `YooP' `Yooo'  8 `YooP' 8   8 `Yooo'   `YooP'  8          8      |\t\n");
   printf("\t|___________________________________________________________________________________________________|\n  ");

   printf("\n");
   printf("\n");




  
  printf( RED "Schizzo preliminare\n" RESET );
  printf("\n");
  printf("Ragazzo:Hai sentito di Misaki?\n");
  sleep (3);
  printf("Ragazzo:Era al nono anno, nella sezione 3\n");
  sleep (3);
  printf("Ragazza:C'era qualcuno che si chiamava Misaki nella sezione 3?\n");
  sleep (3);
  printf("Ragazzo:E' successo 26 anni fa.\n");
  sleep (3);
  printf("Ragazzo:Fino al settimo grado, era una ragazza popolare\n");
  sleep (3);
  printf("Ragazzo:Era intelligente, carina e aveva una grande personalita'\n");
  sleep (3);
  printf("Ragazzo:Sia i professori che gli studenti l'adoravano.\n");
  sleep (3);
  printf("Ragazza:C'e' sempre qualcuno cosi' in ogni anno.\n");
  sleep (3);
  printf("Ragazzo:Pero' poco dopo l'inizio del nono anno...\n");
  sleep (3);
  printf("Ragazzo:Misaki mori'.\n");
  sleep (3);
  printf("Ragazza:Come e' successo?\n");
  sleep (3);
  printf("Ragazzo:Ho sentito che si e' trattato di un incidente\n");
  sleep (3);
  printf("Ragazzo:Ovviamente tutti quanti sono rimasti shokati\n");
  sleep (3);
  printf("Ragazzo:Fino a quando una persona ha detto.\n");
  sleep (3);
  printf("Ragazza:Detto cosa?\n");
  sleep (3);
  printf("Ragazzo:Ha puntato al banco di Misaki e ha detto:\n");
  sleep (3);
  printf("Ragazzo:'Misaki e' li'. 'Non e' morta.'\n");
  sleep (3);
  printf("Ragazza:Ed era cosi'...?\n");
  sleep (3);
  printf("Ragazzo:Beh, era solo una finta.\n");
  sleep (3);
  printf("Ragazzo:Ma da quel momento, la sezione 3 ha continuato a fingere che Misaki fosse ancora in vita.\n");
  sleep (3);
  printf("Ragazza:E' inquietante.\n");
  sleep (3);
  printf("Ragazzo:Hanno continuato a fingere fino alla graduazione.\n");
  sleep (3);
  printf("Ragazzo:Il preside ha perfino organizzato la cerimonia di graduazione facendo mettere la sedia di Misaki.\n");
  sleep (3);
  printf("Ragazza:E' una buona cosa no?\n");
  sleep (3);
  printf("Ragazzo:Se fosse stata la fine, si.\n");
  sleep (3);
  printf("Ragazza:C'e' dell'altro?\n");
  sleep (3);
  printf("Ragazzo:Il resto della storia e'...\n");
  sleep (4);
  system("cls");
}

void EP1 (void)
{
    system("cls");
    printf("\t.oPYo.  .oPYo.    .o\t\n");
    printf("\t8.      8    8  .  8\t\n");
    printf("\t`boo   o8YooP'     8\t\n");
    printf("\t.P      8          8\t\n");
    printf("\t8       8          8\t\n");
    printf("\t`YooP'  8          8\t\n");

    printf("\n");
    printf("\n");


    printf( RED "Ambientazione-Ospedale\n" RESET );
    printf("\n");
	printf("Reiko:Come ti senti? Ti fa ancora male?\n");
    sleep (3);
    fputs(Protagonista, stdout);printf(":Sto bene.\n");
    sleep (3);
    printf("Tamie:Mio dio, che modo per iniziare la tua vita qui.\n");
    sleep (3);
    printf("Tamie:Poverino\n");
    sleep (3);
    fputs(Protagonista, stdout);printf(":Um...\n");
    sleep (3);
    fputs(Protagonista, stdout);printf(":Scusami, nonna.\n");
    sleep (3);
    printf("Tamie:Per carita', no. Non devi preoccuparti.\n");
    sleep (3);
    printf("Tamie:Non puoi far nulla a riguardo.\n");
    sleep (3);
    fputs(Protagonista, stdout);printf(":Um, mio padre lo sa?\n");
    sleep (3);
    printf("Tamie:Non gliel'ho ancora detto.\n");
    sleep (3);
    printf("Tamie:Yousuke e' in India adesso, giusto?\n");
    sleep (3);
    printf("Reiko:Vuoi che gliel'ho dica? Ho il suo numero.\n");
    sleep (3);
    fputs(Protagonista, stdout);printf(":No, grazie. Lo chiamero' io.\n");
    sleep (3);
    printf("Reiko:E' la scelta migliore.\n");
    sleep (3);
    printf("Tamie:Quel Yousuke, Che uomo complicato.\n");
    sleep (3);
    printf("Tamie:Per tutto questo tempo da quando Ritsuko e' morta...\n");
    sleep (3);
    printf("Reiko:Quel fiume che scorre attraversando il centro della citta', e' il fiume Yomiyama.\n");
    sleep (3);
    printf("Reiko:Puoi vedere la zona dopo il fiume?\n");
    sleep (3);
    fputs(Protagonista, stdout);printf(":Um...\n");
    sleep (3);
    fputs(Protagonista, stdout);printf(":Intendi quella struttura?\n");
    sleep (3);
    printf("Reiko:Si.\n");
    sleep (3);
    printf("Reiko:Quella sara' la scuola dove andrai.\n");
    sleep (3);
    fputs(Protagonista, stdout);printf(":E' la stessa scuola dove sei andata tu Reiko?\n");
    sleep (3);
    printf("Reiko:Si. 14 anni fa.\n");
    sleep (3);
    fputs(Protagonista, stdout);printf(":Quindi, anche mia madre c'e' andata?\n");
    sleep (3);
    printf("Reiko:Esatto.");
    sleep (3);
    printf("Reiko:Anche mia sorella, Ritsuko, e' andata alla Yomi north.\n");
    sleep (3);
    fputs(Protagonista, stdout);printf(":Yomi North?\n");
    sleep (3);
    printf("Reiko:Yomiyama North Junior High.\n");
    sleep (3);
    fputs(Protagonista, stdout);printf(":Oh.\n");
    sleep (3);
    printf("Reiko:Le scuole pubbliche e private sono un po' diverse tra di loro,\n");
    sleep (3);
    printf("Reiko:ma ci si impiega poco per adattarsi.\n");
    sleep (3);
    printf("Reiko:Sono sicura che ti abbituerai in men che non si dica.\n");
    sleep (3);
    fputs(Protagonista, stdout);printf(":Lo spero.\n");
    sleep (3);
    printf("Reiko:Starai bene.\n");
    sleep (3);
    printf("Reiko:Quando sarai uscito dall'ospedale\n");
    sleep (3);
    printf("Reiko:Ti aiutero' a prepararti per la tua nuova vita alla Yami north.\n");
    sleep (3);
    printf("Mizuno:Oh! Adesso stai leggendo una novel di Stephen King, mister amante degli horror?\n");
    sleep (3);
    printf("Mizuno:Va bene, vi lascio da soli ragazzi.\n");
    sleep (3);
    fputs(Protagonista, stdout);printf(":Noi siamo studenti del nono anno, sezione 3 della scuola Yami north.\n");
    sleep (3);
    fputs(Protagonista, stdout);printf(":Capisco.\n");
    sleep (3);
    printf("Kazami:Sono Kazami. Kazami Tomohiko.\n");
    sleep (3);
    printf("Kazami:Lei e' Sakuragi.\n");
    sleep (3);
    printf("Yukari:Piacere di conoscerti. Sono Sakuragi Yuka\n");
    sleep (3);
    printf("Kazami:E lei e'--\n");
    sleep (3);
    printf("Izumi:Akazawa Izumi\n");
    sleep (3);
    fputs(Protagonista, stdout);printf(":Vi serve qualcosa?\n");
    sleep (3);
    printf("Kazami:Ah, si.\n");
    sleep (3);
    printf("Kazami:Sakuragi e io siamo i rappresentanti di classe.\n");
    sleep (3);
    printf("Kazami:Akazawa e' in carica delle contromisure.\n");
    sleep (3);
    printf("Kazami:Ci troviamo qui oggi per rappresentare la sezione 3.\n");
    sleep (3);
    fputs(Protagonista, stdout);printf(":Contromisure?\n");
    sleep (3);
    printf("Izumi:Ti sei appena trasferito, giusto?\n");
    sleep (3);
    printf("Yukari:Abbiamo sentito che dovevi iniziare scuola il lunedi', ma sei improvvisamente caduto in malattia.\n");
    sleep (3);
    printf("Yukari:Cosi' abbiamo deciso di venirti a trovare come veci dell'intera classe.\n");
    sleep (3);
    printf("Yukari:Tieni. Questi son da tutti noi.\n");
    sleep (3);
    printf("*Yukari gli li pone un mazzo di fiori*\n");
    sleep (3);
    printf("Yukari:Sei venuto qui da Tokyo, giusto?\n");
    sleep (3);
    fputs(Protagonista, stdout);printf(":Si.\n");
    sleep (3);
    printf("Yukari:e vieni a studiare in una scuola privata?\n");
    sleep (3);
    printf("Yukari:Perche' ti sei trasferito?\n");
    sleep (3);
    fputs(Protagonista, stdout);printf(":Per motivi di famiglia.\n");
    sleep (3);
    printf("Yukari:E' la prima volta che vieni a vivere a Yomiyama?\n");
    sleep (3);
    fputs(Protagonista, stdout);printf(":Si.\n");
    sleep (3);
    printf("Yukari:Oh. Pensavo che tu avessi gia' vissuto qui.\n");
    sleep (3);
    fputs(Protagonista, stdout);printf(":L'ho visitata come zona,\n");
    sleep (3);
    fputs(Protagonista, stdout);printf(":ma non ho mai vissuto qui.\n");
    sleep (3);
    printf("Izumi:Per quanto tempo sei stato qui?\n");
    sleep (3);
    fputs(Protagonista, stdout);printf(":Non posso dirlo.\n");
    sleep (3);
    fputs(Protagonista, stdout);printf(":Non ricordo.\n");
    sleep (3);
    fputs(Protagonista, stdout);printf(":Ero molto piccolo, forse... un bel po' di tempo fa?\n");
    sleep (3);
    printf("Kazami:Tieni.\n");
    sleep (3);
    printf("*Kazami gli pone dei fogli*\n");
    sleep (3);
    printf("Kazami:Ho preso degli appunti dall'inizio del primo semestre.\n");
    sleep (3);
    fputs(Protagonista, stdout);printf(":Grazie!\n");
    sleep (3);
    fputs(Protagonista, stdout);printf(":Penso che il mio primo giorno di scuola sarà dopo la Golden Week,\n");
    sleep (3);
    fputs(Protagonista, stdout);printf(":quindi ci vedremo poi.\n");
    sleep (3);
    printf("Kazami:Um, Sakakibara?\n");
    sleep (3);
    fputs(Protagonista, stdout);printf(":Si?\n");
    sleep (3);
    printf("Kazami:Beh...\n");
    sleep (3);
    printf("Izumi:Sakakiba--\n");
    sleep (3);
    printf("Izumi:Il tuo nome e' ");fputs(Protagonista, stdout);printf(", giusto?\n");
    sleep (3);
    printf("Izumi:Possiamo chiamarti ");fputs(Protagonista, stdout);printf("\n");
    sleep (3);
    fputs(Protagonista, stdout);printf(":Certo.\n");
    sleep (3);
    printf("Izumi:Ti faremo sapere di noi in futuro,");fputs(Protagonista, stdout);printf("\n");
    sleep (3);
    fputs(Protagonista, stdout);printf(":Faro' lo stesso. Grazie.\n");
    sleep (3);
    printf("Izumi:Sei sicuro di non aver mai vissuto qui,");fputs(Protagonista, stdout);printf("\n");
    sleep (3);
    fputs(Protagonista, stdout);printf(":Non penso.\n");
    sleep (3);
    printf(RED "\n*");
    fputs(Protagonista, stdout);printf( RED " Si ferma a telefonare il padre*\n" RESET );
    printf("\n" RESET);
    printf(RED "*Mentre ritorna in stanza tramite l'ascensore dopo aver parlato col padre al telefono, incontra una misteriosa ragazza*\n" RESET );
    printf("\n");
    fputs(Protagonista, stdout);printf(":M-Mi scusi.\n");
    sleep (4);
    fputs(Protagonista, stdout);printf(":Sei una studentessa della Yami north?\n");
    sleep (4);
    fputs(Protagonista, stdout);printf(":Devi fare qualcosa al secondo piano del seminterrato?\n");
    sleep (3);
    printf("???:Si.\n");
    sleep (3);
    fputs(Protagonista, stdout);printf(":Ma il secondo piano e'...\n");
    sleep (3);
    printf("???:Devo consegnare una cosa.\n");
    sleep (3);
    printf("???:La mia povera meta'...\n");
    sleep (3);
    printf("???:mi sta aspettando.\n");
    printf("\n");
    printf(RED " *Mentre la ragazza va verso la stanza dove si deve dirigere* \n" RESET);
    printf("\n");
    fputs(Protagonista, stdout);printf(":Hey, aspetta.\n");
    sleep (3);
    fputs(Protagonista, stdout);printf(":Qual'e' il tuo nome?\n");
    sleep (3);
    printf("Mei:Mei.\n");
    sleep (3);
    printf("Mei:Misaki Mei.\n");
    printf(RED "\n*");
    fputs(Protagonista, stdout);printf(RED " viene dimesso e ritorna a casa* \n");
    printf("\n" RESET);
    printf(RED "*Il giorno dopo*\n" RESET);
    printf("\n");
    printf("Bird:Buongiorno, Rei!\n");
    sleep (3);
    printf("Bird:Buongiorno, Rei!\n");
    sleep (3);
    printf("Bird:Come stai?\n");
    sleep (3);
    printf("Bird:Buongiorno!\n");
    sleep (3);
    printf("Bird:Buongiorno!\n");
    sleep (3);
    printf("Yousuke:Buongiorno! Come stai?\n");
    sleep (3);
    fputs(Protagonista, stdout);printf(":Buongiorno.\n");
    sleep (3);
    printf("Yousuke:Sono le due qui.\n");
    sleep (3);
    printf("Yousuke:In india fa telmente caldo che sembra l'inferno!\n");
    sleep (3);
    fputs(Protagonista, stdout);printf(":Come va?\n");
    sleep (3);
    printf("Yousuke:Stai per andare a scuola, vero?\n");
    sleep (3);
    printf("Yousuke:Ti ho chiamato per augurarti buona fortuna. Stammi bene!\n");
    sleep (3);
    fputs(Protagonista, stdout);printf(":Oh, certo\n");
    sleep (3);
    printf("Yousuke:Come ti senti?\n");
    sleep (3);
    printf("Yousuke:Come ti senti dopo che sei uscito dall'ospedale?\n");
    sleep (3);
    fputs(Protagonista, stdout);printf(":Mi sento meglio.\n");
    sleep (3);
    fputs(Protagonista, stdout);printf(":Non devi preoccuparti.\n");
    sleep (3);
    printf("Yousuke:Si, pneumotorace non e' la fine del mondo.\n");
    sleep (3);
    printf("Yousuke:Gia' e' successo da piccolo.\n");
    sleep (3);
    fputs(Protagonista, stdout);printf(":Davvero? Non lo sapevo.\n");
    sleep (3);
    printf("Yousuke:Non te l'ho detto.\n");
    sleep (3);
    printf("Yousuke:Non volevo che qualcuno ti dicesse che e' ereditario.\n");
    sleep (3);
    fputs(Protagonista, stdout);printf(":Davvero?\n");
    sleep (3);
    printf("Yousuke:L'ho avuto due volte, ma poi non mi e' piu' capitato.\n");
    sleep (3);
    printf("Yousuke:Quindi se e' ereditario non devi piu' preoccuparti, Dovresti aver finito.\n");
    sleep (3);
    fputs(Protagonista, stdout);printf(":Lo spero davvero.\n");
    sleep (3);
    printf("Yousuke:Pensa come se fosse qualcosa del passato,\n");
    sleep (3);
    printf("Yousuke:e goditi la tua vita.\n");
    sleep (3);
    fputs(Protagonista, stdout);printf(":Non lascero' che interferisca.\n");
    sleep (3);
    printf("Yousuke:Bravo ragazzo! Saluta i nonni da parte mia!\n");
    sleep (3);
    printf("Yousuke:Oh cielo, in India fa davvero caldo!\n");
    sleep (3);
    printf("Yousuke:Si, pneumotorace non e' la fine del mondo.\n");
    sleep (3);
    printf("Bird:Buongiorno, Rei! Buongiorno!\n");
    sleep (3);
    fputs(Protagonista, stdout);printf(":Sai che Rei e' il tuo nome.\n");
    sleep (3);
    printf("Rei:Dai su. Tirati su!\n");
    sleep (3);
    fputs(Protagonista, stdout);printf(":Certo. Grazie.\n");
    sleep (3);
    printf("Reiko:Andando avanti.\n");
    sleep (3);
    printf("Reiko:La terza regola che hai bisogno di conoscere per vivere al meglio alla Yami north e':\n");
    sleep (3);
    printf("Reiko:Sempre seguire le regole.\n");
    sleep (3);
    fputs(Protagonista, stdout);printf(":Okay.\n");
    sleep (3);
    printf("Reiko:Le cose sono diverse da Tokyo,\n");
    sleep (3);
    printf("Reiko:ma qui alla Yomiyami, il gruppo vale piu della singola persona.\n");
    sleep (3);
    fputs(Protagonista, stdout);printf(":Penso di potercela fare.\n");
    sleep (3);
    printf("Reiko:Bene.\n");
    sleep (3);
    printf("Reiko:Adesso, la quarta regola da sapere e'--\n");
    sleep (3);
    printf("Tamie:");fputs(Protagonista, stdout);printf("\n");
    sleep (3); 
    printf("Tamie:La colazione e' pronta!\n");
    sleep (3);
    printf("Ryouhei:Ha detto, ''La colazione e' pronta'', ");fputs(Protagonista, stdout);printf(". \n");
    sleep (3);
    fputs(Protagonista, stdout);printf(":Buongiorno, nonno.\n");
    sleep (3);
    printf("Ryouhei:Buongiorno.\n");
    sleep (3);
    printf("Ryouhei:Stai tornando in ospedale, oggi?\n");
    sleep (3);
    fputs(Protagonista, stdout);printf(":No, sono stato dimesso.\n");
    sleep (3);
    fputs(Protagonista, stdout);printf(":Oggi inizio scuola.\n");
    sleep (3);
    printf("Ryouhei:Ah, scuola.\n");
    sleep (3);
    printf("Ryouhei:Sei gia' alle medie, giusto?\n");
    sleep (3);
    printf("Ryouhei:Si, si.\n");
    sleep (3);
    printf("Ryouhei:Deve essere bello essere giovani.\n");
    sleep (3);
    fputs(Protagonista, stdout);printf(":Sono al nono anno.\n");
    sleep (3);
    fputs(Protagonista, stdout);printf(":L'anno prossimo faro' le superiori.\n");
    sleep (3);
    printf("Ryouhei:Se solo non fosse successo niente a Ritsuko...\n");
    sleep (3);
    printf("Tamie:");fputs(Protagonista, stdout);printf("Vai a fare colazione.\n");
    sleep (3);
    fputs(Protagonista, stdout);printf(":Sto venendo!\n");
    printf(RED "\n*");
    fputs(Protagonista, stdout);printf(RED " Va a scuola e nel corridoio*\n" RESET);
    printf("\n" RESET);
    printf("Kubo:Spero che andrai d'accordo con tutti.\n");
    sleep (3);
    printf("Kubo:Se hai qualunque problema avvisami.\n");
    sleep (3);
    printf("Kubo:perfavore non esitare quando devi parlare con me.\n");
    sleep (3);
    printf("Kubo:Puoi anche parlare alla professoressa Mikami, la cordinatrice del nono grado.\n");
    sleep (3);
    fputs(Protagonista, stdout);printf(":Va bene professore. Grazie.\n");
    sleep (3);
    printf("Mikami:Non vediamo l'ora di averti con noi.\n");
    sleep (3);


}

