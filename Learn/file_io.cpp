#include "stdafx.h"
#include <fstream>
#include <string>

void file_main(std::string opt)
{
	using namespace std;


	cout << "Here is file i/o main()." << endl;


	if (opt == "out")
	{
		cout << "Out mode" << endl;
		ofstream outf("Sample_out.txt", ios::out);

		if (!outf)
		{
			cerr << "Can't open" << endl;
			exit(1);
		}

		outf << "This is line1" << endl;
		outf << "This is line2" << endl;

		outf << "Here is hex of 17: " << hex << 17 << endl;
		outf.flush();

	}
	else if (opt == "in")
	{
		cout << "In mode" << endl;
		// ifstream is used for reading files
		// We'll read from a file called Sample.dat
		ifstream inf("Sample_out.txt");

		// If we couldn't open the output file stream for reading
		if (!inf)
		{
			// Print an error and exit
			cerr << "Uh oh, Sample.out could not be opened for reading!" << endl;
			exit(1);
		}

		// While there's still stuff left to read
		/*
		int i = 0;
		while (inf)
		{
			i++;
			// read stuff from the file into a string and print it
			std::string strInput;
			inf >> strInput;
			cout << strInput << endl;
		}
		cout << i;
		*/
		while (inf)
		{
			string strInput;
			getline(inf, strInput);
			cout << strInput << endl;
		}
	}
	else if (opt == "io")
	{
		const string input = "Sample_out.txt";
		const string output = "new_back_up.txt";
		ifstream infile(input);

		// If we couldn't open iofile, print an error
		if (!infile)
		{
			// Print an error and exit
			cerr << "Uh oh, " << input << " could not be opened!" << endl;
			exit(1);
		}

		ofstream of{output, ios::out};
		of << infile.rdbuf(); //copying. Writing
		infile.close();
		
		of.close();
		fstream new_ofile{ output, ios::in | ios::out };
		if (!new_ofile)
		{
			// Print an error and exit
			cerr << "Uh oh, " << output << " could not be opened!" << endl;
			exit(1);
		}


		char chChar; // we're going to do this character by character

					  // While there's still data to process
		while (new_ofile.get(chChar))
		{
			switch (chChar)
			{
				// If we find a vowel
			case 'a':
			case 'e':
			case 'i':
			case 'o':
			case 'u':
			case 'A':
			case 'E':
			case 'I':
			case 'O':
			case 'U':

				// Back up one character
				new_ofile.seekg(-1, ios::cur);

				// Because we did a seek, we can now safely do a write, so
				// let's write a # over the vowel
				new_ofile << '#';

				// Now we want to go back to read mode so the next call
				// to get() will perform correctly.  We'll seekg() to the current
				// location because we don't want to move the file pointer.
				new_ofile.seekg(new_ofile.tellg(), ios::beg);

				break;
			}
		}
	}


}