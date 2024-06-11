#include<bits/stdc++.h>
#include"SanPham.h"
using namespace std;
void solve(){
	KT();
	cout<<"1.Dung" ; el;
	cout<<"2.Tao_ds_San_Pham" ; el;
	cout<<"3.In_San_Pham" ; el;
	cout<<"4.Them_San_Pham" ; el;
	cout<<"5.Xoa_San_Pham" ; el;
	cout<<"6.Shopee_time" ; el;
	while(true){
		cout<<"Nhap thu ban muon=): ";
		string tmp;
		cin>>tmp;
		if(tmp == "1"){
			break;
		}
		if(tmp == "2"){
			crate();
		}
		if(tmp == "3"){
			in_ra();
		}
		if(tmp == "4"){
			them_san_pham();
		}
		if(tmp == "5"){
			xoa_san_pham();
		}
	}
}
int main(){
	solve();
	return 0;
}
