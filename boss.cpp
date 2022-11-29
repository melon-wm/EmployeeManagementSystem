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
    cout<<"职工编号："<< this->m_ID
        <<"\t职工姓名："<<this->m_Name
        <<"\t岗位："<<this->getDeptName()
        <<"\t岗位职责：管理公司所有的事务"<<endl;
}

string Boss::getDeptName(){
    return string("总裁");
}