#include <iostream>
#include <stdio.h> 
#include <stdlib.h> 
using namespace std;  
 
struct Nut
{
	int 		info;
	struct Nut 	*next;
};
typedef   struct Nut Node;
struct list{
    Node *pHead;
};
typedef struct list LIST;

void KhoiTao(LIST &ds){
    ds.pHead = NULL;
}
// int KiemTraRong(LIST ds){
//     //neu phan tu dau danh sach NULL
//     if (ds.pHead == NULL){
//         //tra ve 1 la co NULL
//         return 1;
//     }
//     //truong hop nguoc lai tra ve khong null
//     return 0;
// }
Node* TaoNode(int x) {
    Node *p;
    p = new Node;

    if (p==NULL) {
        cout << "KHONG DU BO NHO";
        return NULL;
    }
    p->info = x;
    p->next = NULL;
    return p;
}
void ChenDau(LIST &ds, Node *p) {
    if (ds.pHead==NULL){
        ds.pHead = p;
    }
    else {
        p->next = ds.pHead;
        ds.pHead = p;
    }
}
void ChenCuoi (LIST &ds, Node *p){
    Node *q;
    if (ds.pHead==NULL) {
        ds.pHead=p;
    }
    else {
		q = ds.pHead;
      	while (q -> next != NULL) 	
        	q = q->next;
    	q ->next = p;
    }
}
void Nhap(LIST &ds, int n){
    for(int i = 0; i < n; i++){
        int x;
        cout << "Nhap vao x: ";
        cin >> x;
        Node *p = new Node;
        p = TaoNode(x);
        ChenCuoi(ds,p);
    }
}
void Xuat(LIST ds)
{    
    Node *p = new Node;
    for(p = ds.pHead; p!= NULL; p=p->next)
	{
        cout << p->info << "   ";
    }
}
void Them_dau(LIST &ds,int n)
{
	 int x;
        cout << "Nhap vao x: ";
        cin >> x;
        Node *p = new Node;
        p = TaoNode(x);
        ChenDau(ds,p);
}

void Xoa(LIST &ds,int n)
{
    int  y;
    cout << "Nhap vao nut muon xoa: ";
    cin >> y;
    Node *q = new Node;
    Node *p = new Node;
    for(q = ds.pHead; q!= NULL; q=q->next)
	{

        if(q->info == y)
        {   // "em yêu anh nhiều lắm luôn ý !!!!"
            p->next = q-> next;
            delete q;
            q =NULL;
            return;
        }
        p=q;
    }
}

void bubblesort(LIST &ds,int n)
{
    Node *q = new Node;
    Node *p = new Node;
    for(p = ds.pHead; p != NULL; p=p->next)
	{
        for(q = p -> next; q  != NULL; q=q->next)
	    {
            if(p-> info > q -> info)
            {
                swap(p -> info,q ->info );
            }
        }
    }
}

int main(){
    LIST ds;
    int n;
    cout << "Nhap N: ";
    cin >> n;
    KhoiTao(ds);
    Nhap(ds,n);
    cout << "\nDU LIEU TRONG DANH SACH LIEN KET DON\n";
    Xuat(ds);
    double s;
    Node *p = new Node;
	for(p = ds.pHead; p!= NULL; p=p->next)
	{
        s += p->info ;
    }
    cout << "TBC: " << s / n << endl;
    
    Them_dau(ds,n);
    Xuat(ds);
	cout << endl;
    Xoa(ds,n);
    Xuat(ds);
	cout << endl;
    bubblesort(ds,n);
    Xuat(ds);

}

