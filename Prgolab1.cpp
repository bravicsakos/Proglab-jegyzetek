#include <stdio.h>
/*int lnko(int a,int b){
		int min;
		if(a<b){
			min=a;
		}
		else{
			min=b;
		}
		while(1){
			if(a%min==0 && b%min==0){		
			return min;
			}
			min--;
		}
		
	}*/
int main(){
	/*int b[10];
	for (int i=0;i<10;i++){
		scanf("%d",&b[i]);
	}
	for (int j=9;j>-1;j--){
		printf("%d",b[j]);
	}*/ 						//cs�kken�bevisszair
	/*int n;
	while(1){
		
		scanf("%d",&n);
		
		if (n==0){
			break;
		}
		
		int tomb[n];
		for (int i=0;i<n;i++){
			scanf("%d",&tomb[i]);
		}
		
		if (tomb[0]==tomb[n-1]){
			printf("yes");
		}
		else {
			printf("no");
		}
	}*/						//szelso ertekek
	
	/*
		
	T�rtek
	�rjon programot, amely a standard bemenetr�l soronk�nt n�gy pozit�v eg�sz sz�mot olvas be!
	A program az egy sorban szerepl� n�gy sz�m k�z�l az els� k�t sz�mot egy t�rt sz�ml�l�jak�nt
	�s nevez�jek�nt �rtelmezze (ebben a sorrendben), a harmadik �s negyedik sz�mot pedig egy m�sik
	t�rt sz�ml�l�jak�nt �s nevez�jek�nt �rtelmezze (ebben a sorrendben)! A program �rjon a 
	standard kimenetre soronk�nt egy < (kisebb), > (nagyobb) vagy = (egyenl�s�gjel) karaktert att�l
	f�gg�en, hogy az els� t�rt �rt�ke kisebb vagy nagyobb a m�sodik t�rt �rt�k�n�l, vagy esetleg 
	egyenl� vele! A bemenet v�g�t egy olyan sor jelzi, amely n�gy darab 0-s sz�mot tartalmaz, ezt
	a sort a programnak m�r nem kell feldolgoznia.

	P�lda bemenet
	4 3 5 3
	4 3 2 3
	1 2 3 4
	1 2 3 6
	0 0 0 0
	A p�lda bemenethez tartoz� kimenet
	<
	>
	<
	=
	
	
	float n1,n2,n3,n4;
	while(1){

		scanf("%f",&n1);
		scanf("%f",&n2);
		scanf("%f",&n3);
		scanf("%f",&n4);
		
		if(n1==0 && n2==0 && n3==0 && n4==0){
			break;
		}
		
		if(n1/n2<n3/n4){
			printf("<");
		}
		else if (n1/n2>n3/n4){
			printf(">");
		}
		else {
			printf("=");
		}
		
	}*/
	
	/*float n1,n2,n3,n4;
	while(1){

		scanf("%f %f %f %f",&n1,&n2,&n3,&n4);
	
		
		if(n1==0 && n2==0 && n3==0 && n4==0){
			break;
		}
		
		int szamlalo1=n1*n4;
		int szamlalo2=n3*n2;
		int nevezo2=n2*n4;
		
		printf("%d/%d",szamlalo1+szamlalo2,nevezo2);
		int vmi = lnko(n2,n4);
		int nevezo =n2/vmi;
		printf("%d/%d",szamlalo1/vmi+szamlalo2/vmi,nevezo/vmi);
	}*/							//t�rtek 2.0
	
	/*int ora,perc;
	while(scanf("%d.%d",&ora,&perc)!=EOF){
		if(ora<13 && ora>11.59){
			if(perc<10){
				printf("%d.0%dpm",ora,perc);
			}
			else{
			printf("%d.%dpm",ora,perc);
			}
		}
		else if (ora>11){
			if(perc<10){
				printf("%d.0%dpm",ora-12,perc);
			}
			else{
			printf("%d.%dpm",ora-12,perc);
			}
		}
		else if(ora<1){
			if(perc<10){
				printf("%d.0%dam",ora+12,perc);
			}
			else{	
			printf("%d.%dam",ora+12,perc);
		}
		}
		else{
			if(perc<10){
				printf("%d.0%dam",ora,perc);
			}
			else{
					printf("%d.%dam",ora,perc);
			}
		
		}
	}*/
	
		
	/*Id�pontok
	�rjon programot, amely a standard bemenetr�l soronk�nt n�gy eg�sz sz�mot olvas be! 
	A sz�mok kettes�vel a nap egy-egy id�pontj�t �rj�k le, �ra �s perc �rt�kek form�j�ban. 
	Az �ra 0 �s 23, a perc 0 �s 59 k�z� esik. A program �rjon a standard kimenetre soronk�nt
	egy < (kisebb), > (nagyobb) vagy = (egyenl�s�gjel) karaktert att�l f�gg�en, hogy
	a soronk�nt beolvasott k�t id�pont k�z�l az els� kor�bbi vagy k�s�bbi a m�sodikn�l,
	vagy esetleg azonos vele! A bemenetet egy olyan sor z�rja, amely egyetlen �1-es sz�mot
	tartalmaz, ezt a sort a programnak m�r nem kell feldolgoznia.

	P�lda bemenet
	19 20 21 22
	10 00 9 59
	0 0 0 0
	-1
	<
	>
	=
	
	int n1,n2,n3,n4;
	while(1){
		scanf("%d",&n1);
		if (n1==-1){
			break;
		}
		scanf("%d %d %d",&n2,&n3,&n4);
		if(n1==n3){
			if(n2==n4){
				printf("=");
			}
			else if(n2>n4){
				printf(">");
			}
			else{
				printf("<");
			}
		}
		else if(n1>n3){
			printf(">");
		}
		else{
			printf("<");
		}
	}*/
		
	/*G�lk�l�nbs�g
	�rjon programot, amely a standard bemenetr�l �llom�nyv�gjelig (EOF) egy
	 futballcsapatnak a bajnoks�gban el�rt eredm�nyeit olvassa be! Az eredm�nyek
	  �X:Y� alak�ak, ahol mind X, mind pedig Y nemnegat�v eg�sz sz�mok.
	   X a csapat �ltal r�gott, Y a csapat �ltal kapott g�lok sz�m�t jel�li.
	    Ha X �rt�ke nagyobb Y-n�l, akkor a m�rk�z�st a vizsg�lt futballcsapat 
		nyerte, ha X egyenl� Y-nal, akkor d�ntetlen eredm�ny sz�letett, m�g ha
		 X kisebb Y-n�l, akkor az aktu�lis ellenf�l nyert. A program �sszegezze 
		 a r�gott �s kapott g�lokat, �s a bemenethez hasonl� form�ban �rja azt ki 
		 a standard kimenet els� sor�ba! A standard kimenet m�sodik sor�ba az �sszes
		  meccs k�z�l a legnagyobb g�lk�l�nbs�g� meccs g�lk�l�nbs�g�nek �rt�ke ker�lj�n!
		   G�lk�l�nbs�g alatt minden esetben az X�Y �rt�ket �rtj�k.

	P�lda bemenet:
	5:3
	0:10
	2:2
	4:1
	A p�lda bemenethez tartoz� kimenet:
	11:16
	3

	int lott,kapott;
	int osszlott=0,osszkapott=0;
	int kulonb=0; //INT_MIN (stdlib.h)
	int seged;
	while(scanf("%d:%d",&lott,&kapott)!=EOF){
		osszlott+=lott;
		osszkapott+=kapott;
		seged=lott-kapott;
		if (seged>kulonb){
			kulonb=seged;
		}
		
	}
	printf("%d:%d\n",osszlott,osszkapott);
	printf("%d",kulonb);
	*/
	
	/*Tornasor
	�rjon programot, amely a standard bemenetr�l soronk�nt egy vagy t�bb nemnegat�v eg�sz sz�mot olvas!
	 Ha a sor els�k�nt beolvasott sz�ma 0, a program fejezze be a m�k�d�s�t. Ha a sor els� sz�ma egy pozit�v sz�m, 
	 akkor az azt jelzi, hogy a sorban h�ny tov�bbi sz�m tal�lhat�. A sorban tal�lhat� tov�bbi sz�mok egy k�z�piskolai
	  oszt�ly di�kjainak testmagass�g�t adj�k meg cm-ben. A program v�lassza ki az egyes oszt�lyok legalacsonyabb �s 
	  legmagasabb tanul�j�nak a magass�g�t, �s ebben a sorrendben �rja ki azokat a standard kimenetre, a k�t �rt�ket
	   pontosan egy sz�k�z karakterrel elv�lasztva egym�st�l, oszt�lyonk�nt k�l�n sorban!

	P�lda bemenet
	10 162 172 171 168 155 179 172 170 169 190
	5 168 172 184 159 163
	7 180 178 164 170 168 178 173
	0
	let�lt�s sz�veges �llom�nyk�nt
	A p�lda bemenethez tartoz� kimenet
	155 190
	159 184
	164 180

	int n;
	int min=0;
	int max=300;
	while(1){
		scanf("%d",&n);
		if (n==0){
			break;
		}
		int tomb[n];
		min=300;
		max=0;
		for (int i=0;i<n;i++){
			scanf("%d",&tomb[i]);
			
			if(tomb[i]<min){
				min=tomb[i];
			}
			else if(tomb[i]>max){
				max=tomb[i];
			}
			
		}
		printf("%d %d",min,max);
		
		
	}*/
	
		
	/*El�jelek
	�rjon programot, amely a standard bemenetr�l soronk�nt eg�sz sz�mokat olvas be!
	 Minden sorban az els� sz�m azt mondja meg, hogy h�ny tov�bbi sz�m tal�lhat� m�g 
	 az adott sorban. A program minden sor eset�n a m�sodik sz�mt�l kezd�d�en sz�molja
	  �ssze a pozit�v �s a negat�v sz�mokat, majd �rja a standard kimenetre azoknak a 
	  soroknak a sorsz�m�t, amelyekben t�bb pozit�v sz�mot tal�lt, mint negat�vat! A 
	  bemenetet egy olyan sor z�rja, amely csak egyetlen 0-t tartalmaz, ezt a sort a 
	  programnak m�r nem kell feldolgoznia.

	P�lda bemenet
	4 2 5 -2 1
	5 -11 -5 133 -62 23
	1 1
	4 -1 0 1 2
	3 -1 0 1
	0
	A p�lda bemenethez tartoz� kimenet
	1
	3
	4
	
	int n;
	int counter=0;
	while(1){
		int poz=0;
		int neg=0;
		scanf("%d",&n);
		if (n==0){
			break;
		}
		int tomb[n];
		
		for (int i=0;i<n;i++){
			scanf("%d",&tomb[i]);
			if (tomb[i]>0){
				poz++;
			}
			else if (tomb[i]<0){
				neg++;
			}
			
		}
		counter++;
		if (poz>neg){
			printf("%d\n",counter);
		}
		
		
		
	}*/
	
		
	/*Leghosszabb monoton r�szlista
	�rjon programot, amely a standard bemenetr�l �llom�nyv�gjelig (EOF) egym�st�l feh�r 
	karakterekkel (sz�k�z, �jsor, tabul�tor) elv�lasztott eg�sz sz�mokat olvas, �s a 
	standard kimenetre �rja a beolvasott sz�mokb�l alkotott leghosszabb monoton n�vekv� r�szlist
	 (egym�st k�vet� sz�mok) hossz�t (m�s szavakkal: darab- vagy elemsz�m�t)! Egy monoton n�vekv�
	  sorozat minden elem�re � kiv�ve a legels�t � igaz, hogy az adott elem �rt�ke nagyobb az �t 
	  megel�z� elem �rt�k�n�l vagy egyenl� vele.

	P�lda bemenet:
	4     7
    	8    3 10
	10
	17  9
	10 11
	A p�lda bemenethez tartoz� kimenet:
	4

	int n;
	int seged=-1;
	int counter=1;
	int seged2=0;
	while(scanf("%d",&n)!=EOF){
		if (seged!=-1 && n>=seged){
			counter++;
		}
		else {
			counter=1;
		}
		if(seged2<counter){
			seged2=counter;
		}
		seged=n;		
	}
	printf("%d",seged2);
	*/
	int n;
	int boolean=0;
	int sajt=0;
	while(1){
		scanf("%d",&n);
		if (n==0){
			break;
		}
			int tomb[n];
			for (int i=0;i<n;i++){
				scanf("%d",&tomb[i]);
				
			}
			for(int j=0;j<n-1;j++){
				if (boolean==0){
					if (tomb[j]>tomb[j+1]){
						boolean=1;	
					}
					else if(tomb[j]<tomb[j+1]){
						boolean=-1;
					}
				}
				else{
					if(boolean==1 && tomb[j]<tomb[j+1]){
						printf("nem monoton");
						sajt=1;
						break;
						
					}
					else if (boolean==-1 && tomb[j]>tomb[j+1]){
						printf("nem monoton");
						sajt=1;
						break;
					}
				}
			}
			if(sajt==0){
				printf("monoton");
			}
		
	}	
	return 0;
	
}
