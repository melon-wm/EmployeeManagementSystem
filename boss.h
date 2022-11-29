//
// Created by wangmeng on 2022/11/29.
//

#ifndef EMPLOYEEMANAGEMENTSYSTEM_BOSS_H
#define EMPLOYEEMANAGEMENTSYSTEM_BOSS_H
#include "Worker.h"

class Boss: public Worker{
public:
    Boss(int id,string name,int dId);

    virtual void showInfo();

    virtual string getDeptName();
};


#endif //EMPLOYEEMANAGEMENTSYSTEM_BOSS_H
