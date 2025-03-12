all: main.exe

main.exe: main.o Animal.o Attaque.o Lion.o Ours.o Loup.o Pierre.o
	g++ -o main.exe main.o Animal.o Attaque.o Lion.o Ours.o Loup.o Pierre.o

main.o: main.cpp
	g++ -c main.cpp

Animal.o: Animal.cpp
	g++ -c Animal.cpp

Attaque.o: Attaque.cpp
	g++ -c Attaque.cpp

Lion.o: Lion.cpp
	g++ -c Lion.cpp

Ours.o: Ours.cpp
	g++ -c Ours.cpp

Loup.o: Loup.cpp
	g++ -c Loup.cpp

Pierre.o: Pierre.cpp
	g++ -c Pierre.cpp