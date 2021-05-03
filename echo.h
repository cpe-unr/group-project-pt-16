#ifndef ECHO_H
#define ECHO_H


class Echo : public Processor {
	int wavDelay;
	int channels;
public:
	Echo() {}
	//Need the num_channels data type to determine whether a wav file is mono or stereo - 1 = mono, 2 = stereo
	Echo(int echoDelay, numChannels) : wavdelay(echoDelay), channels(numChannels) {}

	void processBuffer(unsigned char* buffer, int wavSize);
	void processBuffer(short* buffer, int wavSize);

	virtual ~Echo() {}



};

#endif

/*#ifndef echo_h
#define echo_h
#include <string>
#include <fstream>
#include <iostream>
class Echo : public Processor{
protected:
//attributes
int delay;
public:
//constructor
Echo();
Echo(int delay);
//buffer
void 8bitprobuff(unsigned char* buffer, int buffsize);
void 16bitprobuff(int16_t* buffer,int buffsize);	
};
#endif 
*/
