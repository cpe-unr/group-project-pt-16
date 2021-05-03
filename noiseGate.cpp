#include "NoiseGate.h"

void NoiseGate::processBuffer(unsigned char* buffer, int bufferSize){
	for (int i = 0; i < bufferSize; i ++) {
		if(buffer[i] < 132 && buffer[i] > 123) {
			buffer[i] = 128;
		}
	}
}

