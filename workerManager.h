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
    //���캯��
    WorkerManager();
    //չʾ�˵�
    void Show_menu();
    //�˳�����
    void ExitSystem();
    //��������
    ~WorkerManager();
};


#endif //EMPLOYEEMANAGEMENTSYSTEM_WORKERMANAGER_H
