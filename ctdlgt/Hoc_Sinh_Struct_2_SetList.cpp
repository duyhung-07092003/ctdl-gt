#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>			
		 		   
using namespace std;
struct hoc_Sinh
{
	string ma_hoc_sinh;
	string ten;
	string lop;
	int diem_toan;
	int diem_ly;
	int diem_hoa;
	double	diem_tb;
};

void set_List(hoc_Sinh a[]);
void DiemTrungBinh(hoc_Sinh a[], int n);
void InTieuDe();
void hien_Thi_File(hoc_Sinh a[], int n);

int main()
{
	hoc_Sinh hs[201];
	set_List(hs);
	
	int n;
	cout<<"\n Nhap so luong hoc sinh can xu ly n = ";
	cin>>n;
	DiemTrungBinh(hs, n);

	cout<<"**************************************"	<<endl;
	cout<<"THONG TIN VE HOC SINH: "	<<endl;
	InTieuDe();
	hien_Thi_File(hs, n);

	return 0;
}

void DiemTrungBinh(hoc_Sinh a[], int n)
{
	for (int i = 0; i < n; i++)
		a[i].diem_tb = (a[i].diem_toan + a[i].diem_ly + a[i].diem_hoa)/ 3.0;
}

void InTieuDe()
{
	cout<<"+"	<<setfill('-')	<<setw(106)	<<"+";
	cout<<setfill(' ')	<<endl;
	
	cout<<left;
	cout<<"| "	<<setw(11)	<<"MA HOC SINH";
	cout<<"| "	<<setw(30)	<<"HO TEN";
	cout<<"| "	<<setw(10)	<<"LOP";
	
	cout<<right;
	cout<<"| "	<<setw(10)	<<"DIEM TOAN";
	cout<<"| "	<<setw(10)	<<"DIEM LY";
	cout<<"| "	<<setw(10)	<<"DIEM HOA";
	cout<<"| "	<<setw(10)	<<"DIEM TB"	<<" |"	<<endl;
	
	cout<<"+"	<<setfill('-')	<<setw(106)	<<"+";
	cout<<setfill(' ')	<<endl;
}

void hien_Thi_File(hoc_Sinh a[], int n)
{
	for (int j = 0; j < n; j++)
	{
		cout<<left;
		cout<<"| "	<<setw(11)	<<a[j].ma_hoc_sinh;	
		cout<<"| "	<<setw(30)	<<a[j].ten;	
		cout<<"| "	<<setw(10)	<<a[j].lop;	
		
		cout<<right;
		cout<<"| "	<<setw(10)	<<a[j].diem_toan;	
		cout<<"| "	<<setw(10)	<<a[j].diem_ly;	
		cout<<"| "	<<setw(10)	<<a[j].diem_hoa;	
		cout<<"| "	<<setw(10)	<<setprecision(3)	<<a[j].diem_tb	<<" |"	<<"\n";	
		
		cout<<"+"	<<setfill('-')	<<setw(106)	<<right		<<"+"	<<endl;
		cout<<setfill(' ');
	}
}

