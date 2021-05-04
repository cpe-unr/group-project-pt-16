/** @file */
#include <iostream>
#include "wav.h"
#include "wavMono.h"
#include "wavStereo.h"

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
    cout << "Hello, World!" << endl;
	/*This is temporary, will fix later. Most of this probably should go to a separate .h/.cpp file maybe
	int input;
	Wav audio();
	//Read files from argv[]
	
	cout << "Do you want to modify the metadata for any of these files? (1 - yes, 0 - no)" << endl;
	cin >> input;
	if (input==1){//Also displays a list of all file names
		//Metadata editing
	}
	
	cout << "Do you want to process a file? (1 - yes, 0 - no)" << endl;
	cin >> input;
	if (input==1){
		//normalization, noise gating, and echo
	
		cout << "Enter file name to save: " << endl;
		string newName;
		cin >> newName;
		if (newName==argv[1]){
			cout << "Cannot save file with the same name!" << endl;
		}
	}
	
	cout << "Do you want to make a CSV file?" << endl;
	cin >> input;
	if (input==1){
		//Generate CSV
	}*/
	
    return 0;
}

/*void listArgs(int arg, *argv[]){//don't know if this will be used
	for (int i=1;i<arg;i++){
		cout << argv[i] << endl;
	}
}*/


/*#include "files.h"


int main(int argc, char const *argv[]) {

	bool check;
	int choice;

	Files F;

	check=F.Argvcheck(argc,argv);

	if(check){
		
		//ui stuff 
			
//what ever we make it as i made it for as an example while(choice>4);
//check if file opens
		F.Readfilenames(argv);
		F.fileopen(ui.getfile());

return 0;
}*/

