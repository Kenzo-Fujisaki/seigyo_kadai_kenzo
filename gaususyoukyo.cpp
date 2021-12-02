#include <iostream>
#include <vector>

int main(){
    double x1,x2,x3;
    //拡大係数行列
    std::vector<std::vector<double>>data(3,std::vector<double>(4));
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            std::cin >> data.at(i).at(j);
        }
    }
    //前進消去法
    //①、2行3行からx1をなくす
    std::vector<double> copied_row_vector1 = data.at(1);
    std::vector<double> copied_row_vector2 = data.at(2);
    for(int i=0;i<4;i++){
        data.at(1).at(i) -= (data.at(0).at(i)*copied_row_vector1.at(0))/data.at(0).at(0);
        data.at(2).at(i) -= (data.at(0).at(i)*copied_row_vector2.at(0))/data.at(0).at(0);
    }
    //②、3行からx2をなくす
    std::vector<double> copied_row_vector22 = data.at(2);
    for(int i=0;i<4;i++){
        data.at(2).at(i) -= (data.at(1).at(i) * copied_row_vector22.at(1)) / data.at(1).at(1);
    }
    //後退代入法
    x3 = data.at(2).at(3)/data.at(2).at(2);
    x2 = (data.at(1).at(3)-data.at(1).at(2)*x3) / data.at(1).at(1);
    x1 = (data.at(0).at(3)-data.at(0).at(1)*x2-data.at(0).at(2)*x3) / data.at(0).at(0);
    //答えを出力
    std::cout << "x1:" << x1 << std::endl;
    std::cout << "x2:" << x2 << std::endl;
    std::cout << "x3:" << x3 << std::endl;
}
