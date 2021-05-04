#ifndef PROCESSOR_H
#define PROCESSOR_H

#include <cstdint>
#include <cmath>

template <typename T>
class Processor {
public:
	virtual void monoprobuff(T*, int) = 0;
	virtual void stereoprobuff(T*, T*, int) = 0;

};



#endif
