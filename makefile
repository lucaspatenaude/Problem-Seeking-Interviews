all: start-survey

start-survey: build/survey.o build/questions.o
	g++ build/survey.o build/questions.o -o start-survey

build/survey.o: survey.cpp questions/questions.h
	mkdir -p build
	g++ -c survey.cpp -o build/survey.o

build/questions.o: questions/questions.cpp questions/questions.h
	mkdir -p build
	g++ -c questions/questions.cpp -o build/questions.o

clean:
	rm -rf build start-survey