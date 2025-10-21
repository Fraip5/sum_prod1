#include <iostream>

int main(int argc, char* argv[]){
        unsigned int sum = 0;
        unsigned int prod = 1u;
        if(argc>1){
                char *namber = argv[1];
                int index = 0;
                while(namber[index]!= '\0' && index<11){
                        if (namber[index]>=0 && namber[index]<='9'){
                                sum += (namber[index]-'0');
                                prod *= (namber[index]-'0');
                        } else {
                                std::cout << "wrong number " << argv[1] << "'" << std::endl;
                                return 1;
                        }
                        ++index;
                }
                std::cout << sum << ", " << prod << std::endl;
        } else{
                 unsigned int namber;
//              std::cout << "Input number ";
                std::cin >> namber;

                unsigned int sum = 0;
                unsigned int prod = 1u;
                do{
                        sum += namber % 10;
                        prod *= namber % 10;
                        namber /= 10;
                }while(namber != 0);
                std::cout << sum << ", " << prod << std::endl;
}
        return 0;
}

