

main.o: main.cpp Inventory.h
	g++ -c main.cpp

filing.o: filing.cpp AccountHolder.h
	g++ -c filing.cpp

executable: main.o filing.o 
	g++ main.o filing.o -o $@

run: executable
	./executable
  
clean:
	rm executable main.o filing.o

.PHONY: run clean
