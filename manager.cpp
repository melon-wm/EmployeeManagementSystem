//
// Created by wangmeng on 2022/11/29.
//

#include "manager.h"

Manager::Manager(int id, std::string name, int dId){
    this->m_ID =id;
    this->m_Name = name;
    this->m_DeptID = dId;
}

void Manager::showInfo(){
    cout<<"ְ����ţ�"<< this->m_ID
        <<"\tְ��������"<<this->m_Name
        <<"\t��λ��"<<this->getDeptName()
        <<"\t��λְ������ϰ彻�������񣬲��·������Ա��"<<endl;
}

 string Manager::getDeptName(){
    return string("����");
}
