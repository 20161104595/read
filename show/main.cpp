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
string Trim(string& str)
{
    str.erase(0,str.find_first_not_of(" \t\r\n"));
    str.erase(str.find_last_not_of(" \t\r\n") + 1);
    return str;
}
int menu_select()//菜单
{
    int MenuItem;
    
    cout<<"\n";
    cout<<"         | ********* 欢迎来到评分系统*********   |          \n";
    cout<<"         | ---------------------------------- |          \n";
    cout<<"         |	  1 --- 显示学生信息	             |          \n";
    cout<<"         |	  2 --- 显示裁判信息	             |          \n";
    cout<<"         |	  3 --- 裁判评分                   |          \n";
    cout<<"         |	  4 --- 排序       	             |           \n";
    cout<<"         |	  0 --- 退出系统  	             |            \n";
    
    do
    {
        printf("\n请输入选项（0－4）：");
        fflush(stdin);
        scanf("%d",&MenuItem);
    }
    while(MenuItem<0||MenuItem>4);
    
    return MenuItem;
}
int teacher_informations()//读取裁判信息
{
    ifstream fin("/Users/a20161104595/Desktop/show/fp1 3.csv");
    string line;
    while (getline(fin, line))
    {
        istringstream sin(line);
        vector<string> fields;
        string field;
    
        while (getline(sin, field, ','))
        {
            fields.push_back(field);
        }
        string name = Trim(fields[0]);
        string age = Trim(fields[1]);
        string birthday = Trim(fields[2]);
        cout << name << "\t" << age << "\t" << birthday << endl;
    }
    return 0;
}
int student_informations()//读取学生信息
{
    ifstream fin("/Users/a20161104595/Desktop/show/fp2.csv");
    string line;
    while (getline(fin, line))
    {
        istringstream sin(line);
        vector<string> fields;
        string field;
        
        while (getline(sin, field, ','))
        {
            fields.push_back(field);
        }
        string name = Trim(fields[0]);
        string sex = Trim(fields[1]);
        string program_name = Trim(fields[2]);
        string program_form = Trim(fields[3]);
        string clas = Trim(fields[4]);
        string tel = Trim(fields[5]);
        cout << name << "\t" << sex << "\t"<< program_form <<"\t "<< program_name <<"\t "<< clas <<"\t "<< tel <<"\t " << endl;
    }
    return 0;
}
void input()//裁判打分
{
        int i,j,temp,score[8];
        float ave=0;
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
        //system("pause");
}
    
int main()
{
    // insert code here...
    while(1)
    {
        switch(menu_select())
        {
            case 1:
                student_informations();
                break;
            case 2:
                teacher_informations();
                break;
            case 3:
                input();
                break;
            case 4:
                
                break;
            case 0:
                cout<<"Thank you for using！\n";
                return 0;
         }
     }
}
