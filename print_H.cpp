//
//  learing C demo.cpp
//  
//
//  Created by 陈汐 on 2021/2/1.
//

#include<iostream>
using namespace std;
int main()
{
    int line= 3;
    int front = 10;
    int gap = 15; 
    for(int j = 0;j<line;j++){
        for(int i = 0;i<front;i++){
            cout<<' ';
        }
        cout<<"//";front=front-1;
        for(int i =0;i<gap-2;i++){
            cout<<' ';
        }
        cout<<"//"<<endl;
    }

      for(int i = 0;i<front;i++){
            cout<<' ';
        }
        cout<<'/';front=front-1;
        for(int i =0;i<gap;i++){
            cout<<'/';
        }
     cout<<'/'<<endl;

    for(int j = 0;j<line;j++){
        for(int i = 0;i<front;i++){
            cout<<' ';
        }
        cout<<"//";front=front-1;
        for(int i =0;i<gap-2;i++){
            cout<<' ';
        }
        cout<<'/'<<'/'<<endl;
    }

    return 0;

}
