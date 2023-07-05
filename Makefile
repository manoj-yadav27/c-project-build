ABC.exe:main.o big2.0 fact.o palindrome.o rev.o add2.o fibonacci.o sortnum.o big3.o
	gcc -o ABC.exe main.o big2.o fact.o palindrome.o rev.o add2.o fibonacci.o sortnum.o big3.o
main.o:main.c
	gcc -c main.c
big2.0:big2.c
	gcc -c big2.c
fact.o:fact.c
	gcc -c fact.c
palindrome.o:palindrome.c
	gcc -c palindrome.c
rev.o:rev.c
	gcc -c rev.c
add2.o:add2.c
	gcc -c add2.c
fibonacci.o:fibonacci.c
	gcc -c fibonacci.c
sortnum.o:sortnum.c
	gcc -c sortnum.c
big3.o:big3.c
	gcc -c big3.c
clean:
	rm -rf *.o ABC.exe
