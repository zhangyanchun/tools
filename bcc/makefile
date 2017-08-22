./bin/bcc : ./object/main.o ./object/bcc.o ./object/asc2hex.o
	gcc -o ./bin/bcc ./object/main.o ./object/bcc.o ./object/asc2hex.o
./object/bcc.o : ./src/bcc.c
	gcc -c ./src/bcc.c -o ./object/bcc.o
./object/asc2hex.o : ./src/asc2hex.c
	gcc -c ./src/asc2hex.c -o ./object/asc2hex.o
./object/main.o : ./src/main.c
	gcc -c ./src/main.c -o ./object/main.o
clean:
	rm ./object/*.o ./bin/bcc