#include <iostream>
#include <iomanip>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main(){
	
	string alphabet {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
	string key 		{"XZNLWEBGJHQDYVTKFUOMPCIASRxznlwebgjhqdyvtkfuompciasr"};
	string word {};

	string enc_message {};
	string dec_message {};

	cout << "Enter a word you want to encrypt: ";
	getline(cin, word);

	cout << "\nEncrypting message...\n" << endl;
	cout << "\nEncrypted message: ";
	for (auto w: word)
	{
		if (alphabet.find(w) != string::npos)
		{
			int index {};
			index += alphabet.find(w);
			cout << key.at(index);
		}
		else
			cout << w;
	}
	cout << "\n\n";

	//cout << enc_message;
	cout << "\nDecrypting message...\n" << endl;
	cout << "\nDecrypted message: ";

	for (auto w: word)
	{
		if (key.find(w) != string::npos)
		{
			int index {};
			index += key.find(w);
			cout << key.at(index);
		}
		else
			cout << w;
	}
	cout << "\n\n";

	cout << endl;
	return 0;
}
