#include<iostream>
#include<vector>

int main(){
  int a,b,c,d,e,f,answer;
  std::vector<std::vector<int>>gyoretu(3,std::vector<int>(3));
  for(int i=0; i<3; i++){
    for(int j=0; j<3; j++){
      std::cin >> gyoretu.at(i).at(j);
    }
  }
  a = gyoretu.at(0).at(0)*gyoretu.at(1).at(1)*gyoretu.at(2).at(2);
  b = gyoretu.at(0).at(1)*gyoretu.at(1).at(2)*gyoretu.at(2).at(0);
  c = gyoretu.at(0).at(2)*gyoretu.at(1).at(0)*gyoretu.at(2).at(1);
  d = gyoretu.at(0).at(2)*gyoretu.at(1).at(1)*gyoretu.at(2).at(0);
  e = gyoretu.at(1).at(2)*gyoretu.at(2).at(1)*gyoretu.at(0).at(0);
  f = gyoretu.at(2).at(2)*gyoretu.at(0).at(1)*gyoretu.at(1).at(0);

  answer = (a+b+c)-(d+e+f);

  std::cout << answer << std::endl;
}
