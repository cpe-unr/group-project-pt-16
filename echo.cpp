#include "echo.h"

void Echo::processBuffer(unsigned char* buffer, int wavSize) {
	if(channels == 1) {
		for(int i = wavDelay; i < bufferSize; i++) {
			buffer[i] = (buffer[i]*0.5 + buffer[i - wavDelay]*0.5);
		}
	}
	//Im unsure if this will work for the stereo files, will have to test
	else if(channels == 2) {
		for(int i = wavDelay; i < bufferSize; i+2) {
			buffer[i] = (buffer[i]*0.5 + buffer[i-wavDelay]*0.5);
			buffer[i+1] = buffer[i+1]*0.5 + buffer[i+1-wavDelay]*0.5);
		}
	}
}
void Echo::processBuffer(short* buffer, int wavSize){
	if(channels == 1) {
		for(int i = wavDelay; i < bufferSize; i++) {
			buffer[i] = (buffer[i]*0.5 + buffer[i - wavDelay]*0.5);
		}
	}
	else if(channels == 2) {
		for(int i = wavDelay; i < bufferSize; i+2) {
			buffer[i] = (buffer[i]*0.5 + buffer[i-wavDelay]*0.5);
			buffer[i+1] = buffer[i+1]*0.5 + buffer[i+1-wavDelay]*0.5);
		}
	}
}

/* alternate if I figure out whether it is best to use interfaces or templates
void Echo::processMono(T* buffer, T wavSize) {
	for(int i = wavDelay; i < bufferSize; i++) {
		buffer[i] = (buffer[i]*0.5 + buffer[i - wavDelay]*0.5);
	}
}

void Echo::processStereo(T* buffer, T wavSize) {
	for(int i = wavDelay; i < bufferSize; i+2) {
		buffer[i] = (buffer[i]*0.5 + buffer[i-wavDelay]*0.5);
		buffer[i+1] = buffer[i+1]*0.5 + buffer[i+1-wavDelay]*0.5);
	}
}
*/
