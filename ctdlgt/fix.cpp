#include <iostream>
#include <conio.h>

using namespace std;  
 
struct Nut
{
	int 		info;
	struct Nut 	*next;
};
typedef   struct Nut Node;
struct list
{
    Node *pHead;
};
typedef struct list LIST;

void KhoiTao(LIST &ds)
{
    ds.pHead = NULL;
}
Node* TaoNode(int x) 
{
    Node *p;
    p = new Node;
    p->info = x;
    p->next = NULL;
    return p;
}

void Menu()
{ 

    cout<<"\t\t\t\t\t\t ==============================================================\n";
	cout<<"\t\t\t\t\t\t ||                            MENU                          ||\n";
	cout<<"\t\t\t\t\t\t ||==========================================================||\n";
	cout<<"\t\t\t\t\t\t ||        CHUONG TRINH QUAN LI NHAN VIEN                    ||\n";
	cout<<"\t\t\t\t\t\t ||  1.Nhap cao mot danh sach                                ||\n";
    cout<<"\t\t\t\t\t\t ||  2.Hien thi toan bo danh sach                            ||\n";
    cout<<"\t\t\t\t\t\t ||  3.Tinh trung binh cong cac phan tu cua danh sach        ||\n";
    cout<<"\t\t\t\t\t\t ||  4.Them mot nut vao dau danh sach                        ||\n";
    cout<<"\t\t\t\t\t\t ||  5.Xoa nut co gia tri Y trong danh sach                  ||\n";
    cout<<"\t\t\t\t\t\t ||  6.Sap xep danh sach theo thu tu tang dan cua truong info||\n";
	cout<<"\t\t\t\t\t\t ||  0. Ket thuc chuong trinh                                ||\n";
	cout<<"\t\t\t\t\t\t ==============================================================\n";
}

void back()
{    
    char t;
    cout<< "\t\t\t\t\t\tAn enter de quay ve menu hoac an phim bat ki de tiep tuc lua chon \n";
		t = getch();
		if(t == 13)
		{
			system("cls");
			Menu();		
		}
}
void ChenDau(LIST &ds, Node *p) 
{
    if (ds.pHead==NULL)
    {
        ds.pHead = p;
    }
    else 
    {
        p->next = ds.pHead;
        ds.pHead = p;
    }
}
void ChenCuoi (LIST &ds, Node *p)
{
    Node *q;
    if (ds.pHead==NULL) 
    {
        ds.pHead=p;
    }
    else 
    {
		q = ds.pHead;
      	while (q -> next != NULL) 	
        	q = q->next;
    	q ->next = p;
    }
}
void Nhap(LIST &ds, int n)
{    
    KhoiTao(ds);
    for(int i = 0; i < n; i++)
    {
        int x;
        cout <<"\t\t\t\t\t\t [+] Nhap vao info cua NUT thu "<< i + 1 <<": ";
        cin >> x;
        Node *p = new Node;
        p = TaoNode(x);
        ChenCuoi(ds,p);
    }
    cout <<"\t\t\t\t\t\t--------------------------------------------------------";
    cout <<endl;
}
void Xuat(LIST ds)
{    
    Node *p = new Node;
    cout<<"\t\t\t\t\t\t\t"<<"||========================================||" << endl;
    cout << "\t\t\t\t\t\t\t||  DU LIEU TRONG DANH SACH LIEN KET DON  || \n";
    cout<<"\t\t\t\t\t\t\t"<<"||========================================||" << endl;
    cout << endl << endl;

cout << "\t\t\t\t\t\t";
    for(p = ds.pHead; p!= NULL; p=p->next)
	{
        cout << "[ " << p->info  << " ] \t";
    }
    cout <<"\n\t\t\t\t\t\t--------------------------------------------------------";
    cout <<endl;
}
float TBC(LIST &ds,int n)
{
    float s;
    Node *p = new Node;
	for(p = ds.pHead; p!= NULL; p=p->next)
	{
        s += p->info ;
    }
	return s/n;
}

void Them_dau(LIST &ds,int n)
{
	 int x;
     cout << "\t\t\t\t\t\t[-] Nhap vao nut muon them: ";
     cin >> x;
     cout <<" \t\t\t\t\t\t--- DANH SACH SAU KHI THEM MOT NUT VAO DAU --- "<<endl;
     Node *p = new Node;
     p = TaoNode(x);
     ChenDau(ds,p);
     Xuat(ds);
}

void Xoa(LIST &ds,int n)
{
    int  y;
    int dem = 0;
    cout << "\t\t\t\t\t\t[+] Nhap vao nut muon xoa: ";
    cin >> y;
    cout <<" \t\t\t\t\t\t--- DANH SACH SAU KHI XOA MOT NUT GIA TRI Y --- "<<endl;
    Node *q = new Node;
    Node *p = new Node;
    for(q = ds.pHead; q!= NULL; q=q->next)
	{
        if(q->info == y)
        {   
            dem++;
            p->next = q-> next;
            delete q;
            q =NULL;
            return;
        }
        p=q;
    }  
}

void Sap_xep(LIST &ds,int n)
{
    cout <<" \t\t\t\t\t\t--- DANH SACH SAU SAP XEP THEO THU TU TANG DAN CUA INFO --- "<<endl;
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
        Xuat(ds);
}

int main()
{
    LIST ds;
    int n;
    Menu();
    int chon;
   
    do{
        cout <<"\n\n\t\t\t\t\t\t[?] Moi ban chon(1-6): ";
        cin >>chon;
        switch (chon)
        {
            case 1: 
			{
				cout << "\t\t\t\t\t\t[?] Nhap so phan tu: ";
    			cin >> n;
				Nhap(ds,n); 
				back();
				break;
			}
            case 2: 
            {
                Xuat(ds); 
                back();
                break;
            }
            case 3: 
            {
                cout << "\t\t\t\t\t\tTrung binh cong cua danh sach: " << TBC(ds,n) << endl; 
                cout <<"\n\t\t\t\t\t\t--------------------------------------------------------\n";
                back();
                break;
            }
            case 4: 
            {
                Them_dau(ds,n);
                back();
                break;
            }
            case 5: 
            {
                Xuat(ds);
                Xoa(ds,n); 
                Xuat(ds);
                back();
                break;
            }
            case 6: 
            {
                Sap_xep(ds,n); 
                back();
                break;
            }
            default: 
            cout<<"\t\t\t\t\t\tVui long nhap lai\n";
        }
    }
    while (chon !=0);
    return 0;
    
}
