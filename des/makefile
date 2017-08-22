./bin/des : ./object/main.o ./object/DES_Fun.o 
	gcc -o ./bin/des ./object/main.o ./object/DES_Fun.o
./object/DES_Fun.o : ./src/DES_Fun.c
	gcc -c ./src/DES_Fun.c -o ./object/DES_Fun.o
./object/main.o : ./src/main.c
	gcc -c ./src/main.c -o ./object/main.o
clean:
	rm ./object/*.o ./bin/des