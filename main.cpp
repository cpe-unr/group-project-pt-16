/** @file */
#include <iostream>
#include "wav.h"
#include "wavMono.h"
#include "wavStereo.h"
#include "noiseGate.h"
#include "echo.h"
#include "metadata.h"
#include "metadataManager.h"
#include "processor.h"

using namespace std;

/**
 * \brief   The function bar.
 *
 * \details This function does something which is doing nothing. So this text
 *          is totally senseless and you really do not need to read this,
 *          because this text is basically saying nothing.
 *
 * \note    This text shall only show you, how such a \"note\" section
 *          is looking. There is nothing which really needs your notice,
 *          so you do not really need to read this section.
 *
 * \param[in]     a    Description of parameter a.
 * \param[out]    b    Description of the parameter b.
 * \param[in,out] c    Description of the parameter c.
 *
 * \return        The error return code of the function.
 *
 * \retval        ERR_SUCCESS    The function is successfully executed
 * \retval        ERR_FAILURE    An error occurred
 */
void fn(){

}

int main(int argc, char * argv[]) {
    	if(argc != 2) {
		cout << "Incorrect usage, Correct usage:" << endl;
		cout <<  argv[0] << " filename" << endl;
	}
	else {
	

		int mInput;
		int pInput;
		int pNum;
		int input3;
		int cInput;
		string file = argv[1];
		Wav wav;
		wav.readFile(file);
	
		do {
			cout << "Do you want to modify the metadata for of this file?" << endl;
			cout << " 1. Yes" << endl;
			cout << " 2. No" << endl;
			cin >> mInput;
			if (mInput==1){//Also displays a list of all file names
				break;
			}
			if(mInput !=1 && mInput !=2) {
				cout << "Please enter a valid choice" << endl;
			}
		}
		while(mInput !=2);
	
		
		cout << "Would you like to process this file?" << endl;
		cout << " 1. Yes" << endl;
		cout << " 2. No" << endl;
		cin >> pInput;

		if(pInput ==1){
			cout << "How many processes would you like to add:" << endl;
			cin >> pNum;
			for(int i = 0; i < pNum || i < 2; i++) {
				cout << "1. Normalization, 2. NoiseGate, 3. Echo" << endl;
				cout << "Choose process " << i+1 << endl;
				cin >> input3;
				if(input3 == 1) {
					//Process Normalization
				}
				else if(input3 == 2) {
					//Process Echo
				}
				else if(input3 == 3) {
					//Process NoiseGate
				}
			}
		}
	 

		cout << "Enter file name to save: " << endl;
		string newName;
		cin >> newName;
		if (newName==argv[1]){
			cout << "Cannot save file with the same name!" << endl;
		}
	
		cout << "Do you want to make a CSV file?" << endl;
		cin >> cInput;
		if (cInput==1){
		//Generate CSV
		}
	}
	
    return 0;
}



