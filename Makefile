all:
	g++ -c src2/*.cpp
	mv *.o out
	g++ out/* main.cpp -o main