void set_List(hoc_Sinh a[])
{
	a[0] = {"LTV001", "Nguyen Hien Trang", "12G5", 7, 4, 7};
	a[1] = {"LTV002", "Nguyen Duong Bao Thien", "12C8", 7, 8, 7};
	a[2] = {"LTV003", "Tran Khoi Nguyen", "12D15", 6, 5, 4};
	a[3] = {"LTV004", "Nguyen Hoang Ngan", "12D14", 6, 8, 9};
	a[4] = {"LTV005", "Nguyen Ngoc Linh Dan", "12B1", 7, 7, 5};
	a[5] = {"LTV006", "Vong Thao Vy", "12H10", 4, 4, 9};
	a[6] = {"LTV007", "Phuong Le Quynh Nhu", "12H2", 8, 5, 5};
	a[7] = {"LTV008", "Tran Ngoc Bich", "12H12", 9, 10, 5};
	a[8] = {"LTV009", "Huynh Phu Tien", "12D6", 6, 9, 6};
	a[9] = {"LTV010", "Nguyen Gia Han", "12C10", 7, 7, 8};
	a[10] = {"TL241", "Phan Thi Hong Nhung", "12G2", 6, 6, 9};
	a[11] = {"TL242", "Huynh Luu Ngoc Chau", "12A9", 5, 5, 5};
	a[12] = {"TL243", "Dinh Thi Ngoc Bich", "12A7", 8, 7, 10};
	a[13] = {"TL244", "Lam Kieu Ngan", "12C12", 5, 7, 5};
	a[14] = {"TL245", "Huynh Nguyen Thien Nga", "12C11", 6, 6, 6};
	a[15] = {"TL246", "Luong Nguyen Thanh Ngan", "12E10", 5, 8, 4};
	a[16] = {"TL247", "Tran Lu Kim Ngan", "12E13", 7, 4, 9};
	a[17] = {"TL248", "Vu Nguyen Ngoc Trung", "12G12", 5, 5, 6};
	a[18] = {"TL249", "Nguyen Phuong Thuy Nha", "12E5", 10, 9, 10};
	a[19] = {"TL250", "Mai Thanh Thao Nguyen", "12G5", 8, 10, 8};
	a[20] = {"VINS261", "Vu Thanh Vinh", "12C14", 9, 6, 9};
	a[21] = {"VINS262", "Truong Vo Bao Han", "12C12", 10, 8, 5};
	a[22] = {"VINS263", "Pham Ngoc Bao Tram", "12D11", 6, 8, 9};
	a[23] = {"VINS264", "Nguyen Ngoc Uyen Nhi", "12E10", 6, 4, 9};
	a[24] = {"VINS265", "Hong Thuy Tien", "12D4", 5, 6, 4};
	a[25] = {"VINS266", "Tran Dang Tuong Vy", "12H8", 3, 5, 4};
	a[26] = {"VINS267", "Nguyen Le Duc Huy", "12D13", 7, 8, 7};
	a[27] = {"VINS268", "Huynh Thi Thuy Vy", "12E12", 3, 10, 8};
	a[28] = {"VINS269", "Lam Thi Thuy Trang", "12D9", 3, 10, 9};
	a[29] = {"VINS270", "Dang Nguyen Phuong Vy", "12D1", 7, 4, 7};
	a[30] = {"TL251", "Nguyen Khanh Nguyen", "12D9", 4, 6, 8};
	a[31] = {"TL252", "Hoang Nhu Bao Han", "12C8", 9, 6, 7};
	a[32] = {"TL253", "Kim Tran Thanh Thao", "12A8", 9, 5, 8};
	a[33] = {"TL254", "Nguyen Xuan Dung", "12A9", 7, 9, 9};
	a[34] = {"TL255", "Lam Tan Dat", "12B4", 3, 10, 4};
	a[35] = {"TL256", "Le Phu Tai", "12A2", 6, 4, 6};
	a[36] = {"TL257", "Tran Thao Ngoc", "12D6", 6, 4, 10};
	a[37] = {"TL258", "Tran Quoc Huy", "12C9", 6, 5, 7};
	a[38] = {"TL259", "Tran Thi Diem Phi", "12H4", 8, 9, 4};
	a[39] = {"TL260", "Tran Quoc Viet", "12C11", 4, 8, 4};
	a[40] = {"ACAD381", "Pham Thi To Tam", "12B7", 4, 8, 9};
	a[41] = {"ACAD382", "Nguyen Thi Huong Giang", "12C1", 6, 6, 4};
	a[42] = {"ACAD383", "Nguyen Le Nhu Quynh", "12A9", 7, 6, 6};
	a[43] = {"ACAD384", "Tran Hung Lam", "12D6", 5, 9, 4};
	a[44] = {"ACAD385", "Nguyen Phuc Lam Nhi", "12E12", 10, 9, 9};
	a[45] = {"ACAD386", "Doan Nguyen Tuong Van", "12G8", 9, 8, 5};
	a[46] = {"ACAD387", "Nguyen Quoc Thang", "12C5", 8, 8, 4};
	a[47] = {"ACAD388", "Nguyen Thanh Toan", "12D7", 3, 7, 6};
	a[48] = {"ACAD389", "Nguyen Huu Tin", "12B7", 10, 8, 10};
	a[49] = {"ACAD390", "Tran Anh Khoa", "12D4", 5, 5, 5};
	a[50] = {"LTV621", "Bui Doan Phong", "12G11", 10, 4, 10};
	a[51] = {"LTV622", "Pham Nguyen Minh Khanh", "12G9", 7, 10, 8};
	a[52] = {"LTV623", "Nguyen Phuong Thao", "12C4", 5, 4, 5};
	a[53] = {"LTV624", "Pham Ngoc Quynh Nhu", "12G4", 6, 4, 4};
	a[54] = {"LTV625", "Bui Duc Phuong Linh", "12D14", 6, 5, 10};
	a[55] = {"LTV626", "Tran Quocthanh", "12A2", 3, 7, 6};
	a[56] = {"LTV627", "Ho Phuong Kiet", "12H12", 4, 9, 5};
	a[57] = {"LTV628", "Nguyen Dang Ngoc Quynh", "12A8", 9, 8, 10};
	a[58] = {"LTV629", "Phan Thi Anh Tam", "12B9", 7, 8, 10};
	a[59] = {"LTV630", "Nguyen Thanh Tung", "12C3", 4, 7, 6};
	a[60] = {"VINS271", "Dinh Nguyen Lam Khang", "12E12", 6, 5, 6};
	a[61] = {"VINS272", "Pham Anh Hoang", "12D9", 4, 9, 6};
	a[62] = {"VINS273", "Vuong Tu Van", "12G7", 8, 4, 7};
	a[63] = {"VINS274", "Nguyen Ngoc Bao Tram", "12B11", 4, 4, 9};
	a[64] = {"VINS275", "Nguyen Nam An", "12G1", 7, 4, 4};
	a[65] = {"VINS276", "Luong Thi Anh Ngoc", "12G2", 5, 8, 9};
	a[66] = {"VINS277", "Nguyen Khanh Linh", "12A12", 9, 10, 7};
	a[67] = {"VINS278", "Huynh Nguyen Khanh Duyen", "12B15", 3, 10, 8};
	a[68] = {"VINS279", "Nguyen Dang Khoi", "12H5", 7, 9, 10};
	a[69] = {"VINS280", "Nguyen Phi Hung", "12C5", 3, 4, 7};
	a[70] = {"DTD011", "Truong Nguyen Dang Khoa", "12H2", 5, 10, 8};
	a[71] = {"DTD012", "Tran Nguyen Ha Phuong", "12G1", 5, 9, 5};
	a[72] = {"DTD013", "Nguyen Diep Anh Xuan", "12H12", 10, 8, 8};
	a[73] = {"DTD014", "Huynh Kim Phung", "12H6", 4, 4, 6};
	a[74] = {"DTD015", "Nguyen The Vinh", "12G13", 9, 6, 9};
	a[75] = {"DTD016", "Nguyen The Vinh", "12B9", 8, 10, 6};
	a[76] = {"DTD017", "Truong Huynh Tran Vu", "12G14", 9, 9, 7};
	a[77] = {"DTD018", "Tran Thanh Dat", "12B7", 3, 7, 7};
	a[78] = {"DTD019", "Tran Ngoc Khanh Hong", "12D11", 5, 9, 10};
	a[79] = {"DTD020", "Dao Tu Man", "12B7", 8, 7, 5};
	a[80] = {"NK021", "Nguyen Huynh Phuong Uyen", "12G3", 10, 4, 6};
	a[81] = {"NK022", "Nguyen Truong Giang", "12B7", 5, 9, 9};
	a[82] = {"NK023", "Do Duc Tri", "12B13", 10, 8, 8};
	a[83] = {"NK024", "Dang Nhu Y", "12H14", 6, 4, 5};
	a[84] = {"NK025", "Nguyen Thi Thanh Tuyen", "12C4", 6, 9, 5};
	a[85] = {"NK026", "Luu Kim Thanh Tu", "12E12", 5, 5, 6};
	a[86] = {"NK027", "Doan Ngoc Ha", "12C4", 3, 5, 5};
	a[87] = {"NK028", "Dao Tan Kha", "12E8", 10, 4, 8};
	a[88] = {"NK029", "Nguyen Thi Ngoc Minh", "12C2", 7, 7, 6};
	a[89] = {"NK030", "Le Hai My", "12C6", 10, 8, 9};
	a[90] = {"CVA031", "Vo Tran Bao Duy", "12A14", 7, 4, 5};
	a[91] = {"CVA032", "Tran Quynh Nhu", "12G6", 5, 5, 7};
	a[92] = {"CVA033", "Nguyen Minh Khang", "12G1", 6, 10, 7};
	a[93] = {"CVA034", "Le Dao Thien Vinh", "12G11", 4, 10, 10};
	a[94] = {"CVA035", "Nguyen Ngoc Y Nhi", "12E11", 7, 7, 4};
	a[95] = {"CVA036", "Nguyen Ngo Tram Anh", "12B12", 8, 8, 6};
	a[96] = {"CVA037", "Tran Doan Hoang Yen", "12H9", 6, 10, 9};
	a[97] = {"CVA038", "Tran Le Hong Anh", "12H14", 10, 10, 7};
	a[98] = {"CVA039", "Phung Kim Anh", "12D8", 6, 5, 6};
	a[99] = {"CVA040", "Dai Chung Hy", "12E7", 8, 7, 8};
	a[100] = {"CVA041", "Pham Minh Khoi", "12H8", 3, 6, 8};
	a[101] = {"CVA042", "Tran Thi Phuong Quyen", "12A4", 6, 10, 5};
	a[102] = {"CVA043", "Le Tran Uyen Vy", "12H2", 5, 6, 4};
	a[103] = {"CVA044", "Duong Hoang Khang", "12E11", 8, 9, 8};
	a[104] = {"CVA045", "Phu Tran Phuong Tram", "12G7", 3, 6, 10};
	a[105] = {"CVA046", "Pham Nguyen Dinh Khoi", "12H9", 6, 6, 10};
	a[106] = {"CVA047", "Pham Minh Vuong", "12G15", 4, 9, 6};
	a[107] = {"CVA048", "Luu Hoang Minh", "12B12", 4, 9, 4};
	a[108] = {"CVA049", "Duong Tu Anh", "12A1", 3, 5, 5};
	a[109] = {"CVA050", "Vu Dai Duong", "12B2", 3, 4, 8};
	a[110] = {"LTV051", "Doan Huy Hoang", "12D6", 8, 4, 7};
	a[111] = {"LTV052", "Nguyen Ngoc Hoai Ngan", "12D15", 9, 8, 5};
	a[112] = {"LTV053", "Tran Huynh Nam", "12C10", 8, 7, 8};
	a[113] = {"LTV054", "Nguyen Bao Han", "12B15", 6, 6, 8};
	a[114] = {"LTV055", "Le Hoang Thao", "12A9", 4, 10, 4};
	a[115] = {"LTV056", "Tran Khanh Chi", "12A13", 5, 9, 5};
	a[116] = {"LTV057", "Le Don Viet Anh", "12D7", 9, 8, 8};
	a[117] = {"LTV058", "Vu Nhu Y", "12H15", 4, 6, 10};
	a[118] = {"LTV059", "Le Manh Hieu", "12D2", 10, 5, 5};
	a[119] = {"LTV060", "Dinh Anh Quan", "12H10", 3, 8, 9};
	a[120] = {"TQT061", "To Ngoc Khanh Linh", "12E1", 8, 7, 9};
	a[121] = {"TQT062", "Ho Thi Thanh Ha", "12B8", 8, 6, 4};
	a[122] = {"TQT063", "Mai Thi Phuong Thao", "12C3", 6, 10, 7};
	a[123] = {"TQT064", "Nguyen Thi Anh Tuyet", "12C6", 7, 4, 9};
	a[124] = {"TQT065", "Tuong Hai Khang", "12G3", 10, 6, 8};
	a[125] = {"TQT066", "Nguyen Le Uyen", "12G4", 10, 8, 9};
	a[126] = {"TQT067", "Bui Ngoc My Tran", "12D13", 5, 9, 7};
	a[127] = {"TQT068", "Pham Minh Nhat", "12E6", 6, 5, 5};
	a[128] = {"TQT069", "Vo Minh Nhut", "12E10", 8, 7, 9};
	a[129] = {"TQT070", "Nguyen Dang Ngoc Minh", "12B15", 10, 9, 8};
	a[130] = {"TQT071", "Duong Tan Dang Khoa", "12G10", 8, 4, 7};
	a[131] = {"TQT072", "Do Quoc Huy", "12C6", 8, 8, 8};
	a[132] = {"TQT073", "Nguyen Minh Quan", "12A1", 7, 9, 6};
	a[133] = {"TQT074", "Huynh Hoa Luan", "12B1", 4, 8, 10};
	a[134] = {"TQT075", "Vo Kim Ngoc", "12G3", 4, 6, 4};
	a[135] = {"TQT076", "Dang Ngoc Anh Thu", "12B2", 9, 4, 4};
	a[136] = {"TQT077", "Chu Thanh Tuyen", "12G1", 6, 10, 7};
	a[137] = {"TQT078", "Pham Nguyen Tuan Kiet", "12H13", 3, 7, 10};
	a[138] = {"TQT079", "Huynh Nguyen Thien Truc", "12E7", 10, 6, 10};
	a[139] = {"TQT080", "Hoang Le Tan", "12B12", 7, 6, 4};
	a[140] = {"NBK081", "Truong Hoang Lan", "12D13", 5, 7, 8};
	a[141] = {"NBK082", "Pham Anh Thu", "12C13", 10, 4, 10};
	a[142] = {"NBK083", "Vo Tran Khanh An", "12H10", 8, 10, 7};
	a[143] = {"NBK084", "Pham Minh Khoi", "12H7", 3, 9, 7};
	a[144] = {"NBK085", "Nguyen Hoang Hai", "12C6", 5, 4, 7};
	a[145] = {"NBK086", "Tran Tuan Kiet", "12D8", 4, 9, 9};
	a[146] = {"NBK087", "Tran Ton Quyen", "12A6", 10, 7, 4};
	a[147] = {"NBK088", "Tran Ngoc Linh", "12A14", 9, 7, 10};
	a[148] = {"NBK089", "Tran Hieu Nguyen", "12D14", 3, 5, 10};
	a[149] = {"NBK090", "Lam Diem Phuc", "12H2", 9, 10, 6};
	a[150] = {"NBK091", "Nguyen Minh Tai", "12B3", 7, 4, 8};
	a[151] = {"NBK092", "Pham Le Minh Nhat", "12E7", 7, 6, 4};
	a[152] = {"NBK093", "Cao Van Co", "12A1", 8, 6, 7};
	a[153] = {"NBK094", "Ngo Huu Phuon", "12H7", 9, 4, 8};
	a[154] = {"NBK095", "Nguyen Thi Bich Dao", "12C1", 8, 10, 10};
	a[155] = {"NBK096", "Nguyen Van Anh", "12H1", 7, 6, 7};
	a[156] = {"NBK097", "Pham Tuyet Ngoc", "12D3", 9, 6, 7};
	a[157] = {"NBK098", "Nguyen Hoang Kim Ngan", "12E11", 8, 10, 8};
	a[158] = {"NBK099", "Nguyen Ngoc Xuan Nghi", "12E14", 8, 4, 8};
	a[159] = {"NBK100", "Lai Minh Hieu", "12C12", 9, 8, 5};
	a[160] = {"NQ101", "Nguyen Hoang Khanh Linh", "12A10", 8, 8, 5};
	a[161] = {"NQ102", "Tran Le Anh Thy", "12D3", 7, 4, 6};
	a[162] = {"NQ103", "Nguyen Tuan Bao", "12A6", 7, 6, 10};
	a[163] = {"NQ104", "Kang Bo Mi", "12B10", 7, 10, 7};
	a[164] = {"NQ105", "Nguyen Minh Thu", "12B6", 9, 9, 6};
	a[165] = {"NQ106", "Nguyen Binh Minh", "12B14", 5, 4, 9};
	a[166] = {"NQ107", "Do Khiet Man", "12B8", 10, 6, 4};
	a[167] = {"NQ108", "Ngo Hoang Long", "12E2", 5, 5, 9};
	a[168] = {"NQ109", "Vo Le Trong Tri", "12B15", 7, 4, 5};
	a[169] = {"NQ110", "Ho Ngoc Quynh Huong", "12E5", 8, 10, 5};
	a[170] = {"NQ111", "Nguyen Phan Minh Khanh", "12G7", 9, 4, 10};
	a[171] = {"NQ112", "Pham Nguyen Cong Huy", "12D14", 8, 7, 4};
	a[172] = {"NQ113", "Nguyen Phuong An", "12G2", 3, 7, 4};
	a[173] = {"NQ114", "Nguyen Huynh Ngoc Nhan", "12E2", 8, 6, 4};
	a[174] = {"NQ115", "Dieu Soi Ha", "12C3", 8, 6, 7};
	a[175] = {"NQ116", "Le Van Thanh", "12B14", 3, 10, 5};
	a[176] = {"NQ117", "Nguyen Hoang Phuong Chi", "12B14", 7, 10, 5};
	a[177] = {"NQ118", "Nguyen Duc Hau", "12C10", 7, 6, 9};
	a[178] = {"NQ119", "Huynh Ba Tuong", "12C8", 8, 5, 6};
	a[179] = {"NQ120", "Nguyen Viet Dung", "12A11", 10, 9, 10};
	a[180] = {"NH121", "Le Doan Khanh Giao", "12C2", 4, 6, 10};
	a[181] = {"NH122", "Ngo Thi Thuy An", "12E15", 4, 4, 9};
	a[182] = {"NH123", "Huynh Tan Tai", "12B2", 10, 10, 10};
	a[183] = {"NH124", "Doan Vuong Bao Ngoc", "12G1", 10, 8, 6};
	a[184] = {"NH125", "Nguyen Le Truc Phuong Uyen", "12G5", 7, 9, 6};
	a[185] = {"NH126", "Tran Ngoc Yen Nhi", "12E15", 8, 8, 10};
	a[186] = {"NH127", "Tran Ngoc Nga", "12D12", 3, 4, 4};
	a[187] = {"NH128", "Giang Toan Phuc", "12H7", 9, 10, 9};
	a[188] = {"NH129", "Nguyen Le Tuyet Anh", "12G11", 4, 9, 9};
	a[189] = {"NH130", "Duong Ngoc Bao Chau", "12A8", 5, 10, 10};
	a[190] = {"NH131", "Huynh Bao Khang", "12C14", 8, 7, 5};
	a[191] = {"NH132", "Hoang Le Khanh Huy", "12C7", 8, 5, 8};
	a[192] = {"NH133", "Le Vuong Thanh Tu", "12C2", 9, 5, 5};
	a[193] = {"NH134", "Do Nguyen Thuy Trang", "12B8", 10, 10, 10};
	a[194] = {"NH135", "Le Trong Nhan", "12E5", 3, 7, 10};
	a[195] = {"NH136", "Nguyen Viet Bao Tri", "12E3", 9, 7, 7};
	a[196] = {"NH137", "Nguyen Phuong Anh", "12H12", 6, 4, 8};
	a[197] = {"NH138", "Nguyen Quang Truong Vinh", "12C13", 3, 7, 8};
	a[198] = {"NH139", "Le Cao Dat", "12C2", 6, 10, 6};
	a[199] = {"NH140", "Du Nguyen Quynh", "12H14", 10, 5, 6};
	a[200] = {"NTT141", "Nguyen Vu Ha Vy", "12D5", 7, 8, 10};
}