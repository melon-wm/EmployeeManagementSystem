//
// Created by wangmeng on 2022/11/28.
//
#pragma once
#include <iostream>
#ifndef EMPLOYEEMANAGEMENTSYSTEM_WORKERMANAGER_H
#define EMPLOYEEMANAGEMENTSYSTEM_WORKERMANAGER_H
#include "Worker.h"
#include "boss.h"
#include "manager.h"
#include "employee.h"
#include <fstream>
#define FILENAME "empFile.txt"
using namespace std;

class WorkerManager {
public:
    //构造函数
    WorkerManager();
    //展示菜单
    void Show_menu();
    //退出功能
    void ExitSystem();
    //添加职工
    void Add_Emp();
    //保存文件
    void save();
    //析构函数
    ~WorkerManager();
public:
    //记录职工人数
    int m_EmpNumber;
    //职工数组指针
    Worker** m_EmpArray;
};


#endif //EMPLOYEEMANAGEMENTSYSTEM_WORKERMANAGER_H
