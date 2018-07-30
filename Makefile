all: convert vectors 

vectors: vectors.cpp
	g++ -std=c++11 vectors.cpp -o vectors
	
convert: convert.cpp
	g++ -std=c++11 convert.cpp -o convert

clean:
	rm -f convert
	rm -f vectors
