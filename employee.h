//
// Created by wangmeng on 2022/11/28.
//
#pragma once
#include <iostream>
#include "Worker.h"
using namespace std;
class Employee:public Worker{
public:
    Employee(int id,string name,int dId);
    virtual void showInfo();
    //��ȡ��λ����
    virtual string getDeptName();
};
