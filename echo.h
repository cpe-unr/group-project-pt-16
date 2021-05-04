#ifndef ECHO_H
#define ECHO_H

template <typename T>
class Echo : public Processor<T> {
	int wavDelay;
	int alignment;
public:
	Echo() {}
	
	Echo(int echoDelay, s_align) : wavdelay(echoDelay), alignment(s_align) {}

	void monoprobuff(T* buffer, int wavSize) override {
		for(int i = wavDelay; i < wavSize; i++) {
			buffer[i] = (buffer[i]*0.5 + buffer[i - wavDelay]*0.5);
		}

	void stereoprobuff(T* buffer1, T* buffer2, int wavSize) override {
		for(int i = wavDelau; i < wavSize; i++) {
			buffer1[i] = (buffer1[i]*0.5 + buffer1[i-wavDelay]*0.5);
			buffer2[i] = (buffer2[i]*0.5 + nuffer2[i-wavDelay]*0.5);
		}
	}

	virtual ~Echo() {}



};

#endif

