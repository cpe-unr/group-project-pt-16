#ifndef PROCESSOR_H
#define PROCESSOR_H

Template <typename T>
class Processor {
public:
	virtual void monoprobuff(T*, int) = 0;
	virtual void stereoprobuff(T*, T*, int) = 0;

};



#endif
