make: main.o ./affichages/affichageDonnees.o ./pistes/piste.o ./avions/avion.o 
	gcc -o main main.o ./affichages/affichageDonnees.o ./pistes/piste.o ./avions/avion.o

main.o: main.c 
	gcc -Wall -c main.c

affichageDonnees.o: ./affichages/affichageDonnees.c -g
	gcc -Wall -c ./affichages/affichageDonnees.c

piste.o: ./pistes/piste.c -g
	gcc -Wall -c ./pistes/piste.c

avion.o: ./avions/avion.c -g
	gcc -Wall -c ./avions/avion.c

clean: rm main *.o