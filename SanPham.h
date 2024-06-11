
#include<bits/stdc++.h>
#define el cout<<"\n"
using namespace std;
int i=1;
int cnt[100000];
class SanPham{
private:
	string name;
	int so_luong;
	int cost;
	int id;
//	enum trang_thai_san_pham(het_hang , con_hang);
public:
	SanPham(){};
	void khoi_tao();
	void nhap(int id);
	void in();
	void them(int num);
	void xoa();
	void show_case();
	int get_tien();
};
vector<SanPham> ds_San_Pham;
int SanPham::get_tien(){
	return this->cost;
}
void KT(){
	SanPham A;
	A.khoi_tao();
	ds_San_Pham.push_back(A);
}
void SanPham::khoi_tao(){
	SanPham A;
	A.id = -1;
	A.name = "NULL";
	A.so_luong = -1;
	A.cost = -1;
}
void crate(){
	SanPham A;
	int n;
	cout<<"Nhap so luong san pham muon nhap: ";
	cin>>n;
	while(n--){
		A.nhap(i);
		ds_San_Pham.push_back(A);
		i++;
	}
}
void SanPham::nhap(int id){
	cout<<"San pham co ma so la : "<<id;el;
	cout<<"Ten: "; cin>>name; this->name = name;
	cout<<"So luong: "; cin>>so_luong; this->so_luong = so_luong;
	cout<<"Gia: "; cin>>cost; this->cost = cost;
	this->id = id;
}
void in_ra(){
	cout<<"Nhap ma so san pham muon in: ";
	int id;
	cin>>id;
	ds_San_Pham[id].in();
}
void SanPham::in(){
	if(cnt[this->id] == 1){
		cout<<"Ko ton tai"; el;
	}
	else{
		cout<<"Ten san pham: "<<this->name; el;
		cout<<"So luong con lai: "<<this->so_luong; el;
		cout<<"Gia: "<<this->cost; el;
		cout<<"Ma san pham: "<<this->id; el;	
	}
}
void them_san_pham(){
	cout<<"Nhap ma so san pham muon them: ";
	int id; cin>>id;
	cout<<"Nhap so luong san pham muon them: ";
	int num;
	cin>>num;
	ds_San_Pham[id].them(num);
}
void SanPham::them(int num){
	this->so_luong+=num;
}
void xoa_san_pham(){
	cout<<"Nhap ma so san pham muon xoa: ";
	int id; cin>>id;
	ds_San_Pham[id].xoa();
}
void SanPham::xoa(){
	cnt[this->id] = 1;
}
