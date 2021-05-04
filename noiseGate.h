#ifndef NOISEGATE_H
#define NOISEGATE_H

#include "processor.h"

template <typename T>
class NoiseGate : public Processor<T> {
	int wavDelay;
	short alignment;
public:
	NoiseGate() {}
	NoiseGate(int gateDelay, short s_align) : wavDelay(gateDelay), alignment(s_align) {};

	void monoprobuff(T* buffer, int wavSize) override {
		if(alignment == 1) {
			for(int i=wavDelay; i<wavSize; i++)
			{
				if( (buffer[i]>= 120) && (buffer[i]<=136) )
				{
					buffer[i] = 128;
				}
			}
		}
		else {
			for(int i=wavDelay; i<wavSize; i++)
			{
				if( (buffer[i]>= -31465) && (buffer[i]<=31465) )
				{
					buffer[i] = 0;
				}
			}
		}
	}
	void stereoprobuff(T* buffer1, T* buffer2, int wavSize) override {
		if(alignment == 2){
			for(int i=wavDelay; i<wavSize; i++)
			{
				if((buffer1[i]>= 120) && (buffer1[i] <136))
				{
					buffer1[i] = 128;
				}
				if(buffer2[i]>=120 && (buffer2[i] <=136))
				{
					buffer2[i] = 128;
				}
			}
		}
		else {
			for(int i=wavDelay; i<wavSize; i++)
			{
				if((buffer1[i]>= -31465) && (buffer1[i] <31465))
				{
					buffer1[i] = 0;
				}
				if(buffer2[i]>= -31465 && (buffer2[i] <=31465))
				{
					buffer2[i] = 0;
				}
			}
		}
	}
		
			

	virtual ~NoiseGate() {}
};

#endif
