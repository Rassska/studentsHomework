#include <iostream>
#include <set>
#include <map>
#include <vector>

int main() {
    

    while (true) {
        std::string dataStructureType;
        std::cout << "Input Data Structure Type: vec/set/map!" << std::endl;
        std::cin >> dataStructureType;
        if (dataStructureType == "vec" || dataStructureType == "set" || dataStructureType == "map") {
            std::string dataType;
            std::cout << "Input type of data: int/float/double/char/string" << std::endl;
            std::cin >> dataType;
            std::size_t dataStructureSize;
            std::cout << "Input size of dataStructure!" << std::endl;
            std::cin >> dataStructureSize;
            if (dataStructureType == "vec") {
                std::size_t Xindex = 0;
                std::size_t Yindex = 0;
                std::size_t Zindex = 0;
                std::size_t dementionOfVector;
                std::cout << "Input demention of vector!" << std::endl;
                std::cin >> dementionOfVector;
                if (dementionOfVector == 1) {
                    if (dataType == "int") { 
                        std::vector<int> myVector(dataStructureSize);
                        while (true) {
                            std::string operation;
                            std::cout << "Input operation you would like to do: add/delete/print/represent!" << std::endl;
                            std::cin >> operation;
                            if (operation == "add") {
                                int number;
                                std::cout << "Input number you would like to add" << std::endl;
                                std::cin >> number;
                                std::cout << "Input index where you would like to add" << std::endl;
                                std::cin >> Xindex;
                                if (Xindex < myVector.size()) {
                                    myVector[Xindex] = number;
                                } else {
                                    std::cout << "Size of myVector is overflow!" << std::endl;
                                }
                            } else if (operation == "delete") {
                                int delIndex;
                                std::cout << "Input number index of vector you would like to delete" << std::endl;
                                std::cin >> delIndex;
                                if (delIndex < myVector.size()) {
                                    myVector.erase(myVector.begin() + delIndex);
                                } else {
                                    std::cout << "The index is out of bounds of the vector" << std::endl;
                                }
                            } else if (operation == "print") {
                                int printIndex;
                                std::cout << "Input number index of vector you would like to print" << std::endl;
                                std::cin >> printIndex;
                                if (printIndex < myVector.size()) {
                                    std::cout << "Here is your number:" << ' ' << myVector[printIndex] << std::endl;
                                } else {
                                    std::cout << "The index is out of bounds of the vector" << std::endl;
                                }
                            } else if (operation == "represent") {
                                std::cout << "Here is your vector<int>: \n";
                                for (std::size_t i = 0; i < myVector.size(); i++) {
                                    std::cout << myVector[i] << ' ';
                                }
                                std::cout << '\n';
                            }

                            std::cout << "One more operation with this container? Input yes/no" << std::endl;
                            std::cin >> operation;
                            if (operation == "no") {break;}

                        }
                    }
                    if (dataType == "double") { 
                        std::vector<double> myVector(dataStructureSize);
                        while (true) {
                            std::string operation;
                            std::cout << "Input operation you would like to do: add/delete/print!" << std::endl;
                            std::cin >> operation;
                            if (operation == "add") {
                                double number;
                                std::cout << "Input number you would like to add" << std::endl;
                                std::cin >> number;
                                std::cout << "Input index where you would like to add" << std::endl;
                                std::cin >> Xindex;
                                if (Xindex < myVector.size()) {
                                    myVector[Xindex] = number;
                                    
                                } else {
                                    std::cout << "Size of myVector is overflow!" << std::endl;
                                }
                            } else if (operation == "represent") {
                                std::cout << "Here is your vector<double>: \n";
                                for (std::size_t i = 0; i < myVector.size(); i++) {
                                    std::cout << myVector[i] << ' ';
                                }
                                std::cout << '\n';
                            } else if (operation == "delete") {
                                int delIndex;
                                std::cout << "Input number index of vector you would like to delete" << std::endl;
                                std::cin >> delIndex;
                                if (delIndex < myVector.size()) {
                                    myVector.erase(myVector.begin() + delIndex);
                                } else {
                                    std::cout << "The index is out of bounds of the vector" << std::endl;
                                }
                            } else if (operation == "print") {
                                int printIndex;
                                std::cout << "Input number index of vector you would like to print" << std::endl;
                                std::cin >> printIndex;
                                if (printIndex < myVector.size()) {
                                    std::cout << "Here is your number:" << ' ' << myVector[printIndex] << std::endl;
                                } else {
                                    std::cout << "The index is out of bounds of the vector" << std::endl;
                                }
                            } else {
                                std::cout << "There is no this command" << std::endl;
                            }

                            std::cout << "One more operation with this container? Input yes/no" << std::endl;
                            std::cin >> operation;
                            if (operation == "no") {break;}

                        }
                    }
                    if (dataType == "float") { 
                        std::vector<float> myVector(dataStructureSize);
                        while (true) {
                            std::string operation;
                            std::cout << "Input operation you would like to do: add/delete/print!" << std::endl;
                            std::cin >> operation;
                            if (operation == "add") {
                                float number;
                                std::cout << "Input number you would like to add" << std::endl;
                                std::cin >> number;
                                std::cout << "Input index where you would like to add" << std::endl;
                                std::cin >> Xindex;
                                if (Xindex < myVector.size()) {
                                    myVector[Xindex] = number;
                                    
                                } else {
                                    std::cout << "Size of myVector is overflow!" << std::endl;
                                }
                            } else if (operation == "delete") {
                                int delIndex;
                                std::cout << "Input number index of vector you would like to delete" << std::endl;
                                std::cin >> delIndex;
                                if (delIndex < myVector.size()) {
                                    myVector.erase(myVector.begin() + delIndex);
                                    
                                } else {
                                    std::cout << "The index is out of bounds of the vector" << std::endl;
                                }
                            } else if (operation == "print") {
                                int printIndex;
                                std::cout << "Input number index of vector you would like to print" << std::endl;
                                std::cin >> printIndex;
                                if (printIndex < myVector.size()) {
                                    std::cout << "Here is your number:" << ' ' << myVector[printIndex] << std::endl;
                                } else {
                                    std::cout << "The index is out of bounds of the vector" << std::endl;
                                }
                            } else if (operation == "represent") {
                                std::cout << "Here is your vector<float>: \n";
                                for (std::size_t i = 0; i < myVector.size(); i++) {
                                    std::cout << myVector[i] << ' ';
                                }
                                std::cout << '\n';
                            } else {
                                std::cout << "There is no this command" << std::endl;
                            }

                            std::cout << "One more operation with this container? Input yes/no" << std::endl;
                            std::cin >> operation;
                            if (operation == "no") {break;}

                        }
                    }
                    if (dataType == "char") { 
                        std::vector<char> myVector(dataStructureSize);
                        while (true) {
                            std::string operation;
                            std::cout << "Input operation you would like to do: add/delete/print!" << std::endl;
                            std::cin >> operation;
                            if (operation == "add") {
                                char symbol;
                                std::cout << "Input symbol you would like to add" << std::endl;
                                std::cin >> symbol;
                                std::cout << "Input index where you would like to add" << std::endl;
                                std::cin >> Xindex;
                                if (Xindex < myVector.size()) {
                                    myVector[Xindex] = symbol;
                                
                                } else {
                                    std::cout << "Size of myVector is overflow!" << std::endl;
                                }
                            } else if (operation == "delete") {
                                int delIndex;
                                std::cout << "Input symbol index of vector you would like to delete" << std::endl;
                                std::cin >> delIndex;
                                if (delIndex < myVector.size()) {
                                    myVector.erase(myVector.begin() + delIndex);
                                    
                                } else {
                                    std::cout << "The index is out of bounds of the vector" << std::endl;
                                }
                            } else if (operation == "print") {
                                int printIndex;
                                std::cout << "Input symbol index of vector you would like to print" << std::endl;
                                std::cin >> printIndex;
                                if (printIndex < myVector.size()) {
                                    std::cout << "Here is your symbol:" << ' ' << myVector[printIndex] << std::endl;
                                } else {
                                    std::cout << "The index is out of bounds of the vector" << std::endl;
                                }
                            } else if (operation == "represent") {
                                std::cout << "Here is your vector<char>: \n";
                                for (std::size_t i = 0; i < myVector.size(); i++) {
                                    std::cout << myVector[i] << ' ';
                                }
                                std::cout << '\n';
                            } else {
                                std::cout << "There is no this command" << std::endl;
                            }

                            std::cout << "One more operation with this container? Input yes/no" << std::endl;
                            std::cin >> operation;
                            if (operation == "no") {break;}

                        }
                    }
                    if (dataType == "string") { 
                        std::vector<std::string> myVector(dataStructureSize);
                        while (true) {
                            std::string operation;
                            std::cout << "Input operation you would like to do: add/delete/print!" << std::endl;
                            std::cin >> operation;
                            
                            if (operation == "add") {
                                std::string string;
                                std::cout << "Input string you would like to add" << std::endl;
                                std::cin >> string;
                                std::cout << "Input index where you would like to add" << std::endl;
                                std::cin >> Xindex;
                                if (Xindex < myVector.size()) {
                                    myVector[Xindex] = string;
                                   
                                } else {
                                    std::cout << "Size of myVector is overflow!" << std::endl;
                                }
                            } else if (operation == "delete") {
                                int delIndex;
                                std::cout << "Input string index of vector you would like to delete" << std::endl;
                                std::cin >> delIndex;
                                if (delIndex < myVector.size()) {
                                    myVector.erase(myVector.begin() + delIndex);
                                   
                                } else {
                                    std::cout << "The index is out of bounds of the vector" << std::endl;
                                }
                            } else if (operation == "print") {
                                int printIndex;
                                std::cout << "Input string index of vector you would like to print" << std::endl;
                                std::cin >> printIndex;
                                if (printIndex < myVector.size()) {
                                    std::cout << "Here is your string:" << ' ' << myVector[printIndex] << std::endl;
                                } else {
                                    std::cout << "The index is out of bounds of the vector" << std::endl;
                                }
                            } else if (operation == "represent") {
                                std::cout << "Here is your vector<string>: \n";
                                for (std::size_t i = 0; i < myVector.size(); i++) {
                                    std::cout << myVector[i] << ' ';
                                }
                                std::cout << '\n';
                            } else  {
                                std::cout << "There is no this command" << std::endl;
                            }

                            std::cout << "One more operation with this container? Input yes/no" << std::endl;
                            std::cin >> operation;
                            if (operation == "no") {break;}

                        }
                    }
                    
                } else if (dementionOfVector == 2) {
                    
                    if (dataType == "int") { 

                        std::vector<std::vector<int>> myVector(dataStructureSize);
                        
                        for (std::size_t i = 0; i < dataStructureSize; i++) {
                            myVector[i].resize(dataStructureSize);
                        }

                        while (true) {
                            std::string operation;
                            std::cout << "Input operation you would like to do: add/delete/print/represent!" << std::endl;
                            std::cin >> operation;
                            
                            if (operation == "add") {
                                int number;
                                std::cout << "Input number you would like to add" << std::endl;
                                std::cin >> number;
                                std::cout << "Input X and Y indexes where you would like to add" << std::endl;
                                std::cin >> Xindex >> Yindex;
                                if (Xindex < myVector.size()) {
                                    if (Yindex < myVector[Xindex].size()) {
                                        myVector[Xindex][Yindex] = number;
                                    } else {
                                        std::cout << "The second index is out of bounds of the vector<vector<int>>" << std::endl;
                                    }
                                } else {
                                    std::cout << "Size of myVector is overflow!" << std::endl;
                                }
                            } else if (operation == "delete") {
                                int delIndexX, delIndexY;
                                std::cout << "Input number indexes of vector you would like to delete" << std::endl;
                                std::cin >> delIndexX >> delIndexY;
                                if (delIndexX < myVector.size()) {
                                    if (delIndexY < myVector[delIndexX].size()) {
                                        myVector[delIndexX].erase(myVector[delIndexX].begin() + delIndexY);
                                    } else {
                                        std::cout << "The second index is out of bounds of the vector<vector<int>>" << std::endl;
                                    }
                                    
                                } else {
                                    std::cout << "The first index is out of bounds of the vector" << std::endl;
                                }
                            } else if (operation == "print") {
                                int printIndexX, printIndexY;
                                std::cout << "Input number indexes of vector you would like to print" << std::endl;
                                std::cin >> printIndexX >> printIndexY;
                                if (printIndexX < myVector.size()) {
                                    if (printIndexY < myVector[printIndexX].size()) {
                                        std::cout << "Here is your number:" << ' ' << myVector[printIndexX][printIndexY] << std::endl;
                                    } else {
                                        std::cout << "The second index is out of bounds of the vector<vector<int>>" << std::endl;
                                    }
                                } else {
                                    std::cout << "The first index is out of bounds of the vector<vector<int>>" << std::endl;
                                }
                            } else if (operation == "represent") {
                                std::cout << "Here is your vector<vector<int>>: \n";
                                for (std::size_t i = 0; i < myVector.size(); i++) {
                                    for (std::size_t j = 0; j < myVector.size(); j++) {
                                        std::cout << myVector[i][j] << ' ';
                                    }
                                    std::cout << '\n';
                                }
                            } else {
                                std::cout << "There is no this command" << std::endl;
                            }

                            std::cout << "One more operation with this container? Input yes/no" << std::endl;
                            std::cin >> operation;
                            if (operation == "no") {break;}

                        }
                        
                    }
                    if (dataType == "double") { 
                        std::vector<std::vector<double>> myVector(dataStructureSize);
                        
                        for (std::size_t i = 0; i < dataStructureSize; i++) {
                            myVector[i].resize(dataStructureSize);
                        }
                        while (true) {
                            std::string operation;
                            std::cout << "Input operation you would like to do: add/delete/print!" << std::endl;
                            std::cin >> operation;
                            
                            if (operation == "add") {
                                double number;
                                std::cout << "Input number you would like to add" << std::endl;
                                std::cin >> number;
                                std::cout << "Input X and Y indexes where you would like to add" << std::endl;
                                std::cin >> Xindex >> Yindex;
                                if (Xindex < myVector.size()) {
                                    if (Yindex < myVector[Xindex].size()) {
                                        myVector[Xindex][Yindex] = number;
                                    } else {
                                         std::cout << "The second index is out of bounds of the vector<vector<double>>" << std::endl;
                                    }
                                } else {
                                    std::cout << "Size of myVector is overflow!" << std::endl;
                                }
                            } else if (operation == "delete") {
                                int delIndexX, delIndexY;
                                std::cout << "Input number indexes of vector you would like to delete" << std::endl;
                                std::cin >> delIndexX >> delIndexY;
                                if (delIndexX < myVector.size()) {
                                    if (delIndexY < myVector[delIndexX].size()) {
                                        myVector[delIndexX].erase(myVector[delIndexX].begin() + delIndexY);
                                    } else {
                                        std::cout << "The second index is out of bounds of the vector<vector<double>>" << std::endl;
                                    }
                                    
                                } else {
                                    std::cout << "The first index is out of bounds of the vector" << std::endl;
                                }
                            } else if (operation == "print") {
                                int printIndexX, printIndexY;
                                std::cout << "Input number indexes of vector you would like to print" << std::endl;
                                std::cin >> printIndexX >> printIndexY;
                                if (printIndexX < myVector.size()) {
                                    if (printIndexY < myVector[printIndexX].size()) {
                                        std::cout << "Here is your number:" << ' ' << myVector[printIndexX][printIndexY] << std::endl;
                                    } else {
                                        std::cout << "The second index is out of bounds of the vector<vector<double>>" << std::endl;
                                    }
                                } else {
                                    std::cout << "The first index is out of bounds of the vector<vector<double>>" << std::endl;
                                }
                            } else if (operation == "represent") {
                                std::cout << "Here is your vector<vector<double>>: \n";
                                for (std::size_t i = 0; i < myVector.size(); i++) {
                                    for (std::size_t j = 0; j < myVector.size(); j++) {
                                        std::cout << myVector[i][j] << ' ';
                                    }
                                    std::cout << '\n';
                                }
                            } else {
                                std::cout << "There is no this command" << std::endl;
                            }

                            std::cout << "One more operation with this container? Input yes/no" << std::endl;
                            std::cin >> operation;
                            if (operation == "no") {break;}

                        }
                    }
                    if (dataType == "float") { 
                        std::vector<std::vector<float>> myVector(dataStructureSize);
                        
                        for (std::size_t i = 0; i < dataStructureSize; i++) {
                            myVector[i].resize(dataStructureSize);
                        }
                        while (true) {
                            std::string operation;
                            std::cout << "Input operation you would like to do: add/delete/print!" << std::endl;
                            std::cin >> operation;
                            
                            if (operation == "add") {
                                float number;
                                std::cout << "Input number you would like to add" << std::endl;
                                std::cin >> number;
                                std::cout << "Input X and Y indexes where you would like to add" << std::endl;
                                std::cin >> Xindex >> Yindex;
                                if (Xindex < myVector.size()) {
                                    if (Yindex < myVector[Xindex].size()) {
                                        myVector[Xindex][Yindex] = number;
                                    } else {
                                         std::cout << "The second index is out of bounds of the vector<vector<float>>" << std::endl;
                                    }
                                } else {
                                    std::cout << "Size of myVector is overflow!" << std::endl;
                                }
                            } else if (operation == "delete") {
                                int delIndexX, delIndexY;
                                std::cout << "Input number indexes of vector you would like to delete" << std::endl;
                                std::cin >> delIndexX >> delIndexY;
                                if (delIndexX < myVector.size()) {
                                    if (delIndexY < myVector[delIndexX].size()) {
                                        myVector[delIndexX].erase(myVector[delIndexX].begin() + delIndexY);
                                    } else {
                                        std::cout << "The second index is out of bounds of the vector<vector<float>>" << std::endl;
                                    }
                                    
                                } else {
                                    std::cout << "The first index is out of bounds of the vector" << std::endl;
                                }
                            } else if (operation == "print") {
                                int printIndexX, printIndexY;
                                std::cout << "Input number indexes of vector you would like to print" << std::endl;
                                std::cin >> printIndexX >> printIndexY;
                                if (printIndexX < myVector.size()) {
                                    if (printIndexY < myVector[printIndexX].size()) {
                                        std::cout << "Here is your number:" << ' ' << myVector[printIndexX][printIndexY] << std::endl;
                                    } else {
                                        std::cout << "The second index is out of bounds of the vector<vector<float>>" << std::endl;
                                    }
                                } else {
                                    std::cout << "The first index is out of bounds of the vector<vector<float>>" << std::endl;
                                }
                            } else if (operation == "represent") {
                                std::cout << "Here is your vector<vector<float>>: \n";
                                for (std::size_t i = 0; i < myVector.size(); i++) {
                                    for (std::size_t j = 0; j < myVector.size(); j++) {
                                        std::cout << myVector[i][j] << ' ';
                                    }
                                    std::cout << '\n';
                                }
                            } else {
                                std::cout << "There is no this command" << std::endl;
                            }

                            std::cout << "One more operation with this container? Input yes/no" << std::endl;
                            std::cin >> operation;
                            if (operation == "no") {break;}

                        }
                    }
                    if (dataType == "char") { 
                        std::vector<std::vector<char>> myVector(dataStructureSize);
                        
                        for (std::size_t i = 0; i < dataStructureSize; i++) {
                            myVector[i].resize(dataStructureSize);
                        }
                        while (true) {
                            std::string operation;
                            std::cout << "Input operation you would like to do: add/delete/print!" << std::endl;
                            std::cin >> operation;
                            
                            if (operation == "add") {
                                char number;
                                std::cout << "Input char you would like to add" << std::endl;
                                std::cin >> number;
                                std::cout << "Input X and Y indexes where you would like to add" << std::endl;
                                std::cin >> Xindex >> Yindex;
                                if (Xindex < myVector.size()) {
                                    if (Yindex < myVector[Xindex].size()) {
                                        myVector[Xindex][Yindex] = number;
                                    } else {
                                         std::cout << "The second index is out of bounds of the vector<vector<char>>" << std::endl;
                                    }
                                } else {
                                    std::cout << "Size of myVector is overflow!" << std::endl;
                                }
                            } else if (operation == "delete") {
                                int delIndexX, delIndexY;
                                std::cout << "Input char indexes of vector you would like to delete" << std::endl;
                                std::cin >> delIndexX >> delIndexY;
                                if (delIndexX < myVector.size()) {
                                    if (delIndexY < myVector[delIndexX].size()) {
                                        myVector[delIndexX].erase(myVector[delIndexX].begin() + delIndexY);
                                    } else {
                                        std::cout << "The second index is out of bounds of the vector<vector<char>>" << std::endl;
                                    }
                                    
                                } else {
                                    std::cout << "The first index is out of bounds of the vector" << std::endl;
                                }
                            } else if (operation == "print") {
                                int printIndexX, printIndexY;
                                std::cout << "Input char indexes of vector you would like to print" << std::endl;
                                std::cin >> printIndexX >> printIndexY;
                                if (printIndexX < myVector.size()) {
                                    if (printIndexY < myVector[printIndexX].size()) {
                                        std::cout << "Here is your number:" << ' ' << myVector[printIndexX][printIndexY] << std::endl;
                                    } else {
                                        std::cout << "The second index is out of bounds of the vector<vector<char>>" << std::endl;
                                    }
                                } else {
                                    std::cout << "The first index is out of bounds of the vector<vector<char>>" << std::endl;
                                }
                            } else if (operation == "represent") {
                                std::cout << "Here is your vector<vector<char>>: \n";
                                for (std::size_t i = 0; i < myVector.size(); i++) {
                                    for (std::size_t j = 0; j < myVector.size(); j++) {
                                        std::cout << myVector[i][j] << ' ';
                                    }
                                    std::cout << '\n';
                                }
                            } else {
                                std::cout << "There is no this command" << std::endl;
                            }

                            std::cout << "One more operation with this container? Input yes/no" << std::endl;
                            std::cin >> operation;
                            if (operation == "no") {break;}

                        }
                    }
                    if (dataType == "string") { 
                        std::vector<std::vector<std::string>> myVector(dataStructureSize);
                        
                        for (std::size_t i = 0; i < dataStructureSize; i++) {
                            myVector[i].resize(dataStructureSize);
                        }
                        while (true) {
                            std::string operation;
                            std::cout << "Input operation you would like to do: add/delete/print!" << std::endl;
                            std::cin >> operation;
                            
                            if (operation == "add") {
                                std::string string;
                                std::cout << "Input string you would like to add" << std::endl;
                                std::cin >> string;
                                std::cout << "Input X and Y indexes where you would like to add" << std::endl;
                                std::cin >> Xindex >> Yindex;
                                if (Xindex < myVector.size()) {
                                    if (Yindex < myVector[Xindex].size()) {
                                        myVector[Xindex][Yindex] = string;
                                    } else {
                                         std::cout << "The second index is out of bounds of the vector<vector<string>>" << std::endl;
                                    }
                                } else {
                                    std::cout << "Size of myVector is overflow!" << std::endl;
                                }
                            } else if (operation == "delete") {
                                int delIndexX, delIndexY;
                                std::cout << "Input string indexes of vector you would like to delete" << std::endl;
                                std::cin >> delIndexX >> delIndexY;
                                if (delIndexX < myVector.size()) {
                                    if (delIndexY < myVector[delIndexX].size()) {
                                        myVector[delIndexX].erase(myVector[delIndexX].begin() + delIndexY);
                                    } else {
                                        std::cout << "The second index is out of bounds of the vector<vector<string>>" << std::endl;
                                    }
                                    
                                } else {
                                    std::cout << "The first index is out of bounds of the vector" << std::endl;
                                }
                            } else if (operation == "print") {
                                int printIndexX, printIndexY;
                                std::cout << "Input string indexes of vector you would like to print" << std::endl;
                                std::cin >> printIndexX >> printIndexY;
                                if (printIndexX < myVector.size()) {
                                    if (printIndexY < myVector[printIndexX].size()) {
                                        std::cout << "Here is your number:" << ' ' << myVector[printIndexX][printIndexY] << std::endl;
                                    } else {
                                        std::cout << "The second index is out of bounds of the vector<vector<string>>" << std::endl;
                                    }
                                } else {
                                    std::cout << "The first index is out of bounds of the vector<vector<string>>" << std::endl;
                                }
                            } else if (operation == "represent") {
                                std::cout << "Here is your vector<vector<std::string>>: \n";
                                for (std::size_t i = 0; i < myVector.size(); i++) {
                                    for (std::size_t j = 0; j < myVector.size(); j++) {
                                        std::cout << myVector[i][j] << ' ';
                                    }
                                    std::cout << '\n';
                                }
                            } else {
                                std::cout << "There is no this command" << std::endl;
                            }

                            std::cout << "One more operation with this container? Input yes/no" << std::endl;
                            std::cin >> operation;
                            if (operation == "no") {break;}

                        }
                    }
                    
                
                } else if (dementionOfVector == 3) {
                    if (dataType == "int") { 
                        std::vector<std::vector<std::vector<int>>> myVector(dataStructureSize);
                        for (std::size_t i = 0; i < dataStructureSize; i++) {
                            myVector[i].resize(dataStructureSize);
                            for (std::size_t j = 0; j < dataStructureSize; j++) {
                                myVector[i][j].resize(dataStructureSize);
                            }
                        }
                        while (true) {
                            std::string operation;
                            std::cout << "Input operation you would like to do: add/delete/print/represent!" << std::endl;
                            std::cin >> operation;
                            
                            if (operation == "add") {
                                int number;
                                std::cout << "Input number you would like to add" << std::endl;
                                std::cin >> number;
                                std::cout << "Input X and Y and Z indexes where you would like to add" << std::endl;
                                std::cin >> Xindex >> Yindex >> Zindex;
                                if (Xindex < myVector.size()) {
                                    if (Yindex < myVector[Xindex].size()) {
                                        if (Yindex < myVector[Xindex].size()) {
                                            myVector[Xindex][Yindex][Zindex] = number;
                                        } else {
                                            std::cout << "The third index is out of bounds of the vector<vector<vector<int>>>" << std::endl;
                                        }
                                    } else {
                                        std::cout << "The second index is out of bounds of the vector<vector<vector<int>>" << std::endl;
                                    }
                                } else {
                                    std::cout << "Size of myVector is overflow!" << std::endl;
                                }
                            } else if (operation == "delete") {
                                int delIndexX, delIndexY, delIndexZ;
                                std::cout << "Input number indexes of vector you would like to delete" << std::endl;
                                std::cin >> delIndexX >> delIndexY >> delIndexZ;
                                if (delIndexX < myVector.size()) {
                                    if (delIndexY < myVector[delIndexX].size()) {
                                        if (delIndexZ < myVector[delIndexX][delIndexY].size()) {
                                            myVector[delIndexX][delIndexY].erase(myVector[delIndexX][delIndexY].begin() + delIndexZ);
                                        } else {
                                            std::cout << "The third index is out of bounds of the vector<vector<vector<int>>>" << std::endl;
                                        }
                                    } else {
                                        std::cout << "The second index is out of bounds of the vector<vector<vector<int>>>" << std::endl;
                                    }
                                    
                                } else {
                                    std::cout << "The first index is out of bounds of the vector" << std::endl;
                                }
                            } else if (operation == "print") {
                                int printIndexX, printIndexY, printIndexZ;
                                std::cout << "Input number indexes of vector you would like to print" << std::endl;
                                std::cin >> printIndexX >> printIndexY >> printIndexZ;
                                if (printIndexX < myVector.size()) {
                                    if (printIndexY < myVector[printIndexX].size()) {
                                        if (printIndexZ < myVector[printIndexX][printIndexY].size()) {
                                            std::cout << "Here is your number:" << ' ' << myVector[printIndexX][printIndexY][printIndexZ] << std::endl;
                                        } else {
                                            std::cout << "The third index is out of bounds of the vector<vector<vector<int>>>" << std::endl;
                                        }
                                    } else {
                                        std::cout << "The second index is out of bounds of the vector<vector<int>>" << std::endl;
                                    }
                                } else {
                                    std::cout << "The first index is out of bounds of the vector<vector<int>>" << std::endl;
                                }
                            } else if (operation == "represent") {
                                std::cout << "Here is your vector<vector<vector<int>>>: \n";
                                for (std::size_t k = 0; k < myVector.size(); k++) {
                                    for (std::size_t i = 0; i < myVector.size(); i++) {
                                        for (std::size_t j = 0; j < myVector.size(); j++) {
                                            std::cout << myVector[i][j][k] << ' ';
                                        }
                                        std::cout << '\n';
                                    }
                                    std::cout << '\n' << '\n';
                                }
                            } else {
                                std::cout << "There is no this command" << std::endl;
                            }

                            std::cout << "One more operation with this container? Input yes/no" << std::endl;
                            std::cin >> operation;
                            if (operation == "no") {break;}

                        }
                    }
                    if (dataType == "double") { 
                        std::vector<std::vector<std::vector<double>>> myVector(dataStructureSize);
                        for (std::size_t i = 0; i < dataStructureSize; i++) {
                            myVector[i].resize(dataStructureSize);
                            for (std::size_t j = 0; j < dataStructureSize; j++) {
                                myVector[i][j].resize(dataStructureSize);
                            }
                        }
                        while (true) {
                            std::string operation;
                            std::cout << "Input operation you would like to do: add/delete/print!" << std::endl;
                            std::cin >> operation;
                            
                            if (operation == "add") {
                                double number;
                                std::cout << "Input number you would like to add" << std::endl;
                                std::cin >> number;
                                std::cout << "Input X and Y and Z indexes where you would like to add" << std::endl;
                                std::cin >> Xindex >> Yindex >> Zindex;
                                if (Xindex < myVector.size()) {
                                    if (Yindex < myVector[Xindex].size()) {
                                        if (Yindex < myVector[Xindex].size()) {
                                            myVector[Xindex][Yindex][Zindex] = number;
                                        } else {
                                            std::cout << "The third index is out of bounds of the vector<vector<vector<int>>>" << std::endl;
                                        }
                                    } else {
                                        std::cout << "The second index is out of bounds of the vector<vector<vector<int>>" << std::endl;
                                    }
                                } else {
                                    std::cout << "Size of myVector is overflow!" << std::endl;
                                }
                            } else if (operation == "delete") {
                                int delIndexX, delIndexY, delIndexZ;
                                std::cout << "Input number indexes of vector you would like to delete" << std::endl;
                                std::cin >> delIndexX >> delIndexY >> delIndexZ;
                                if (delIndexX < myVector.size()) {
                                    if (delIndexY < myVector[delIndexX].size()) {
                                        if (delIndexZ < myVector[delIndexX][delIndexY].size()) {
                                            myVector[delIndexX][delIndexY].erase(myVector[delIndexX][delIndexY].begin() + delIndexZ);
                                        } else {
                                            std::cout << "The third index is out of bounds of the vector<vector<vector<int>>>" << std::endl;
                                        }
                                    } else {
                                        std::cout << "The second index is out of bounds of the vector<vector<vector<int>>>" << std::endl;
                                    }
                                    
                                } else {
                                    std::cout << "The first index is out of bounds of the vector" << std::endl;
                                }
                            } else if (operation == "print") {
                                int printIndexX, printIndexY, printIndexZ;
                                std::cout << "Input number indexes of vector you would like to print" << std::endl;
                                std::cin >> printIndexX >> printIndexY >> printIndexZ;
                                if (printIndexX < myVector.size()) {
                                    if (printIndexY < myVector[printIndexX].size()) {
                                        if (printIndexZ < myVector[printIndexX][printIndexY].size()) {
                                            std::cout << "Here is your number:" << ' ' << myVector[printIndexX][printIndexY][printIndexZ] << std::endl;
                                        } else {
                                            std::cout << "The third index is out of bounds of the vector<vector<vector<int>>>" << std::endl;
                                        }
                                    } else {
                                        std::cout << "The second index is out of bounds of the vector<vector<int>>" << std::endl;
                                    }
                                } else {
                                    std::cout << "The first index is out of bounds of the vector<vector<int>>" << std::endl;
                                }
                            } else if (operation == "represent") {
                                std::cout << "Here is your vector<vector<vector<double>>>: \n";
                                for (std::size_t k = 0; k < myVector.size(); k++) {
                                    for (std::size_t i = 0; i < myVector.size(); i++) {
                                        for (std::size_t j = 0; j < myVector.size(); j++) {
                                            std::cout << myVector[i][j][k] << ' ';
                                        }
                                        std::cout << '\n';
                                    }
                                    std::cout << '\n' << '\n';
                                }
                            } else {
                                std::cout << "There is no this command" << std::endl;
                            }

                            std::cout << "One more operation with this container? Input yes/no" << std::endl;
                            std::cin >> operation;
                            if (operation == "no") {break;}

                        }
                    }
                    if (dataType == "float") { 
                        std::vector<std::vector<std::vector<float>>> myVector(dataStructureSize);
                        for (std::size_t i = 0; i < dataStructureSize; i++) {
                            myVector[i].resize(dataStructureSize);
                            for (std::size_t j = 0; j < dataStructureSize; j++) {
                                myVector[i][j].resize(dataStructureSize);
                            }
                        }
                        while (true) {
                            std::string operation;
                            std::cout << "Input operation you would like to do: add/delete/print!" << std::endl;
                            std::cin >> operation;
                            
                            if (operation == "add") {
                                float number;
                                std::cout << "Input number you would like to add" << std::endl;
                                std::cin >> number;
                                std::cout << "Input X and Y and Z indexes where you would like to add" << std::endl;
                                std::cin >> Xindex >> Yindex >> Zindex;
                                if (Xindex < myVector.size()) {
                                    if (Yindex < myVector[Xindex].size()) {
                                        if (Yindex < myVector[Xindex].size()) {
                                            myVector[Xindex][Yindex][Zindex] = number;
                                        } else {
                                            std::cout << "The third index is out of bounds of the vector<vector<vector<int>>>" << std::endl;
                                        }
                                    } else {
                                        std::cout << "The second index is out of bounds of the vector<vector<vector<int>>" << std::endl;
                                    }
                                } else {
                                    std::cout << "Size of myVector is overflow!" << std::endl;
                                }
                            } else if (operation == "delete") {
                                int delIndexX, delIndexY, delIndexZ;
                                std::cout << "Input number indexes of vector you would like to delete" << std::endl;
                                std::cin >> delIndexX >> delIndexY >> delIndexZ;
                                if (delIndexX < myVector.size()) {
                                    if (delIndexY < myVector[delIndexX].size()) {
                                        if (delIndexZ < myVector[delIndexX][delIndexY].size()) {
                                            myVector[delIndexX][delIndexY].erase(myVector[delIndexX][delIndexY].begin() + delIndexZ);
                                        } else {
                                            std::cout << "The third index is out of bounds of the vector<vector<vector<int>>>" << std::endl;
                                        }
                                    } else {
                                        std::cout << "The second index is out of bounds of the vector<vector<vector<int>>>" << std::endl;
                                    }
                                    
                                }  else {
                                    std::cout << "The first index is out of bounds of the vector" << std::endl;
                                }
                            } else if (operation == "print") {
                                int printIndexX, printIndexY, printIndexZ;
                                std::cout << "Input number indexes of vector you would like to print" << std::endl;
                                std::cin >> printIndexX >> printIndexY >> printIndexZ;
                                if (printIndexX < myVector.size()) {
                                    if (printIndexY < myVector[printIndexX].size()) {
                                        if (printIndexZ < myVector[printIndexX][printIndexY].size()) {
                                            std::cout << "Here is your number:" << ' ' << myVector[printIndexX][printIndexY][printIndexZ] << std::endl;
                                        } else {
                                            std::cout << "The third index is out of bounds of the vector<vector<vector<int>>>" << std::endl;
                                        }
                                    } else {
                                        std::cout << "The second index is out of bounds of the vector<vector<int>>" << std::endl;
                                    }
                                } else {
                                    std::cout << "The first index is out of bounds of the vector<vector<int>>" << std::endl;
                                }
                            } else if (operation == "represent") {
                                    std::cout << "Here is your vector<vector<vector<float>>>: \n";
                                    for (std::size_t k = 0; k < myVector.size(); k++) {
                                        for (std::size_t i = 0; i < myVector.size(); i++) {
                                            for (std::size_t j = 0; j < myVector.size(); j++) {
                                                std::cout << myVector[i][j][k] << ' ';
                                            }
                                            std::cout << '\n';
                                        }
                                        std::cout << '\n' << '\n';
                                    }
                                } else {
                                std::cout << "There is no this command" << std::endl;
                            }

                            std::cout << "One more operation with this container? Input yes/no" << std::endl;
                            std::cin >> operation;
                            if (operation == "no") {break;}

                        }
                    }
                    if (dataType == "char") { 
                        std::vector<std::vector<std::vector<char>>> myVector(dataStructureSize);
                        for (std::size_t i = 0; i < dataStructureSize; i++) {
                            myVector[i].resize(dataStructureSize);
                            for (std::size_t j = 0; j < dataStructureSize; j++) {
                                myVector[i][j].resize(dataStructureSize);
                            }
                        }
                        while (true) {
                            std::string operation;
                            std::cout << "Input operation you would like to do: add/delete/print!" << std::endl;
                            std::cin >> operation;
                            
                            if (operation == "add") {
                                char character;
                                std::cout << "Input character you would like to add" << std::endl;
                                std::cin >> character;
                                std::cout << "Input X and Y and Z indexes where you would like to add" << std::endl;
                                std::cin >> Xindex >> Yindex >> Zindex;
                                if (Xindex < myVector.size()) {
                                    if (Yindex < myVector[Xindex].size()) {
                                        if (Yindex < myVector[Xindex].size()) {
                                            myVector[Xindex][Yindex][Zindex] = character;
                                        } else {
                                            std::cout << "The third index is out of bounds of the vector<vector<vector<char>>>" << std::endl;
                                        }
                                    } else {
                                        std::cout << "The second index is out of bounds of the vector<vector<vector<char>>" << std::endl;
                                    }
                                } else {
                                    std::cout << "Size of myVector is overflow!" << std::endl;
                                }
                            } else if (operation == "delete") {
                                int delIndexX, delIndexY, delIndexZ;
                                std::cout << "Input number indexes of vector you would like to delete" << std::endl;
                                std::cin >> delIndexX >> delIndexY >> delIndexZ;
                                if (delIndexX < myVector.size()) {
                                    if (delIndexY < myVector[delIndexX].size()) {
                                        if (delIndexZ < myVector[delIndexX][delIndexY].size()) {
                                            myVector[delIndexX][delIndexY].erase(myVector[delIndexX][delIndexY].begin() + delIndexZ);
                                        } else {
                                            std::cout << "The third index is out of bounds of the vector<vector<vector<char>>>" << std::endl;
                                        }
                                    } else {
                                        std::cout << "The second index is out of bounds of the vector<vector<vector<char>>>" << std::endl;
                                    }
                                    
                                } else {
                                    std::cout << "The first index is out of bounds of the vector" << std::endl;
                                }
                            } else if (operation == "print") {
                                int printIndexX, printIndexY, printIndexZ;
                                std::cout << "Input number indexes of vector you would like to print" << std::endl;
                                std::cin >> printIndexX >> printIndexY >> printIndexZ;
                                if (printIndexX < myVector.size()) {
                                    if (printIndexY < myVector[printIndexX].size()) {
                                        if (printIndexZ < myVector[printIndexX][printIndexY].size()) {
                                            std::cout << "Here is your number:" << ' ' << myVector[printIndexX][printIndexY][printIndexZ] << std::endl;
                                        } else {
                                            std::cout << "The third index is out of bounds of the vector<vector<vector<char>>>" << std::endl;
                                        }
                                    } else {
                                        std::cout << "The second index is out of bounds of the vector<vector<char>>" << std::endl;
                                    }
                                } else {
                                    std::cout << "The first index is out of bounds of the vector<vector<char>>" << std::endl;
                                }
                            } else if (operation == "represent") {
                                    std::cout << "Here is your vector<vector<vector<char>>>: \n";
                                    for (std::size_t k = 0; k < myVector.size(); k++) {
                                        for (std::size_t i = 0; i < myVector.size(); i++) {
                                            for (std::size_t j = 0; j < myVector.size(); j++) {
                                                std::cout << myVector[i][j][k] << ' ';
                                            }
                                            std::cout << '\n';
                                        }
                                        std::cout << '\n' << '\n';
                                    }
                                } else {
                                std::cout << "There is no this command" << std::endl;
                            }

                            std::cout << "One more operation with this container? Input yes/no" << std::endl;
                            std::cin >> operation;
                            if (operation == "no") {break;}

                        }
                    }
                    if (dataType == "string") { 
                        std::vector<std::vector<std::vector<std::string>>> myVector(dataStructureSize);
                        for (std::size_t i = 0; i < dataStructureSize; i++) {
                            myVector[i].resize(dataStructureSize);
                            for (std::size_t j = 0; j < dataStructureSize; j++) {
                                myVector[i][j].resize(dataStructureSize);
                            }
                        }
                        while (true) {
                            std::string operation;
                            std::cout << "Input operation you would like to do: add/delete/print!" << std::endl;
                            std::cin >> operation;
                            
                            if (operation == "add") {
                                std::string string;
                                std::cout << "Input string you would like to add" << std::endl;
                                std::cin >> string;
                                std::cout << "Input X and Y and Z indexes where you would like to add" << std::endl;
                                std::cin >> Xindex >> Yindex >> Zindex;
                                if (Xindex < myVector.size()) {
                                    if (Yindex < myVector[Xindex].size()) {
                                        if (Yindex < myVector[Xindex].size()) {
                                            myVector[Xindex][Yindex][Zindex] = string;
                                        } else {
                                            std::cout << "The third index is out of bounds of the vector<vector<vector<string>>>" << std::endl;
                                        }
                                    } else {
                                        std::cout << "The second index is out of bounds of the vector<vector<vector<string>>" << std::endl;
                                    }
                                } else {
                                    std::cout << "Size of myVector is overflow!" << std::endl;
                                }
                            } else if (operation == "delete") {
                                int delIndexX, delIndexY, delIndexZ;
                                std::cout << "Input string indexes of vector you would like to delete" << std::endl;
                                std::cin >> delIndexX >> delIndexY >> delIndexZ;
                                if (delIndexX < myVector.size()) {
                                    if (delIndexY < myVector[delIndexX].size()) {
                                        if (delIndexZ < myVector[delIndexX][delIndexY].size()) {
                                            myVector[delIndexX][delIndexY].erase(myVector[delIndexX][delIndexY].begin() + delIndexZ);
                                        } else {
                                            std::cout << "The third index is out of bounds of the vector<vector<vector<string>>>" << std::endl;
                                        }
                                    } else {
                                        std::cout << "The second index is out of bounds of the vector<vector<vector<string>>>" << std::endl;
                                    }
                                    
                                }  else {
                                    std::cout << "The first index is out of bounds of the vector" << std::endl;
                                }
                            } else if (operation == "print") {
                                int printIndexX, printIndexY, printIndexZ;
                                std::cout << "Input number indexes of vector you would like to print" << std::endl;
                                std::cin >> printIndexX >> printIndexY >> printIndexZ;
                                if (printIndexX < myVector.size()) {
                                    if (printIndexY < myVector[printIndexX].size()) {
                                        if (printIndexZ < myVector[printIndexX][printIndexY].size()) {
                                            std::cout << "Here is your number:" << ' ' << myVector[printIndexX][printIndexY][printIndexZ] << std::endl;
                                        } else {
                                            std::cout << "The third index is out of bounds of the vector<vector<vector<string>>>" << std::endl;
                                        }
                                    } else {
                                        std::cout << "The second index is out of bounds of the vector<vector<string>>" << std::endl;
                                    }
                                } else {
                                    std::cout << "The first index is out of bounds of the vector<vector<string>>" << std::endl;
                                }
                            } else if (operation == "represent") {
                                    std::cout << "Here is your vector<vector<vector<std::string>>>: \n";
                                    for (std::size_t k = 0; k < myVector.size(); k++) {
                                        for (std::size_t i = 0; i < myVector.size(); i++) {
                                            for (std::size_t j = 0; j < myVector.size(); j++) {
                                                std::cout << myVector[i][j][k] << ' ';
                                            }
                                            std::cout << '\n';
                                        }
                                        std::cout << '\n' << '\n';
                                    }
                                } else {
                                std::cout << "There is no this command" << std::endl;
                            }

                            std::cout << "One more operation with this container? Input yes/no" << std::endl;
                            std::cin >> operation;
                            if (operation == "no") {break;}

                        }
                    }
                } else {
                    std::cout << "Only 1/2/3 dementions are available!" << std::endl;
                }
                
            } else if (dataStructureType == "set") {
                if (dataType == "int") {
                    std::set<int> mySet;
                    std::set<int>::iterator it = mySet.begin();
                    while (true) {
                        std::string operation;
                        std::cout << "Input operation you would like to do: add/delete/print/represent!" << std::endl;
                        std::cin >> operation;
                        if (operation == "add") {
                            int number;
                            std::cout << "Input number you would like to add" << std::endl;
                            std::cin >> number;
                            mySet.insert(number);

                        } else if (operation == "delete") {
                            int delIndex;
                            std::cout << "Input number index of set you would like to delete" << std::endl;
                            std::cin >> delIndex;
                            std::advance(it, delIndex);
                            if (delIndex < mySet.size()) {
                                mySet.erase(it);
                            } else {
                                std::cout << "The index is out of bounds of the set" << std::endl;
                            }
                        } else if (operation == "print") {
                            int printIndex;
                            std::cout << "Input number index of vector you would like to print" << std::endl;
                            std::cin >> printIndex;
                            if (printIndex < mySet.size()) {
                                std::advance(it, printIndex);
                                std::cout << "Here is your number in set: " << *it << std::endl;
                            } else {
                                std::cout << "The index is out of bounds of the set" << std::endl;
                            }
                        } else if (operation == "represent") {
                                auto itPresent = mySet.begin();
                                std::cout << "Here is your set<int>: \n";
                                while (itPresent != mySet.end()) {
                                    std::cout << *itPresent << ' ';
                                    itPresent++;
                                } 
                                std::cout << '\n';
                            } else {
                            std::cout << "There is no this command" << std::endl;
                        }

                        std::cout << "One more operation with this container? Input yes/no" << std::endl;
                        std::cin >> operation;
                        if (operation == "no") {break;}
                    }
                }
                if (dataType == "double") {
                    std::set<double> mySet;
                    std::set<double>::iterator it = mySet.begin();
                    while (true) {
                        std::string operation;
                        std::cout << "Input operation you would like to do: add/delete/print/represent!" << std::endl;
                        std::cin >> operation;
                        if (operation == "add") {
                            double number;
                            std::cout << "Input number you would like to add" << std::endl;
                            std::cin >> number;
                            mySet.insert(number);

                        } else if (operation == "delete") {
                            int delIndex;
                            std::cout << "Input number index of set you would like to delete" << std::endl;
                            std::cin >> delIndex;
                            std::advance(it, delIndex);
                            if (delIndex < mySet.size()) {
                                mySet.erase(it);
                            } else {
                                std::cout << "The index is out of bounds of the set" << std::endl;
                            }
                        } else if (operation == "print") {
                            int printIndex;
                            std::cout << "Input number index of vector you would like to print" << std::endl;
                            std::cin >> printIndex;
                            if (printIndex < mySet.size()) {
                                std::advance(it, printIndex);
                                std::cout << "Here is your number in set: " << *it << std::endl;
                            } else {
                                std::cout << "The index is out of bounds of the set" << std::endl;
                            }
                        } else if (operation == "represent") {
                                auto itPresent = mySet.begin();
                                std::cout << "Here is your set<double>: \n";
                                while (itPresent != mySet.end()) {
                                    std::cout << *itPresent << ' ';
                                    itPresent++;
                                } 
                                std::cout << '\n';
                        } else {
                            std::cout << "There is no this command" << std::endl;
                        }

                        std::cout << "One more operation with this container? Input yes/no" << std::endl;
                        std::cin >> operation;
                        if (operation == "no") {break;}
                    }
                }

                if (dataType == "float") {
                    std::set<float> mySet;
                    std::set<float>::iterator it = mySet.begin();
                    while (true) {
                        std::string operation;
                        std::cout << "Input operation you would like to do: add/delete/print/represent!" << std::endl;
                        std::cin >> operation;
                        if (operation == "add") {
                            float number;
                            std::cout << "Input number you would like to add" << std::endl;
                            std::cin >> number;
                            mySet.insert(number);

                        } else if (operation == "delete") {
                            int delIndex;
                            std::cout << "Input number index of set you would like to delete" << std::endl;
                            std::cin >> delIndex;
                            if (delIndex < mySet.size()) {
                                std::advance(it, delIndex);
                                mySet.erase(it);
                            } else {
                                std::cout << "The index is out of bounds of the set" << std::endl;
                            }
                        } else if (operation == "print") {
                            int printIndex;
                            std::cout << "Input number index of vector you would like to print" << std::endl;
                            std::cin >> printIndex;
                            if (printIndex < mySet.size()) {
                                std::advance(it, printIndex);
                                std::cout << "Here is your number in set: " << *it << std::endl;
                            } else {
                                std::cout << "The index is out of bounds of the set" << std::endl;
                            }
                        } else if (operation == "represent") {
                                auto itPresent = mySet.begin();
                                std::cout << "Here is your set<float>: \n";
                                while (itPresent != mySet.end()) {
                                    std::cout << *itPresent << ' ';
                                    itPresent++;
                                } 
                                std::cout << '\n';
                        } else {
                            std::cout << "There is no this command" << std::endl;
                        }

                        std::cout << "One more operation with this container? Input yes/no" << std::endl;
                        std::cin >> operation;
                        if (operation == "no") {break;}
                    }
                }
                if (dataType == "string") {
                    std::set<std::string> mySet;
                    std::set<std::string>::iterator it = mySet.begin();
                    while (true) {
                        std::string operation;
                        std::cout << "Input operation you would like to do: add/delete/print/represent!" << std::endl;
                        std::cin >> operation;
                        if (operation == "add") {
                            std::string string;
                            std::cout << "Input string you would like to add" << std::endl;
                            std::cin >> string;
                            mySet.insert(string);

                        } else if (operation == "delete") {
                            int delIndex;
                            std::cout << "Input string index of set you would like to delete" << std::endl;
                            std::cin >> delIndex;
                            if (delIndex < mySet.size()) {
                                std::advance(it, delIndex);
                                mySet.erase(it);
                            } else {
                                std::cout << "The index is out of bounds of the set" << std::endl;
                            }
                        } else if (operation == "print") {
                            int printIndex;
                            std::cout << "Input number index of vector you would like to print" << std::endl;
                            std::cin >> printIndex;
                            if (printIndex < mySet.size()) {
                                std::advance(it, printIndex);
                                std::cout << "Here is your number in set: " << *it << std::endl;
                            } else {
                                std::cout << "The index is out of bounds of the set" << std::endl;
                            }
                        } else if (operation == "represent") {
                                auto itPresent = mySet.begin();
                                std::cout << "Here is your set<std::string>: \n";
                                while (itPresent != mySet.end()) {
                                    std::cout << *itPresent << ' ';
                                    itPresent++;
                                } 
                                std::cout << '\n';
                        } else {
                            std::cout << "There is no this command" << std::endl;
                        }

                        std::cout << "One more operation with this container? Input yes/no" << std::endl;
                        std::cin >> operation;
                        if (operation == "no") {break;}
                    }
                }
                if (dataType == "char") {
                    std::set<char> mySet;
                    std::set<char>::iterator it = mySet.begin();
                    while (true) {
                        std::string operation;
                        std::cout << "Input operation you would like to do: add/delete/print/represent!" << std::endl;
                        std::cin >> operation;
                        if (operation == "add") {
                            char symbol;
                            std::cout << "Input char you would like to add" << std::endl;
                            std::cin >> symbol;
                            mySet.insert(symbol);

                        } else if (operation == "delete") {
                            int delIndex;
                            std::cout << "Input char index of set you would like to delete" << std::endl;
                            std::cin >> delIndex;
                            if (delIndex < mySet.size()) {
                                std::advance(it, delIndex);
                                mySet.erase(it);
                            } else {
                                std::cout << "The index is out of bounds of the set" << std::endl;
                            }
                        } else if (operation == "print") {
                            int printIndex;
                            std::cout << "Input number index of vector you would like to print" << std::endl;
                            std::cin >> printIndex;
                            if (printIndex < mySet.size()) {
                                std::advance(it, printIndex);
                                std::cout << "Here is your char in set: " << *it << std::endl;
                            } else {
                                std::cout << "The index is out of bounds of the set" << std::endl;
                            }
                        } else if (operation == "represent") {
                                auto itPresent = mySet.begin();
                                std::cout << "Here is your set<char>: \n";
                                while (itPresent != mySet.end()) {
                                    std::cout << *itPresent << ' ';
                                    itPresent++;
                                } 
                                std::cout << '\n';
                        } else {
                            std::cout << "There is no this command" << std::endl;
                        }

                        std::cout << "One more operation with this container? Input yes/no" << std::endl;
                        std::cin >> operation;
                        if (operation == "no") {break;}
                    }
                }
            } else if (dataStructureType == "map") {
                if (dataType == "int") {
                    std::map<int, int> myMap;
                    std::map<int, int>::const_iterator addIt = myMap.begin();
                    while (true) {
                        std::string operation;
                        std::cout << "Input operation you would like to do: add/delete/print/represent!" << std::endl;
                        std::cin >> operation;

                        if (operation == "add") {
                            int number, secondNumber;
                            std::cout << "Input first and second number you would like to add as a pair" << std::endl;
                            std::cin >> number >> secondNumber;
                            myMap.insert(std::pair<int, int>(number, secondNumber));
                            addIt++;

                        } else if (operation == "delete") {
                            int delIndex;
                            std::cout << "Input number index of pair in map you would like to delete" << std::endl;
                            std::cin >> delIndex;
                            std::map<int, int>::const_iterator it = myMap.begin();
                            std::size_t localIt = 0;
                            bool isDeleted = false;
                            while (it != myMap.end()) {
                                if (localIt == delIndex) {
                                    myMap.erase(it);
                                    isDeleted = true;
                                    break;
                                }
                                localIt++;
                                it++;
                            }
                            if (!isDeleted) {
                                std::cout << "The index is out of bounds of the map" << std::endl;
                            }
                        } else if (operation == "print") {
                            int printIndex;
                            std::cout << "Input number index of map you would like to print" << std::endl;
                            std::cin >> printIndex;
                            std::map<int, int>::const_iterator it = myMap.begin();
                            std::size_t localIt = 0;
                            bool isPrinted = false;
                            while (it != myMap.end()) {
                                if (localIt == printIndex) {
                                    std::cout << "Here is your map pair: " << it->first << ' ' << it->second << std::endl; 
                                    isPrinted = true;
                                    break;
                                }
                                localIt++;
                                it++;
                            }
                            if (!isPrinted) {
                                std::cout << "The index is out of bounds of the map" << std::endl;
                            }
                        } else if (operation == "represent") {
                                auto itPresent = myMap.begin();
                                std::cout << "Here is your std::map<int>: \n";
                                while (itPresent != myMap.end()) {
                                    std::cout << itPresent->first << ' ' << itPresent->second << '\n';
                                    itPresent++;
                                } 
                        } else {
                            std::cout << "There is no this command" << std::endl;
                        }

                        std::cout << "One more operation with this container? Input yes/no" << std::endl;
                        std::cin >> operation;
                        if (operation == "no") {break;}
                    }
                    
                }
                if (dataType == "double") {
                    std::map<double, double> myMap;
                    std::map<double, double>::const_iterator addIt = myMap.begin();
                    while (true) {
                        std::string operation;
                        std::cout << "Input operation you would like to do: add/delete/print/represent!" << std::endl;
                        std::cin >> operation;

                        if (operation == "add") {
                            double number, secondNumber;
                            std::cout << "Input first and second number you would like to add as a pair" << std::endl;
                            std::cin >> number >> secondNumber;
                            myMap.insert(std::pair<double, double>(number, secondNumber));
                            addIt++;

                        } else if (operation == "delete") {
                            int delIndex;
                            std::cout << "Input number index of pair in map you would like to delete" << std::endl;
                            std::cin >> delIndex;
                            std::map<double, double>::const_iterator it = myMap.begin();
                            std::size_t localIt = 0;
                            bool isDeleted = false;
                            while (it != myMap.end()) {
                                if (localIt == delIndex) {
                                    myMap.erase(it);
                                    isDeleted = true;
                                    break;
                                }
                                localIt++;
                                it++;
                            }
                            if (!isDeleted) {
                                std::cout << "The index is out of bounds of the map" << std::endl;
                            }
                        } else if (operation == "print") {
                            int printIndex;
                            std::cout << "Input number index of map you would like to print" << std::endl;
                            std::cin >> printIndex;
                            std::map<double, double>::const_iterator it = myMap.begin();
                            std::size_t localIt = 0;
                            bool isPrinted = false;
                            while (it != myMap.end()) {
                                if (localIt == printIndex) {
                                    std::cout << "Here is your map pair: " << it->first << ' ' << it->second << std::endl; 
                                    isPrinted = true;
                                    break;
                                }
                                localIt++;
                                it++;
                            }
                            if (!isPrinted) {
                                std::cout << "The index is out of bounds of the map" << std::endl;
                            }
                        }else if (operation == "represent") {
                                auto itPresent = myMap.begin();
                                std::cout << "Here is your std::map<double>: \n";
                                while (itPresent != myMap.end()) {
                                    std::cout << itPresent->first << ' ' << itPresent->second << '\n';
                                    itPresent++;
                                } 
                        } else {
                            std::cout << "There is no this command" << std::endl;
                        }

                        std::cout << "One more operation with this container? Input yes/no" << std::endl;
                        std::cin >> operation;
                        if (operation == "no") {break;}
                    }
                }
                if (dataType == "float") {
                    std::map<float, float> myMap;
                    std::map<float, float>::const_iterator addIt = myMap.begin();
                    while (true) {
                        std::string operation;
                        std::cout << "Input operation you would like to do: add/delete/print/represent!" << std::endl;
                        std::cin >> operation;

                        if (operation == "add") {
                            float number, secondNumber;
                            std::cout << "Input first and second number you would like to add as a pair" << std::endl;
                            std::cin >> number >> secondNumber;
                            myMap.insert(std::pair<float, float>(number, secondNumber));
                            addIt++;

                        } else if (operation == "delete") {
                            int delIndex;
                            std::cout << "Input number index of pair in map you would like to delete" << std::endl;
                            std::cin >> delIndex;
                            std::map<float, float>::const_iterator it = myMap.begin();
                            std::size_t localIt = 0;
                            bool isDeleted = false;
                            while (it != myMap.end()) {
                                if (localIt == delIndex) {
                                    myMap.erase(it);
                                    isDeleted = true;
                                    break;
                                }
                                localIt++;
                                it++;
                            }
                            if (!isDeleted) {
                                std::cout << "The index is out of bounds of the map" << std::endl;
                            }
                        } else if (operation == "print") {
                            int printIndex;
                            std::cout << "Input number index of map you would like to print" << std::endl;
                            std::cin >> printIndex;
                            std::map<float, float>::const_iterator it = myMap.begin();
                            std::size_t localIt = 0;
                            bool isPrinted = false;
                            while (it != myMap.end()) {
                                if (localIt == printIndex) {
                                    std::cout << "Here is your map pair: " << it->first << ' ' << it->second << std::endl; 
                                    isPrinted = true;
                                    break;
                                }
                                localIt++;
                                it++;
                            }
                            if (!isPrinted) {
                                std::cout << "The index is out of bounds of the map" << std::endl;
                            }
                        } else if (operation == "represent") {
                            auto itPresent = myMap.begin();
                            std::cout << "Here is your std::map<float>: \n";
                            while (itPresent != myMap.end()) {
                                std::cout << itPresent->first << ' ' << itPresent->second << '\n';
                                itPresent++;
                            } 
                        } else {
                            std::cout << "There is no this command" << std::endl;
                        }

                        std::cout << "One more operation with this container? Input yes/no" << std::endl;
                        std::cin >> operation;
                        if (operation == "no") {break;}
                    }
                }
                if (dataType == "string") {
                    std::map<std::string, std::string> myMap;
                    std::map<std::string, std::string>::const_iterator addIt = myMap.begin();
                    while (true) {
                        std::string operation;
                        std::cout << "Input operation you would like to do: add/delete/print/represent!" << std::endl;
                        std::cin >> operation;

                        if (operation == "add") {
                            std::string string, secondString;
                            std::cout << "Input first and second string you would like to add as a pair" << std::endl;
                            std::cin >> string >> secondString;
                            myMap.insert(std::pair<std::string, std::string>(string, secondString));
                            addIt++;

                        } else if (operation == "delete") {
                            int delIndex;
                            std::cout << "Input number index of pair in map you would like to delete" << std::endl;
                            std::cin >> delIndex;
                            std::map<std::string, std::string>::const_iterator it = myMap.begin();
                            std::size_t localIt = 0;
                            bool isDeleted = false;
                            while (it != myMap.end()) {
                                if (localIt == delIndex) {
                                    myMap.erase(it);
                                    isDeleted = true;
                                    break;
                                }
                                localIt++;
                                it++;
                            }
                            if (!isDeleted) {
                                std::cout << "The index is out of bounds of the map" << std::endl;
                            }
                        } else if (operation == "print") {
                            int printIndex;
                            std::cout << "Input string index of map you would like to print" << std::endl;
                            std::cin >> printIndex;
                            std::map<std::string, std::string>::const_iterator it = myMap.begin();
                            std::size_t localIt = 0;
                            bool isPrinted = false;
                            while (it != myMap.end()) {
                                if (localIt == printIndex) {
                                    std::cout << "Here is your map pair: " << it->first << ' ' << it->second << std::endl; 
                                    isPrinted = true;
                                    break;
                                }
                                localIt++;
                                it++;
                            }
                            if (!isPrinted) {
                                std::cout << "The index is out of bounds of the map" << std::endl;
                            }
                        } else if (operation == "represent") {
                                auto itPresent = myMap.begin();
                                std::cout << "Here is your std::map<std::string>: \n";
                                while (itPresent != myMap.end()) {
                                    std::cout << itPresent->first << ' ' << itPresent->second << '\n';
                                    itPresent++;
                                } 
                        } else {
                            std::cout << "There is no this command" << std::endl;
                        }

                        std::cout << "One more operation with this container? Input yes/no" << std::endl;
                        std::cin >> operation;
                        if (operation == "no") {break;}
                    }
                }
                if (dataType == "char") {
                    std::map<char, char> myMap;
                    std::map<char, char>::const_iterator addIt = myMap.begin();
                    while (true) {
                        std::string operation;
                        std::cout << "Input operation you would like to do: add/delete/print/represent!" << std::endl;
                        std::cin >> operation;

                        if (operation == "add") {
                            char symbol, secondSymbol;
                            std::cout << "Input first and second string you would like to add as a pair" << std::endl;
                            std::cin >> symbol >> secondSymbol;
                            myMap.insert(std::pair<char, char>(symbol, secondSymbol));
                            addIt++;

                        } else if (operation == "delete") {
                            int delIndex;
                            std::cout << "Input number index of pair in map you would like to delete" << std::endl;
                            std::cin >> delIndex;
                            std::map<char, char>::const_iterator it = myMap.begin();
                            std::size_t localIt = 0;
                            bool isDeleted = false;
                            while (it != myMap.end()) {
                                if (localIt == delIndex) {
                                    myMap.erase(it);
                                    isDeleted = true;
                                    break;
                                }
                                localIt++;
                                it++;
                            }
                            if (!isDeleted) {
                                std::cout << "The index is out of bounds of the map" << std::endl;
                            }
                        } else if (operation == "print") {
                            int printIndex;
                            std::cout << "Input char index of map you would like to print" << std::endl;
                            std::cin >> printIndex;
                            std::map<char, char>::const_iterator it = myMap.begin();
                            std::size_t localIt = 0;
                            bool isPrinted = false;
                            while (it != myMap.end()) {
                                if (localIt == printIndex) {
                                    std::cout << "Here is your map pair: " << it->first << ' ' << it->second << std::endl; 
                                    isPrinted = true;
                                    break;
                                }
                                localIt++;
                                it++;
                            }
                            if (!isPrinted) {
                                std::cout << "The index is out of bounds of the map" << std::endl;
                            }
                        } else if (operation == "represent") {
                                auto itPresent = myMap.begin();
                                std::cout << "Here is your std::map<char>: \n";
                                while (itPresent != myMap.end()) {
                                    std::cout << itPresent->first << ' ' << itPresent->second << '\n';
                                    itPresent++;
                                } 
                        } else {
                            std::cout << "There is no this command" << std::endl;
                        }

                        std::cout << "One more operation with this container? Input yes/no" << std::endl;
                        std::cin >> operation;
                        if (operation == "no") {break;}
                    }
                }
            }
        } else {
            std::cout << "Wrong name of data structure" << std::endl;
        }

        std::cout << "One more time with this menu? Input yes/no" << std::endl;
        std::string menuStatus;
        std::cin >> menuStatus;
        if (menuStatus == "no") {break;}
    }
}
