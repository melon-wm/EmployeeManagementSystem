#include <iostream>
#include "workerManager.h"
#include "Worker.h"
#include "employee.h"
#include "manager.h"
#include "boss.h"
//�����ռ���
using namespace std;
//�궨����
//ȫ�ֱ���������
//����������
using namespace std;
int main() {
    //���Դ���
//    Worker* worker = NULL;
//    worker  = new Employee(1,"����",1);
//    worker->showInfo();
//    delete(worker);
//
//    worker = new Manager(2,"����",2);
//    worker->showInfo();
//    delete(worker);
//
//    worker = new Boss(3,"����",3);
//    worker->showInfo();
//    delete(worker);
    //ʵ���������߶���
    WorkerManager wm;
    int choice;
    while (true){
        wm.Show_menu();
        cout<<"����������ѡ��"<<endl;
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
