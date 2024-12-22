all:
	g++ -w -c FileName.cpp -o FileName
	g++ -w -c Source.cpp -o Source
	g++ -w -g FileName Source -o main
	./main

clean:
	rm -rf *.o 