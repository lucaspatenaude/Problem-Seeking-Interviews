all: script

script: script.cpp
	g++ script.cpp -o script

clean:
	rm -f script