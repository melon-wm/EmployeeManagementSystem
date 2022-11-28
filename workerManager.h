//
// Created by wangmeng on 2022/11/28.
//
#pragma once
#include <iostream>
#ifndef EMPLOYEEMANAGEMENTSYSTEM_WORKERMANAGER_H
#define EMPLOYEEMANAGEMENTSYSTEM_WORKERMANAGER_H
using namespace std;

class WorkerManager {
public:
    //构造函数
    WorkerManager();
    //展示菜单
    void Show_menu();
    //退出功能
    void ExitSystem();
    //析构函数
    ~WorkerManager();
};


#endif //EMPLOYEEMANAGEMENTSYSTEM_WORKERMANAGER_H
