default: *.cpp
	g++ -std=c++11 -o tp2.out *.cpp

run: *.cpp
	@g++ -std=c++11 -o tp2.out *.cpp
	@./tp2.out data/SJC1.dat
	@#./tp2.out data/SJC2.dat
	@#./tp2.out data/SJC3b.dat