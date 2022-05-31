#include <iostream>
#include <string>
#include <sstream>
#include <fstream> 

int main(){

	std::string my_str;
	std::string std_str;
	char *ml;
	char *sl;
	std::fstream my_fs;
	std::fstream std_fs;
	
	my_fs.open ("my_log.txt", std::fstream::in);
	std_fs.open ("19920104_091532.log", std::fstream::in);

	for (int i = 0; i != 51; ++i){
		if (!std::getline(my_fs, my_str)){
			break;
		}
		if (!std::getline(std_fs, std_str)){
			break;
		}
		ml = &my_str[18];
		sl = &std_str[18];
		//std::cout<<ml<<std::endl;
		//std::cout<<sl<<std::endl;
		if (strcmp(ml, sl)){
			std::cout<<"Mismath...\n";
			return(1);
		}
	}
	std::cout<<"\nGreat...\n";
	return (0);
}
