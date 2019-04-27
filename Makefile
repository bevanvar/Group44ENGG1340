main.o: main.cpp Inventory.h
				g++ -c main.cpp

inventorysystem: main.o
				g++ main.o -o $@

run: inventorysystem
		./inventorysystem

clean: rm inventorysystem main.o Inventory o

.PHONY: run clean

#enter "make run" in the terminal to build the executable
