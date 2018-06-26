//
//  main.cpp
//  show
//
//  Created by 20161104595 on 18/6/26.
//  Copyright © 2018年 20161104595. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}
#include <stdio.h>
#include<math.h>
#include<stdlib.h>
struct Student{
    int name;
    int sex;
    int tel;
    int program_name;
    int clas;
    double score[10];
    double final_score;
};


int main(int argc, const char * argv[]) {
    // insert code here...
    FILE *fp1;
    FILE *fp2;
    float score[4];
    int i=0;
    float max=0.0,min=100.0,sum=0.0;
    int name[5],sex[2],program_name,program_type,clas[2],tel[15];
    fp1=fopen("");
    fp2=fopen("");
    //if(fp1==NULL)
    //{
    //    printf("要打开的文件不存在");
    //}
    printf("请输入四位评委的打分:");
    for(i=0;i<4;i++)
    {
        scanf("%f",&score[i]);
        if(max<score[i])
        {
            max=score[i];
        }
        if(min>score[i])
        {
            min=score[i];
        }
        sum=sum+score[i];
    }
    sum=sum-max-min;
    printf("该选手的最后分数为:%f\n",sum/2.0);
    // printf("Hello, World!\n");
    return 0;
}
