#include<bits/stdc++.h>
#include"SanPham.h"
using namespace std;
int danhdau[100000];
class GioHang{
	private:
		vector<SanPham> giohang;
		static int idkhachhang;
	public:
		void chon_san_pham();
		void in_danhsach_sanpham_giohang();
		int get_soluong_tung_sanpham();
		int get_price_tung_sanpham();
		int get_tong_price_giohang();
		int get_id_nguoi_mua();
		void tao_gio_hang();
		void them_gio_hang();
		void xoa_gio_hang();
		void xoa();
};
vector<GioHang> giohangcuacackhach;
int GioHang::idkhachhang=0;
void GioHang::tao_gio_hang(){
	GioHang A;
	int n;
	cout<<"Nhap so luong nguoi mua : ";
	cin>>n;
	while(n--){
		A.chon_san_pham();
		giohangcuacackhach.push_back(A);
	}
	idkhachhang++;
}
void GioHang::chon_san_pham(){
	GioHang A;
	int n;
	cout<<"Nhap so luong san pham co trong gio hang : ";
	cin>>n;
	for(int i=1;i<=n;i++){
		cout<<"Nhap ma san pham thu "<<i<<" :";
		int id; cin>>id;
		A.giohang.push_back(ds_San_Pham[id]);
	}
}
//int GioHang::get_price_tung_sanpham(){
//	SanPham A;
//	return A.in();
//}
//int GioHang::get_soluong_tung_sanpham(){
//	SanPham A;
//	return A.this->so_luong;
//}
int GioHang::get_id_nguoi_mua(){
	GioHang A;
	return A.idkhachhang;
}
int GioHang::get_tong_price_giohang(){
	GioHang A;
	int tong=0;
	for(auto x:A.giohang)tong+=x.get_tien();
	return tong;
}
void GioHang::in_danhsach_sanpham_giohang(){
	int dem=this->idkhachhang;
	if(cnt[dem]==1){
		cout<<"Gio hang m da xoa con muon xem ha -.-";
	}
	else{
		cout<<"Thong tin san pham cua gio hang thu "<<dem<<" : ";
		GioHang A;
		SanPham B;
		B.in();
	}
}
void GioHang::them_gio_hang(){
	GioHang A;
	cout<<"So gio hang can them : ";
	int n; cin>>n;
	while(n--){
		A.chon_san_pham();
		giohangcuacackhach.push_back(A);
	}
	idkhachhang++;
}
void GioHang::xoa_gio_hang(){
	int id; cin>>id;
	GioHang A;
	cout<<"Xoa gio hang ma : "<<id<<'\n';
	giohangcuacackhach[id].xoa();
}
void GioHang::xoa(){
	danhdau[this->idkhachhang]=1;
}
