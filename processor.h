#ifndef PROCESSOR_H
#define PROCESSOR_H


//researching whether it is better to use interface with function overload, or templates with no interface
class Processor {
public:
	virtual void processBuffer(unsigned char* buffer, int wavSize) = 0;
	virtual void processBuffer(short* buffer, int wavSize) = 0;

};



#endif
