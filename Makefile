default: *.cpp
	g++ -std=c++11 -o tp2.out *.cpp

run: *.cpp
	@g++ -std=c++11 -o tp2.out *.cpp
	@./tp2.out