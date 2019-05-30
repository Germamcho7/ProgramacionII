#include<iostream>
#include <console.h>

class ListNode
{
public:
    int data;
    ListNode *siguiente;
    void agregarCola(int valor, ListNode *&cabeza)
    {
        ListNode *tmp = cabeza;
        if(cabeza == nullptr)
        {
            cabeza = new ListNode{valor, nullptr};
            return;
        }
        while (tmp->siguiente != nullptr)
        {
            tmp = tmp->siguiente;
        }
        tmp->siguiente = new ListNode();
        tmp->siguiente->data = valor;
        tmp->siguiente->siguiente = nullptr;
    }

    void imprimirLista(ListNode *cabeza)
    {
        for (ListNode *ptr = cabeza; ptr != nullptr; ptr = ptr->siguiente)
        {
            cout << ptr->data <<endl;
        }
    }

    // TAREA
    void removerItem(int lugar, ListNode *&cabeza)
    {
        ListNode *tmp = cabeza;
        for( int i=0; i < lugar; i++)
        {

            tmp = tmp->siguiente;
        }

        while (tmp->siguiente->siguiente != nullptr)
        {
            cout << tmp->data <<endl;

            int main()
            {
                ListNode* cabeza = new ListNode();
                cabeza->agregarCola(1,cabeza);
                cabeza->agregarCola(2,cabeza);
                cabeza->agregarCola(3,cabeza);
                cabeza->agregarCola(4,cabeza);
                cabeza->agregarCola(5,cabeza);
                cabeza->agregarCola(6,cabeza);
                cabeza->agregarCola(7,cabeza);
                cabeza->agregarCola(8,cabeza);
                cabeza->imprimirLista(cabeza);
                cout << "--------" << endl;
                cabeza->removerItem(3,cabeza);
                cout << "--------" << endl;
                cabeza->imprimirLista(cabeza);
                return 0;
            }
            tmp->data = tmp->siguiente->data;
            tmp = tmp->siguiente;
        }
        tmp->data = tmp->siguiente->data;
        tmp->siguiente = nullptr;
    }
}

