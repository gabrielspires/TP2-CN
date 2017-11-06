default: *.cpp
	clang++ -std=c++11 -o tp2.out *.cpp

val: *.cpp
	g++ -g -std=c++11 -o tp2.out *.cpp
	valgrind --leak-check=full --track-origins=yes --show-leak-kinds=all ./tp2.out data/SJC1.dat

run:
	@./tp2.out data/SJC0.dat
	@#./tp2.out data/SJC1.dat
	@#./tp2.out data/SJC2.dat
	@#./tp2.out data/SJC3b.dat
