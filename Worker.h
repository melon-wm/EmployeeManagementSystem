//
// Created by wangmeng on 2022/11/28.
//
#pragma once
#include <iostream>
#include <string>
#ifndef EMPLOYEEMANAGEMENTSYSTEM_WORKER_H
#define EMPLOYEEMANAGEMENTSYSTEM_WORKER_H
using namespace std;
//职工抽象类
class Worker {
public:
    //显示个人信息
    virtual void showInfo() =0;
    //获取岗位名称
    virtual string getDeptName() = 0;
    //部门编号
public:
    int m_ID;
    string m_Name;
    int m_DeptID;
};


#endif //EMPLOYEEMANAGEMENTSYSTEM_WORKER_H
