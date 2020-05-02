.PHONY: 
	clean
	run

work: work.cpp
	g++ -o work work.cpp

run:
	./work
	
clean:
	rm work



