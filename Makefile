
# executable file to create and its dependancies
prog : driver_phase1.o driver_phase2.o driver_phase3.o Container.o Files.o Algorithms.o
	g++ -std=c++11 -o prog driver_phase1.o Container.o Files.o 

# file dependencies
driver_phase1.o : Container.h Files.h
	g++ -std=c++11 -c driver_phase1.cpp
driver_phase2.o : Container.h Files.h
	g++ -std=c++11 -c driver_phase2.cpp
driver_phase3.o : Container.h Files.h Algorithms.h
	g++ -std=c++11 -c driver_phase3.cpp
Files.o : Files.h
	g++ -std=c++11 -c Files.cpp	
Container.o : Container.h
	g++ -std=c++11 -c Container.cpp
Algorithms.o : Algorithms.h
	g++ -std=c++11 -c Algorithms.cpp

# files to remove
clean:
	rm driver_phase1.o driver_phase2.o Files.o Container.o
	rm prog
