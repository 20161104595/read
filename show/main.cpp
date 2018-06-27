//
//  main.cpp
//  show
//
//  Created by 20161104595 on 18/6/26.
//  Copyright © 2018年 20161104595. All rights reserved.
//

#include <iostream>
#include<string>
using namespace std;
/*struct Student{
    int name;
    int sex;
    int tel;
    int program_name;
    int clas;
    double score[10];
    double final_score;
};*/
int main(int argc, const char * argv[]) {
    // insert code here...
    FILE *fp1;
    FILE *fp2;
    //float score[4];
    int i,j,temp,score[4];
    float ave=0;
    fp1=fopen("//Users//a20161104595//Desktop//show//fp1.csv","r+");
    fp2=fopen("//Users//a20161104595//Desktop//show//fp2.csv","r+");
    //if(fp1==NULL)
    //{
    //    printf("要打开的文件不存在");
    //}
    std::cout<<"请输入四位评委的打分:\n";
    for(i=0;i<4;i++)
        cin>>score[i];
        for(i=0;i<4;i++)
            for(j=i+1;j<4;j++)
            {
                if(score[i]>score[j])
                {
                    temp=score[i];
                    score[i]=score[j];
                    score[j]=temp;
                }
            }
        for(i=1;i<3;i++)
            ave+=score[i];
             ave=ave/2;
    cout<<"该选手的最后得分为:"<<ave<<endl;
        system("pause");
        //return 0;
        
}




