./bin/sha1 : ./object/main.o ./object/sha1.o ./object/asc2hex.o
	gcc -o ./bin/sha1 ./object/main.o ./object/sha1.o ./object/asc2hex.o
./object/sha1.o : ./src/sha1.c
	gcc -c ./src/sha1.c -o ./object/sha1.o
./object/main.o : ./src/main.c
	gcc -c ./src/main.c -o ./object/main.o
./object/asc2hex.o : ./src/asc2hex.c
	gcc -c ./src/asc2hex.c -o ./object/asc2hex.o
clean:
	rm ./object/*.o ./bin/sha1