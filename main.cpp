//
//  main.cpp
//  字符串反转输出
//
//  Created by ljp on 2017/2/24.
//  Copyright © 2017年 li jianping. All rights reserved.
//

#include <iostream>
using namespace std;

void recursion(){
    char temp;
    cin >> temp;
    if(temp == '0'){
        printf("结束\n");
        return;
    }
    if(temp != '0'){
        recursion();
        printf("%c",temp);
        printf("recursion...\n");
    }
}


int main(int argc, const char * argv[]) {
    // insert code here...
    //std::cout << "Hello, World!\n";
    recursion();
    return 0;
}
