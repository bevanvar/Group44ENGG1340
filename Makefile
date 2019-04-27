Inventory.o: Inventory.cpp Inventory.h
		g++ -c Inventory.cpp

main.o: main.cpp Inventory.h
		g++ -c main.cpp

inventorysystem: Inventory.o main.o
		g++ Inventory.o main.o -o $@

run: inventorysystem
		./inventorysystem

clean: rm inventorysystem main.o Inventory o

.PHONY: run clean
