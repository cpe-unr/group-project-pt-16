#ifndef NOISEGATE_H
#define NOISEGATE_H

#include "processor.h"

class NoiseGate : public Processor {
	int wavDelay;
public:
	NoiseGate() {}
	NoiseGate(int gateDelay) : wavDelay(gateDelay) {};

	void processBuffer(unsigned char* buffer, int bufferSize) override;

	virtual ~NoiseGate() {}
};

#endif


/*#ifndef noisegate_h
#define noisegate_h
#include <string>
#include <fstream>
#include <iostream>
class noisegate : public Processor{
public:
	//constructor
	noisegate();

void 8bitprobuff(unsigned char* buffer, int buffsize);
void 16bitprobuff(int16_t* buffer,int buffsize);
	
};
#endif */

