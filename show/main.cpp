//
//  main.cpp
//  show
//
//  Created by 20161104595 on 18/6/26.
//  Copyright © 2018年 20161104595. All rights reserved.
//

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>

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
/*int read()
{
    
};*/
string Trim(string& str)
{
    str.erase(0,str.find_first_not_of(" \t\r\n"));
    str.erase(str.find_last_not_of(" \t\r\n") + 1);
    return str;
}


int main(int argc, const char * argv[]) {
    // insert code here...
    //FILE *fp1;
    //FILE *fp2;
    int i,j,temp,score[8];
    float ave=0;
    //fp1=fopen("//Users//a20161104595//Desktop//show//fp1.csv","r+");
    //fp2=fopen("//Users//a20161104595//Desktop//show//fp2.csv","r+");
    ifstream fin("/Users/a20161104595/Desktop/show/fp1.csv");
    
    string line;
    while (getline(fin, line)) {
        //cout << line << endl;
        
        istringstream sin(line);
        vector<string> fields;
        string field;
        while (getline(sin, field, ',')) {
            fields.push_back(field);
        }
        string name = Trim(fields[0]);
        string age = Trim(fields[1]);
        string birthday = Trim(fields[2]);
        cout << name << "\t" << age << "\t" << birthday << endl;
    }

    std::cout<<"请输入八位评委的打分:\n";
    for(i=0;i<8;i++)
        cin>>score[i];
        for(i=0;i<8;i++)
            for(j=i+1;j<8;j++)
            {
                if(score[i]>score[j])
                {
                    temp=score[i];
                    score[i]=score[j];
                    score[j]=temp;
                }
            }
        for(i=1;i<7;i++)
            ave+=score[i];
             ave=ave/6;
    cout<<"该选手的最后得分为:"<<ave<<endl;
        system("pause");
        return 0;
}




