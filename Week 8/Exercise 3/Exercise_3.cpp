#include <iostream>

int main(){
    std::string Name[] = {"Handi Ramadhan", "Rio Alfandra", "Ronaldo Valentino Uneputty", "Achmad Yaumil Fadjri R.", "Alivia Rahma Pramesti", "Ari Lutfianto", "Arief Budiman"};
    int Value[] = {90, 55, 80, 60, 70, 65, 60};
    int query = 60;
    bool found = true;
    int dataSize = sizeof(Value)/sizeof(Value[0]);

    for(int i = 0; i < dataSize; i++){
        if(Value[i] == query){
            Name[i] = "Joko";
        }
    }
    if(!found){
        std::cout << "Value is not found." << std::endl;
    }
    for(int i = 0; i < dataSize; i++){
        if(i < dataSize - 1){
            std::cout << Name[i] << ", ";
        }
        else{
            std::cout << Name[i];
        }
    }   
}
