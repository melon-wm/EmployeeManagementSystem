//
// Created by wangmeng on 2022/11/29.
//
#pragma once
#include <iostream>
#include "worker.h"
#ifndef EMPLOYEEMANAGEMENTSYSTEM_MANAGER_H
#define EMPLOYEEMANAGEMENTSYSTEM_MANAGER_H

//æ≠¿Ì¿‡
class Manager: public Worker{
public:
    Manager(int id,string name,int dId);

    virtual void showInfo();

    virtual string getDeptName();
};


#endif //EMPLOYEEMANAGEMENTSYSTEM_MANAGER_H
