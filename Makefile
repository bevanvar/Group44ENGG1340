functions.o: functions.cpp Inventory.h
	g++ -c functions.cpp

main.o: main.cpp Inventory.h
	g++ -c main.cpp

filing.o: filing.cpp AccountHolder.h
	g++ -c filing.cpp

executable: main.o filing.o functions.o
	g++ main.o filing.o functions.o -o $@

run: executable
	./executable
  
clean:
	rm executable functions.o main.o filing.o

.PHONY: run clean
