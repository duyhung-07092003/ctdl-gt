#include<bits/stdc++.h>
#include<conio.h>
using namespace std;
struct Node{
	int info;
	Node *next;
};
typedef struct Node* node;


node TaoNode(double x){
	node tmp = new Node();
	tmp->info=x;
	tmp->next=NULL; 
	return tmp;
}


bool KhoiTao(node pHead){
	return pHead==NULL;
}


int Dem(node p){
	int cnt=0; 
	while (p!=NULL){
		++cnt;
		p=p->next;
	}
	return cnt;
}

//1.Nhap vao 1 danh sach(them 1 phan tu vao cuoi dslk)
void ThemSau(node &pHead,double x){
	node tmp=TaoNode(x);
	if(pHead==NULL){
		pHead=tmp;
	}else{
		node p=pHead;
		while(p->next!=NULL){
			p=p->next;
		}
		p->next=tmp;
	}
}
void Nhap(node &pHead,int n)
{    
    KhoiTao(pHead);
    for(int i = 0; i < n; i++)
    {
        int x;
        cout <<"\t\t\t\t\t\t [+] Nhap vao info cua NUT thu "<< i + 1 <<": ";
        cin >> x;
        Node *p = new Node;
        p = TaoNode(x);
        ThemSau(pHead,x);
    }
    cout <<"\t\t\t\t\t\t--------------------------------------------------------";
    cout <<endl;
}

// 2.In danh sach
void In_Node(node q)
{
	cout << "[ " << q->info  << " ] \t";
}
void In_ds(node pHead)
{
	node p;
	p = pHead;
	 cout<<"\t\t\t\t\t\t\t"<<"||========================================||" << endl;
    cout << "\t\t\t\t\t\t\t||  DU LIEU TRONG DANH SACH LIEN KET DON  || \n";
    cout<<"\t\t\t\t\t\t\t"<<"||========================================||" << endl;
    cout << endl << endl;
    cout << "\t\t\t\t\t\t";
	while (p != NULL)
	{
		In_Node(p);
		p = p->next;
	}
	cout << endl;
	cout <<"\t\t\t\t\t\t--------------------------------------------------------";
    cout <<endl;
}

//3.Tinh trung binh cong cac phan tu cua danh sach
double TB(node &pHead) {
	double sum = 0;
	int n = Dem(pHead);
	node p = pHead;
	while(p != NULL) {
		sum += p->info;
		p = p->next;
	}
	return sum/n;
}

//4.them 1 phan tu vao dau dslk 
void ThemDau(node &pHead,double x)
{

     cout <<" \t\t\t\t\t\t--- DANH SACH SAU KHI THEM MOT NUT VAO DAU --- "<<endl;
	node tmp= TaoNode(x);
	if(pHead==NULL){
		pHead=tmp;
		pHead->next= NULL;
	}else{
		tmp->next = pHead ;
		pHead = tmp;
	}
    In_ds(pHead);
}

void xoanode(node* &pHead,node *k)
{
     node* p,*q;
     p=pHead;
     while(p!=NULL )
     {
             q=p;
             p = p->next;      
     }
   
     if(p==l)
     {
             l=l->next;
             delete(k);
     }
     else
     if(p!=NULL)
     {
                q->next=p->next;
                delete(k);
     }
     return q;
     
}
void xoale(node* &l)
{
     node* p,*q;
     int x;
     p=l;
  do
  {
  x=p->gt;
   if(x%2==1)
      {
              
                    q = xoanode(l,p);
                  
                    p=q;
      }
      p=p->next;
    
      
   }while(p!=NULL);
    
}


