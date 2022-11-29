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
    //���캯��
    WorkerManager();
    //չʾ�˵�
    void Show_menu();
    //�˳�����
    void ExitSystem();
    //���ְ��
    void Add_Emp();
    //�����ļ�
    void save();
    //��������
    ~WorkerManager();
public:
    //��¼ְ������
    int m_EmpNumber;
    //ְ������ָ��
    Worker** m_EmpArray;
};


#endif //EMPLOYEEMANAGEMENTSYSTEM_WORKERMANAGER_H
