//
// Created by wangmeng on 2022/11/28.
//

#include "workerManager.h"

WorkerManager::WorkerManager() {
    this->m_EmpNumber = 0;
    this->m_EmpArray = NULL;
}

void WorkerManager::Show_menu() {
    cout<<"*********************************"<<endl;
    cout<<"********��ӭʹ��ְ������ϵͳ********"<<endl;
    cout<<"**********0.�˳�����ϵͳ**********"<<endl;
    cout<<"**********1.����ְ����Ϣ**********"<<endl;
    cout<<"**********2.��ʾְ����Ϣ**********"<<endl;
    cout<<"**********3.ɾ����ְԱ��**********"<<endl;
    cout<<"**********4.�޸�ְ����Ϣ**********"<<endl;
    cout<<"**********5.����ְ����Ϣ**********"<<endl;
    cout<<"**********6.���ձ������**********"<<endl;
    cout<<"**********7.��������ĵ�**********"<<endl;
    cout<<endl;

}

void WorkerManager::ExitSystem() {
    cout<<"��ӭ�´�ʹ�ã�"<<endl;
    system("pause");
    exit(0);
}

void WorkerManager::Add_Emp() {
    cout<<"���������ְ������"<<endl;
    int addNum;
    cin>>addNum;
    if(addNum>0){
        //������ӵ��µĿռ�Ĵ�С
        int newSize = this->m_EmpNumber+addNum;
        //�����¿ռ�
        Worker** newSpace = new Worker*[newSize];
        //����ԭ��������
        if(this->m_EmpArray != NULL){
            for(int i =0;i<this->m_EmpNumber;i++){
                newSpace[i] = this->m_EmpArray[i];
            }
        }
        //�������
        for(int i = 0;i<addNum;i++){
            int id;
            string name;
            int dSelect;//���ŵ�ѡ��
            cout<<"�������"<<i+1<<"����ְ�����"<<endl;
            cin>>id;
            cout<<"�������"<<i+1<<"����ְ������"<<endl;
            cin>>name;
            cout<<"��ѡ���ְ���ĸ�λ:"<<endl;
            cout<<"1:��ְͨ��"<<endl;
            cout<<"2:����"<<endl;
            cout<<"3:�ϰ�"<<endl;
            cin>>dSelect;

            Worker* worker = NULL;
            switch (dSelect) {
                case 1:
                    worker = new Employee(id,name,1);
                    break;
                case 2:
                    worker = new Manager(id,name,2);
                    break;
                case 3:
                    worker = new Boss(id,name,3);
                    break;
                default:
                    break;
            }
            //��������ְ��ָ�룬���浽������
            newSpace[this->m_EmpNumber+i] = worker;
        }
        delete[] this->m_EmpArray;
        this->m_EmpArray = newSpace;
        this->m_EmpNumber = newSize;
        //�ɹ����֮�󱣴浽�ļ���
        cout<<"�ɹ����"<<addNum<<"����ְ��!!!"<<endl;
        //���浽txt��
        this->save();
    } else{
        cout<<"������������"<<endl;
    }
    system("pause");
    system("cls");
}

void WorkerManager::save() {
    ofstream ofs;
    ofs.open(FILENAME,ios::out);//������ķ�ʽ���ļ� --д�ļ�
    //��ÿ���˵�����д�뵽�ļ���
    for(int i=0;i<this->m_EmpNumber;i++){
        ofs<<this->m_EmpArray[i]->m_ID<<" "
           <<this->m_EmpArray[i]->m_Name<<" "
           <<this->m_EmpArray[i]->m_DeptID<<" "<<endl;
    }
    //�ر��ļ�
    ofs.close();
}

WorkerManager::~WorkerManager(){
    if(this->m_EmpArray!=NULL){
        delete[] this->m_EmpArray;
        this->m_EmpArray = NULL;
    }
}
