.PHONY: 
	clean
	run

build:work.cpp
	g++ -o work work.cpp
	./work
	rm work

work: work.cpp
	g++ -o work work.cpp

run:
	./work
	
clean:
	rm work



