#include <iostream>
#include <fstream>
#include <string>

int main(){
	for (int i = 0; i < 10000000; i++) {
		std::ofstream outfile(std::to_string(i) + ".txt");
		outfile << "lol" << std::endl;
		outfile.close();
	}
	return 0;
}
