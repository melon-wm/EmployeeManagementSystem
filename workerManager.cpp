//
// Created by wangmeng on 2022/11/28.
//

#include "workerManager.h"

WorkerManager::WorkerManager() {
    this->m_EmpNumber = 0;
    this->m_EmpArray = NULL;
}

void WorkerManager::Show_menu() {
    cout<<"*********************************"<<endl;
    cout<<"********欢迎使用职工管理系统********"<<endl;
    cout<<"**********0.退出管理系统**********"<<endl;
    cout<<"**********1.增加职工信息**********"<<endl;
    cout<<"**********2.显示职工信息**********"<<endl;
    cout<<"**********3.删除离职员工**********"<<endl;
    cout<<"**********4.修改职工信息**********"<<endl;
    cout<<"**********5.查找职工信息**********"<<endl;
    cout<<"**********6.按照编号排序**********"<<endl;
    cout<<"**********7.清空所有文档**********"<<endl;
    cout<<endl;

}

void WorkerManager::ExitSystem() {
    cout<<"欢迎下次使用！"<<endl;
    system("pause");
    exit(0);
}

void WorkerManager::Add_Emp() {
    cout<<"请输入添加职工数量"<<endl;
    int addNum;
    cin>>addNum;
    if(addNum>0){
        //计算添加的新的空间的大小
        int newSize = this->m_EmpNumber+addNum;
        //开辟新空间
        Worker** newSpace = new Worker*[newSize];
        //拷贝原来的内容
        if(this->m_EmpArray != NULL){
            for(int i =0;i<this->m_EmpNumber;i++){
                newSpace[i] = this->m_EmpArray[i];
            }
        }
        //添加数据
        for(int i = 0;i<addNum;i++){
            int id;
            string name;
            int dSelect;//部门的选择
            cout<<"请输入第"<<i+1<<"个新职工编号"<<endl;
            cin>>id;
            cout<<"请输入第"<<i+1<<"个新职工姓名"<<endl;
            cin>>name;
            cout<<"请选择该职工的岗位:"<<endl;
            cout<<"1:普通职工"<<endl;
            cout<<"2:经理"<<endl;
            cout<<"3:老板"<<endl;
            cin>>dSelect;

            Worker* worker = NULL;
            switch (dSelect) {
                case 1:
                    worker = new Employee(id,name,1);
                    break;
                case 2:
                    worker = new Manager(id,name,2);
                    break;
                case 3:
                    worker = new Boss(id,name,3);
                    break;
                default:
                    break;
            }
            //将创建的职工指针，保存到数组中
            newSpace[this->m_EmpNumber+i] = worker;
        }
        delete[] this->m_EmpArray;
        this->m_EmpArray = newSpace;
        this->m_EmpNumber = newSize;
        //成功添加之后保存到文件中
        cout<<"成功添加"<<addNum<<"名新职工!!!"<<endl;
        //保存到txt中
        this->save();
    } else{
        cout<<"输入数据有误"<<endl;
    }
    system("pause");
    system("cls");
}

void WorkerManager::save() {
    ofstream ofs;
    ofs.open(FILENAME,ios::out);//用输出的方式打开文件 --写文件
    //将每个人的数据写入到文件中
    for(int i=0;i<this->m_EmpNumber;i++){
        ofs<<this->m_EmpArray[i]->m_ID<<" "
           <<this->m_EmpArray[i]->m_Name<<" "
           <<this->m_EmpArray[i]->m_DeptID<<" "<<endl;
    }
    //关闭文件
    ofs.close();
}

WorkerManager::~WorkerManager(){
    if(this->m_EmpArray!=NULL){
        delete[] this->m_EmpArray;
        this->m_EmpArray = NULL;
    }
}