void Xoa_Dau(node &pHead){
	if(pHead==NULL) 
		return;
	node p = pHead;
	pHead=pHead->next;
	delete p;
}
/*
//5.xoa bo nut co gia tri y trong danh sach
void Xoa_Y(node &pHead, double y)
{
    cout <<" \t\t\t\t\t\t--- DANH SACH SAU KHI XOA MOT NUT GIA TRI Y --- "<<endl;
	node p; 
	p=pHead; 
	while(p!= NULL && p->info !=y)
		p=p->next;
	if(p==NULL)
	{
		return;
	}	
	if(p==pHead) 
	{
		Node* Xoa_Dau(pHead);
		return;
	}
	else
	{
		node q=pHead;
		while (q->next !=p)
			q=q->next;
		q->next =p->next;
		delete p;
	}
}
// xoa phan tu o dau 
void Xoa_Dau(node &pHead){
	if(pHead==NULL) 
		return;
	node p = pHead;
	pHead=pHead->next;
	delete p;
}
*/
//6.Sap xep danh sach theo thu tu tang dan
void Sap_Xep(node &pHead)
{
    cout <<" \t\t\t\t\t\t--- DANH SACH SAU SAP XEP THEO THU TU TANG DAN CUA INFO --- "<<endl;
    Node *q = new Node;
    Node *p = new Node;
    for(p = pHead; p != NULL; p=p->next)
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

int main(){
	double x;
	int lc,n;
    char t;
	Menu();
	node pHead=NULL;
	do{
		cout <<"\n\n\t\t\t\t\t\t[?] Moi ban chon(1-6): ";
        cin >>lc;
		switch(lc)
		{
			case 1:
			{
				cout << "\t\t\t\t\t\t[?] Nhap so phan tu: ";
    			cin >> n;				
                Nhap(pHead,n);
                cout<< "\t\t\t\t\t\tAn enter de quay ve menu hoac an phim bat ki de tiep tuc lua chon \n";
				t = getch();
				if(t == 13)
				{
					system("cls");
					Menu();		
				}
				break;
			}    
			case 2:
			{
				In_ds(pHead);
                cout<< "\t\t\t\t\t\tAn enter de quay ve menu hoac an phim bat ki de tiep tuc lua chon \n";
				t = getch();
				if(t == 13)
				{
					system("cls");
					Menu();		
				}
				break;
			}	
			case 3:
			{
				cout<<"\n\t\t\t\t\t\t Trung binh cong cac phan tu la: "<<TB(pHead) << endl;
				cout<< "\t\t\t\t\t\tAn enter de quay ve menu hoac an phim bat ki de tiep tuc lua chon \n";
				t = getch();
				if(t == 13)
				{
					system("cls");
					Menu();		
				}
                break;
			}

			case 4:
			{
				int x;
				cout << "\t\t\t\t\t\t[-] Nhap vao nut muon them: ";
			    cin >> x;
				ThemDau(pHead,x);
                cout<< "\t\t\t\t\t\tAn enter de quay ve menu hoac an phim bat ki de tiep tuc lua chon \n";
				t = getch();
				if(t == 13)
				{
					system("cls");
					Menu();		
				}
				break;
			}
				
			case 5:
			{
                double y;
                int dem = 0;
				In_ds(pHead);
                cout << "\t\t\t\t\t\t[+] Nhap vao nut muon xoa: ";
                cin >> y;
				Xoa_Y(pHead, y);
				In_ds(pHead);
                cout<< "\t\t\t\t\t\tAn enter de quay ve menu hoac an phim bat ki de tiep tuc lua chon \n";
				t = getch();
				if(t == 13)
				{
					system("cls");
					Menu();		
				}
				break;	
			}
			case 6:
			{	Sap_Xep(pHead);
				In_ds(pHead);
				cout<< "\t\t\t\t\t\tAn enter de quay ve menu hoac an phim bat ki de tiep tuc lua chon \n";
				t = getch();
				if(t == 13)
				{
					system("cls");
					Menu();		
				}
				break;
			}

			default:
				cout << "\n\t\t\t\t\t\t Thoat!\n";
				exit(1);
		}
	}while(lc >= 1 && lc <= 6);	
	return 0;
}