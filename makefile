audioprocessor: main.cpp wav.a echo.o noiseGate.o wavMono.o wavStereo.o
	g++ -std=c++11 -o audioprocessor main.cpp wav.a echo.o noiseGate.o wavMono.o wavStereo.o

wav.a: wav.o metadataManager.o metadata.o
	ar suvr wav.a wav.o metadataManager.o metadata.o

wav.o: wav.cpp wav.h wavHeader.h
	g++ -std=c++11 -c wav.cpp

metadataManager.o: metadataManager.cpp metadataManager.h metadataHeader.h
	g++ -std=c++11 -c metadataManager.cpp

metadata.o: metadata.cpp metadata.h
	g++ -std=c++11 -c metadata.cpp

echo.o: echo.cpp echo.h
	g++ -std=c++11 -c echo.cpp

noiseGate.o: noiseGate.cpp noiseGate.h
	g++ -std=c++11 -c noiseGate.cpp

wavMono.o: wavMono.cpp wavMono.h
	g++ -std=c++11 -c wavMono.cpp

wavStereo.o: wavStereo.cpp wavStereo.h
	g++ -std=c++11 -c wavStereo.cpp

clean:
	rm *.o *.a audioprocessor
