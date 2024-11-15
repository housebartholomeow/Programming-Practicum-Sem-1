#include <iostream>

int main(){
    int Value[] = {90, 55, 80, 60, 70, 65, 60};

    std::cout<<"Please choose your preferred method of sorting."<<std::endl;
    std::cout<<"Type 1 for insertion. Type 2 for selection. Type 3 for bubble."<<std::endl;

    int choice;
    std::cin>>choice;

    if(choice == 1){ 
        std::cout<<"You have chosen the insertion sorting method."<<std::endl;
        int i, dataSize = sizeof(Value)/sizeof(Value[0]), temp;
        for(int j = 0; j < dataSize; j++){
            i = j-1;
            temp = Value[j];
            while(Value[i] < temp&&i>=0){
                Value[i+1]= Value[i];
                i--;
            }
            Value[i+1] = temp;
        }
        for(int i = 0; i < dataSize; i++){
            std::cout<< Value[i] <<" ";
        }
    }
    else if(choice == 2){
        std::cout<<"You have chosen the selection sorting method."<<std::endl;
        int dataSize = sizeof(Value)/sizeof(Value[0]), max, temp;
        for(int i = 0; i < dataSize; i++){
            max = i;
            for(int j = i + 1; j < dataSize; j++){
                if(Value[j] > Value[max]){
                    max = j;
                }
            }
            temp = Value[i];
            Value[i] = Value[max];
            Value[max] = temp;
        }
        for(int i = 0; i < dataSize; i++){
            std::cout<< Value[i] <<" ";
        }
    }
    else if(choice == 3){
        std::cout<<"You have chosen the bubble sorting method."<<std::endl;
        int dataSize = sizeof(Value)/sizeof(Value[0]), temp;
        for(int j = 0; j < dataSize - 1; j++){
            if(Value[j] < Value[j + 1]){
                temp = Value[j];
                Value[j] = Value[j+1];
                Value[j+1] = temp;
            }
        }
        for(int i = 0; i < dataSize; i++){
            std::cout<< Value[i] <<" ";
        }
    }
    else{
        std::cout<<"Please type in one of the predetermined numbers."<<std::endl;
    }
}
