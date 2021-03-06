#ifndef ECHO_H
#define ECHO_H

#include "processor.h"

template <typename T>
class Echo : public Processor<T> {
	int wavDelay;
	short alignment;
public:
	Echo() {}
	
	Echo(int echoDelay, short s_align) : wavDelay(echoDelay), alignment(s_align) {}
	
	/**
	 * makes an echo for mono wav files
	 * @param buffer - buffer containing wav data
	 * @param wavSize - the size of the wav buffer
	*/
	void monoprobuff(T* buffer, int wavSize) override {
		for(int i = wavDelay; i < wavSize; i++) {
			buffer[i] = (buffer[i]*0.5 + buffer[i - wavDelay]*0.5);
		}
	}

	/**
	 * makes an echo for stereo wav files
	 * @param buffer1 - left side buffer for stereo files
	 * @param buffer2 - right side buffer for stereo files
	 * @param wavSize - the size of the buffers
	*/
	void stereoprobuff(T* buffer1, T* buffer2, int wavSize) override {
		for(int i = wavDelay; i < wavSize; i++) {
			buffer1[i] = (buffer1[i]*0.5 + buffer1[i-wavDelay]*0.5);
			buffer2[i] = (buffer2[i]*0.5 + buffer2[i-wavDelay]*0.5);
		}
	}

	virtual ~Echo() {}



};

#endif

