//無理やりクラスを使って書いた練習


#include <iostream>

class sample{
    public:
        std::string A;
        std::string moto();
};

std::string sample::moto(){
    std::string B;
    B = "Hello,World!";
    return B;
}

int main(){
    sample data;
    std::cin >> data.A;
    if(data.A == data.moto()){
        std::cout << "AC" << std::endl;
    }
    else{
        std::cout << "WA" << std::endl;
    }
    return 0;
}
