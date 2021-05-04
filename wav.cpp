#include "wav.h"
#include <iostream>
#include <fstream>
#include "metadataManager.h"

using namespace std;


void Wav::readFile(const std::string &filename) {
	std::ifstream wavFile(filename, std::ios::binary | std::ios::in);
	if(!wavFile.is_open()) {
		cout << "File " << filename << " could not be opened." << endl;
	}
	else {

            
		wavFile.read((char*)&wavHeader, headerSize);
		if(wavHeader.num_channels == 1) {
			buffer = new unsigned char[wavHeader.data_bytes];
			wavFile.read((char*)buffer, wavHeader.data_bytes);
			Mono m1(wavHeader);
		}
		else {
			buffer = new unsigned char[wavHeader.data_bytes/2];
			stereoBuffer = new unsigned char[wavHeader.data_bytes/2];

			for(int i = 0; i < wavHeader.data_bytes/2; i += wavHeader.sample_alignment/2) {
				for(int j = 0; j < wavHeader.bit_depth/8; j++) {
					buffer[i+j] = wavFile.get();
				}
				for(int j = 0; j < wavHeader.bit_depth/8; j++) {
					stereoBuffer[i+j] = wavFile.get();
				}
			}
			Stereo s1(wavHeader);
		}
		if(!wavFile.eof()) {
			MetadataManager metadata(wavFile);
		}
		wavFile.close();
	}

}

void Wav::writeFile(const std::string &outFileName) {    
	std::ofstream outFile(outFileName, std::ios::out | std::ios::binary);    
	outFile.write((char*)&wavHeader,sizeof(wav_header));    
	if(wavHeader.num_channels == 1) {
		outFile.write((char*)buffer, wavHeader.data_bytes);
	}
	else {
		outFile.write((char*)buffer, wavHeader.data_bytes/2);
		outFile.write((char*)stereoBuffer, wavHeader.data_bytes/2);
	}
	outFile.close();
}

Wav::~Wav() {
	delete[] buffer;
	delete[] stereoBuffer;
}

int Wav::getBufferSize() const {
	return wavHeader.data_bytes;
}





