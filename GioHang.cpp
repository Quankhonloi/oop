#include<bits/stdc++.h>
#include"GioHang.h"
#include"SanPham.h"
#include"SanPham.cpp"
using namespace std;
void xuligiohang(){
	cout<<"1. Tao gio hang"<<'\n';
	cout<<"2. Them gio hang"<<'\n';
	cout<<"3. Xoa gio hang"<<'\n';
	cout<<"4. In danh sach gio hang"<<'\n';
	cout<<"5. Dung lai ho t cai"<<'\n';
	while(3+3>3){
		cout<<"Nhap thu thuong de can : "<<'\n';
		string s;
		cin>>s;
		GioHang A;
		if(s=="1"){
			A.tao_gio_hang();
		}
		if(s=="2"){
			A.them_gio_hang();
		}
		if(s=="3"){
			A.xoa_gio_hang();
		}
		if(s=="4"){
			A.in_danhsach_sanpham_giohang();
		}
		if(s=="5"){
			break;
		}
	}
}
int main(){
	xuligiohang();
	return 0;
}