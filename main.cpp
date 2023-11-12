#include <iostream>
#include <fstream>

int main(int argc, char** argv)
{
	if(argc < 3 ) {
		std::cerr <<"Usage: "<<argv[0] << " <cmake_version> <project_name>\n";
		return 1;
	}

	std::ofstream outputFile("CMakeLists.txt");

	if(!outputFile.is_open()) {
		std::cerr <<"Uneable to create CMakeLists.txt file\n";
		return 1;
	}

	outputFile <<"cmake_minimum_required (VERSION "<< argv[1] << ")" <<std::endl;

	outputFile <<"project(" << argv[2] <<")" << std::endl;
	
	outputFile <<"set (CMAKE_CXX_FLAGS \"${CMAKE_CXX_FLAGS} -Wall -Werror\")" <<std::endl;

	outputFile <<"set (source_dir \"${PROJECT_SOURCE_DIR}/src\")"<<std::endl;

	outputFile <<"file (GLOB source_files \"${source_dir}/*.cpp\")"<<std::endl;

	outputFile <<"add_executable (${PROJECT_NAME} ${source_files})";

	outputFile.close();

	return 0;
}
