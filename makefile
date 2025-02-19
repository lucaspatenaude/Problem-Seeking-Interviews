all: script

script: build/script.o build/questions.o
	g++ build/script.o build/questions.o -o script

build/script.o: script.cpp questions/questions.h
	mkdir -p build
	g++ -c script.cpp -o build/script.o

build/questions.o: questions/questions.cpp questions/questions.h
	mkdir -p build
	g++ -c questions/questions.cpp -o build/questions.o

clean:
	rm -rf build script