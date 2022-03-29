TARGET=./bin/colle

C=gcc -Wall -Wextra -Werror

$(TARGET): colle.c colle0.c colle1.c colle2.c colle3.c colle4.c ./bin/colle00 ./bin/colle01 ./bin/colle02 ./bin/colle03 ./bin/colle04
	$(C) colle.c colle0.c colle1.c colle2.c colle3.c colle4.c -o ./bin/colle

./bin/colle00: colle-00.c
	$(C) colle-00.c -o ./bin/colle00

./bin/colle01: colle-01.c
	$(C) colle-01.c -o ./bin/colle01

./bin/colle02: colle-02.c
	$(C) colle-02.c -o ./bin/colle02

./bin/colle03: colle-03.c
	$(C) colle-03.c -o ./bin/colle03

./bin/colle04: colle-04.c
	$(C) colle-04.c -o ./bin/colle04

clean:
	rm -f ./bin/*

fclean: clean
	rm -f $(TARGET)