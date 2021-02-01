//
//  learing C demo.cpp
//  
//
//  Created by 陈汐 on 2021/2/1.
//

#include<iostream>
#include<cstring>
int main(){
    using namespace std;
    const int Size = 15;
    char name1[Size];
    char name2[Size] = "C++owBoy";

    cout << "Howdy! I am "<< name2;
   cin >>name1;
    cout << strlen(name1) << "letters you just input";
    
}
