make: main.o ./traitement/traitement.o ./affichages/affichageDonnees.o ./pistes/piste.o ./parking/parking.o ./avions/avion.o 
	gcc -o main main.o ./traitement/traitement.o ./affichages/affichageDonnees.o ./pistes/piste.o ./parking/parking.o ./avions/avion.o

main.o: main.c 
	gcc -Wall -c main.c

traitement.o: ./traitement/traitement.c -g
	gcc -Wall -c ./traitement/traitement.c

affichageDonnees.o: ./affichages/affichageDonnees.c -g
	gcc -Wall -c ./affichages/affichageDonnees.c

piste.o: ./pistes/piste.c -g
	gcc -Wall -c ./pistes/piste.c
	
parking.o: ./parking/parking.c -g
	gcc -Wall -c ./parking/parking.c

avion.o: ./avions/avion.c -g
	gcc -Wall -c ./avions/avion.c


clean: rm main *.o
