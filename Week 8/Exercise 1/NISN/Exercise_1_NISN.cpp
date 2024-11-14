#include <iostream>

int main(){
    long long int NISN[] = {9960312699, 9963959682, 9950310962, 9970272750, 9970293945, 9952382180, 9965653989};
    int dataSize = sizeof(NISN)/sizeof(NISN[0]);
    
    std::cout<<"Please choose your preferred method of sorting."<<std::endl;
    std::cout<<"Type 1 for insertion. Type 2 for selection. Type 3 for bubble."<<std::endl;

    int choice;
    std::cin>>choice;

    if(choice == 1){
        std::cout<<"You have chosen the insertion sorting method."<<std::endl;
        int i;
        long long int temp;
        for(int j = 1; j < dataSize; j++){
            i = j-1;
            temp = NISN[j];
            while(NISN[i] < temp && i>=0){
                NISN[i+1] = NISN[i];
                i--;
            }
            NISN[i+1] = temp;
        }
        for(int i = 0; i < dataSize; i++){
            std::cout<< NISN[i] <<" ";
        }
    }
    else if(choice == 2){
              std::cout<<"You have chosen the selection sorting method."<<std::endl;
        int i, max;
        long long int temp;
        for(int i = 0; i < dataSize; i++){
            max = i;
            for(int j = i + 1; j < dataSize; j++){
                if(NISN[j] > NISN[max]){
                    max = j;
                }
            }
            temp = NISN[i];
            NISN[i] = NISN[max];
            NISN[max] = temp;
        }
        for(int i = 0; i < dataSize; i++){
            std::cout<< NISN[i] <<" ";
        }
    }
    else if(choice == 3){
              std::cout<<"You have chosen the bubble sorting method."<<std::endl;
        int i;
        long long int temp;
        for(int i = 0; i < dataSize - 1; i++){
            for(int j = 0; j < dataSize - 1; j++){
                if(NISN[j] < NISN[j + 1]){
                    temp = NISN[j];
                    NISN[j] = NISN[j+1];
                    NISN[j+1] = temp;
                }
            }
        }
        for(int i = 0; i < dataSize; i++){
            std::cout<< NISN[i] <<" ";
        }
    }
    else{
        std::cout<<"Please type in one of the predetermined numbers."<<std::endl;  
    }
}
