#include<iostream>
#include<conio.h>
using namespace std;
struct Node{
	int info;
	Node *next;
};
typedef struct Node* node;

void Menu()
{ 
    cout<<"\t\t\t\t\t\t ===============================================================\n";
	cout<<"\t\t\t\t\t\t ||                            MENU                           ||\n";
	cout<<"\t\t\t\t\t\t ||===========================================================||\n";
	cout<<"\t\t\t\t\t\t ||  1. Nhap vao mot danh sach                                ||\n";
    cout<<"\t\t\t\t\t\t ||  2. Hien thi toan bo danh sach                            ||\n";
    cout<<"\t\t\t\t\t\t ||  3. Tinh trung binh cong cac phan tu cua danh sach        ||\n";
    cout<<"\t\t\t\t\t\t ||  4. Them mot nut vao dau danh sach                        ||\n";
    cout<<"\t\t\t\t\t\t ||  5. Xoa nut co gia tri Y trong danh sach                  ||\n";
    cout<<"\t\t\t\t\t\t ||  6. Sap xep danh sach theo thu tu tang dan cua truong info||\n";
	cout<<"\t\t\t\t\t\t ||  0. Ket thuc chuong trinh                                 ||\n";
	cout<<"\t\t\t\t\t\t ===============================================================\n";
}

void back()
{    
    char t;
    cout<< "\n\t\t\t\t\t\t[!] An enter de quay ve menu hoac an phim bat ki de tiep tuc lua chon \n";
		t = getch();
		if(t == 13)
		{
			system("cls");
			Menu();		
		}
}

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
        cout <<"\t\t\t\t\t\t\t[+] Nhap vao info cua NUT thu "<< i + 1 <<": ";
        cin >> x;
        Node *p = new Node;
        p = TaoNode(x);
        ThemSau(pHead,x);
    }
}

void In_Node(node q)
{
	cout << "[ " << q->info  << " ] \t";
}

void In_ds(node pHead)
{
	node p;
	p = pHead;
    cout << "\n\t\t\t\t\t\t\t";
	while (p != NULL)
	{
		In_Node(p);
		p = p->next;
	}
	cout <<endl;
}

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

void ThemDau(node &pHead,double x)
{

    cout<<"\t\t\t\t\t\t\t||==========================================||" << endl;
    cout<<"\t\t\t\t\t\t\t||  DANH SACH SAU KHI THEM MOT NUT VAO DAU  ||" <<endl;;
    cout<<"\t\t\t\t\t\t\t||==========================================||" << endl;
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

void Xoa(node &pHead, double y)
{	
	cout<<"\t\t\t\t\t\t\t||==========================================||" << endl;
    cout<<"\t\t\t\t\t\t\t||  DANH SACH SAU KHI XOA MOT NUT GIA TRI Y ||" <<endl;;
    cout<<"\t\t\t\t\t\t\t||==========================================||" << endl;
	node p = pHead;
	node q = pHead;
	while(p != NULL)
	{
		if(p-> info == y)
		{
			node k = p;
			if(p == pHead)
			{
				pHead = pHead -> next;
				p = pHead;
				q = pHead;
			}
			else{
				q -> next = p -> next;
				p = p -> next;
			}
			delete k;
			k =NULL;
			continue;
		}
		q = p;
		p = p -> next;
	}
}

void Sap_Xep(node &pHead)
{
    cout<<"  \t\t\t\t\t\t   ||=====================================================||" << endl;
    cout<<"  \t\t\t\t\t\t   || DANH SACH SAU SAP XEP THEO THU TU TANG DAN CUA INFO ||" <<endl;;
    cout<<"  \t\t\t\t\t\t   ||=====================================================||" << endl;
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

int main(){
	double x;
	int lc,n;
	Menu();
	node pHead=NULL;
	do{
		cout <<"\n\n\t\t\t\t\t\t[?] Moi ban chon(0-6): ";
        cin >>lc;
		switch(lc)
		{
			case 0: 
            {
                cout <<"\t\t\t\t\t\t\t\t  ~ KET THUC CHUONG TRINH ~ "<<endl;
                exit(1);
            }
			case 1:
			{
				cout << "\t\t\t\t\t\t[?] Nhap so phan tu: ";
    			cin >> n;				
                Nhap(pHead,n);
				back();
				break;
			}    
			case 2:
			{
				cout<<"\t\t\t\t\t\t\t||========================================||" << endl;
                cout<<"\t\t\t\t\t\t\t||  DU LIEU TRONG DANH SACH LIEN KET DON  ||" << endl;
                cout<<"\t\t\t\t\t\t\t||========================================||" << endl;
				In_ds(pHead);
				back();
				break;
			}	
			case 3:
			{
				cout<<"\t\t\t\t\t\t\t||=============================================||" << endl;
                cout<<"\t\t\t\t\t\t\t||  TRUNG BINH CONG CAC PHAN TU CUA DANH SACH  ||" <<endl;;
                cout<<"\t\t\t\t\t\t\t||=============================================||" << endl;
				cout<<"\n\t\t\t\t\t\t\t    [*] Trung binh cong cac phan tu la: "<<TB(pHead) << endl;
				back();
                break;
			}

			case 4:
			{
				int x;
				cout << "\n\t\t\t\t\t\t[+] Nhap vao nut muon them: ";
			    cin >> x;
				ThemDau(pHead,x);
				back();
				break;
			}
				
			case 5:
			{
                double y;
				cout<<"\t\t\t\t\t\t\t||========================================||" << endl;
                cout<<"\t\t\t\t\t\t\t||  DU LIEU TRONG DANH SACH LIEN KET DON  ||" << endl;
                cout<<"\t\t\t\t\t\t\t||========================================||" << endl;
				In_ds(pHead);
                cout << "\t\t\t\t\t\t[-] Nhap vao nut muon xoa: ";
                cin >> y;
				Xoa(pHead, y);
				In_ds(pHead);
				back();
				break;	
			}
			case 6:
			{	
				Sap_Xep(pHead);
				In_ds(pHead);
				back();
				break;
			}

			default:
				cout << "\n\t\t\t\t\t\t ~ THOAT ~ \n";
				break;
		}
	}while(lc >= 0 && lc <= 6);	
	return 0;
}