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
