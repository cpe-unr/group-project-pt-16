#include "NoiseGate.h"

void NoiseGate::processBuffer(unsigned char* buffer, int bufferSize){
	for (int i = 0; i < bufferSize; i ++) {
		if(buffer[i] < 132 && buffer[i] > 123) {
			buffer[i] = 128;
		}
	}
}



/*#include "wavprocessor.h"
#include "noisegate.h"

	noisegate::noisegate(){}

	   void noisegate::8bitprobuff(unsigned char* buffer, int buffsize)
	
	{
		
		for(int i=0; i<buffsize; i++)
	{
			if( (buffer[i]>= 120) && (buffer[i]<=130) )
	{

				buffer[i] = 0;
	}
	}
	}

		void noisegate::16bitprobuff(int16_t* buffer,int buffsize)
	{
	
			for(int i=0; i<buffsize; i++)
	{
				if( (buffer[i]>= 31465) && (buffer[i]<=34965) ){

					buffer[i] = 0;
	}
	}

	}

*/
