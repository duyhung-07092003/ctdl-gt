#include <iostream>
#include <string.h>
 
 using namespace std;

struct Nut {
    int info;
    struct Nut * next;
    // tao thanh phan cuoi ds
    Nut *plist;
};
typedef struct Nut Node;

void KhoiTao(Nut &ds){

    //dat dia chi cuoi danh sach bang NULL
    ds.plist = NULL;
}
int KiemTraRong(Nut &ds){
    //neu phan tu dau danh sach NULL
    if (ds.plist == NULL){
        //tra ve 1 la co NULL
        return 1;
    }
    //truong hop nguoc lai tra ve khong null
    return 0;
}
Node* TaoNode(int x) {
    //tao mot node p moi
    Node *p,phead;
    p = new Node;

    //gan thanh phan data = x
    p->info=x;
    //gan con tro next = null
    p->next= NULL;
    //tra ve node p da tao
    return p;
}

void themsau(Node &ds, int x) 
{ 	Node *p;
	 p = new Node;
	 p->info = x;
	 if (ds.plist == NULL)
	 { 
	 	ds.plist = p;
	 	ds.plist->next = ds.plist; 
	}
	else
	{ p->next = ds.plist->next;
	 ds.plist->next = p;
	 ds.plist = p; 
	 }
}
void nhap(Nut &ds,int n)
{
    for(int i = 0; i < n; i++)
    {
        // Nhap du lieuj la so nguyen x
        int x;
        cout << "Nhap vao so x: ";
        cin >> x;
        // Cap phat dong
        Node *p = new Node;
        themsau(ds,x);
    }
}
void xuat(Nut &ds)
{
    Node *p = new Node;
    // duyet tu dau danh sach den cuoi danh sach 
//    for(p = ds.plist -> next; p != ds.plist -> next; p = p-> next)
//    {
//        cout << p -> info << "    ";
//    }
    p = ds.plist -> next;
    do
    {
    	cout << p->info << "    ";
    	p = p -> next;
	}while (p != ds.plist -> next);
}

int main() {
    Node ds;
    int n;
    cout << "Nhap vao so luong danh sach: ";
    cin >> n;
    KhoiTao(ds);
    nhap(ds,n);

    cout << "Mang \n";
    xuat(ds);
 
    return 0;
}