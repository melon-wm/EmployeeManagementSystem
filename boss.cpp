//
// Created by wangmeng on 2022/11/29.
//

#include "boss.h"
Boss::Boss(int id, std::string name, int dId){
    this->m_ID =id;
    this->m_Name = name;
    this->m_DeptID = dId;
}

void Boss::showInfo(){
    cout<<"ְ����ţ�"<< this->m_ID
        <<"\tְ��������"<<this->m_Name
        <<"\t��λ��"<<this->getDeptName()
        <<"\t��λְ�𣺹���˾���е�����"<<endl;
}

string Boss::getDeptName(){
    return string("�ܲ�");
}