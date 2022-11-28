//
// Created by wangmeng on 2022/11/28.
//
#pragma once
#include <iostream>
#include <string>
#ifndef EMPLOYEEMANAGEMENTSYSTEM_WORKER_H
#define EMPLOYEEMANAGEMENTSYSTEM_WORKER_H
using namespace std;
//ְ��������
class Worker {
public:
    //��ʾ������Ϣ
    virtual void showInfo() =0;
    //��ȡ��λ����
    virtual string getDeptName() = 0;
    //���ű��
public:
    int m_ID;
    string m_Name;
    int m_DeptID;
};


#endif //EMPLOYEEMANAGEMENTSYSTEM_WORKER_H
