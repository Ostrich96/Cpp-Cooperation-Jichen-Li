geometry: main.o cube.o cylinder.o
	g++ main.o cube.o cylinder.o -o geometry

main.o: main.cc cube.hh cylinder.hh
	g++  -c main.cc

cube.o: cube.cc cube.hh
	g++ -c cube.cc

cylinder.o: cylinder.cc cylinder.hh
	g++ -c cylinder.cc

clean:
	rm *.o geometry *.stl
