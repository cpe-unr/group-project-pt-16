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