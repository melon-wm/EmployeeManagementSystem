#include <iostream>
#include "workerManager.h"
#include "Worker.h"
#include "employee.h"
//�����ռ���
using namespace std;
//�궨����
//ȫ�ֱ���������
//����������
using namespace std;
int main() {
    Worker* worker = NULL;
    worker  = new Employee(1,"����",1);
    worker->showInfo();
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
