#include <iostream>
#include "workerManager.h"
#include "Worker.h"
#include "employee.h"
#include "manager.h"
#include "boss.h"
//命名空间区
using namespace std;
//宏定义区
//全局变量定义区
//函数定义区
using namespace std;
int main() {
    //测试代码
//    Worker* worker = NULL;
//    worker  = new Employee(1,"张三",1);
//    worker->showInfo();
//    delete(worker);
//
//    worker = new Manager(2,"李四",2);
//    worker->showInfo();
//    delete(worker);
//
//    worker = new Boss(3,"王五",3);
//    worker->showInfo();
//    delete(worker);
    //实例化管理者对象
    WorkerManager wm;
    int choice;
    while (true){
        wm.Show_menu();
        cout<<"请输入您的选择："<<endl;
        cin>>choice;
        switch (choice) {
            case 0:
                wm.ExitSystem();
                break;
            case 1:
                wm.Add_Emp();
                break;
            case 2:
                break;
            case 3:
                break;
            case 4:
                break;
            case 5:
                break;
            case 6:
                break;
            case 7:
                break;
            default:
                system("cls");
                break;
        }
    }
    system("pause");
    return 0;
}
