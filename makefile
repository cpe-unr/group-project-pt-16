audioprocessor: main.cpp wav.o wavMono.o wavStereo.o
	g++ -std=c++11 -o audioprocessor main.cpp wav.o wavMono.o wavStereo.o

wav.o: wav.cpp wav.h wavHeader.h
	g++ -std=c++11 -c wav.cpp

wavMono.o: wavMono.cpp wavMono.h
	g++ -std=c++11 -c wavMono.cpp

wavStereo.o: wavStereo.cpp wavStereo.h
	g++ -std=c++11 -c wavStereo.cpp

clean:
	rm *.o audioprocessor
