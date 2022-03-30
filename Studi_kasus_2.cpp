#include <iostream>
#include <fstream>
using namespace std;  

int main() {  
	fstream myFile;
	myFile.open("Struk.txt", ios::out);
  	long bakar,goreng,geprek,udang,cumi, biaya, diskon, biayatotal, bayar, kembalian;  
  	int jumlah,jarak,pajakjarak;  
  	char a,b,c,d,e;  
  	

  	cout<<"-------------------------"<<endl;  
  	cout<<"  WARUNG AYAM   "<<endl;  
  	cout<<"-------------------------"<<endl<<endl;  

  	cout<<"MENU PAKET:       "<<endl;  
  	cout<<"1. Ayam Geprek  : Rp. 21000 "<<endl;  
  	cout<<"2. Ayam Goreng  : Rp. 17000 "<<endl;
  	cout<<"3. Udang Goreng : Rp. 19000 "<<endl;
  	cout<<"4. Cumi Goreng  : Rp. 20000 "<<endl;
  	cout<<"5. Ayam Bakar   : Rp. 25000 "<<endl;


	cout<<"Pesan Ayam Geprek ?(y/t) ";
	cin>>a;

	if (a=='y') {
		cout<<"Masukkan Jumlah Pesanan : ";
		cin>>geprek;
		cout<<"Jumlah Harga  = "<<geprek*21000<<endl;
	}
	else {
		cout<<"Pesanan Ayam Geprek = 0\n";
		geprek=0;
	}
	cout<<"Pesan Ayam Goreng ?(y/t) ";
	cin>>b;

	if (b=='y') {
		cout<<"Masukkan Jumlah Pesanan : ";
		cin>>goreng;
		cout<<"Jumlah Harga  = "<<goreng*17000<<endl;
	}
	else {
		cout<<"Pesanan Ayam Goreng = 0\n";
		goreng=0;
	}
	
	
	cout<<"Pesan Udang Goreng ?(y/t) ";
	cin>>c;

	if (c=='y') {
		cout<<"Masukkan Jumlah Pesanan : ";
		cin>>udang;
		cout<<"Jumlah Harga  = "<<udang*19000<<endl;
	}
	else {
		cout<<"Pesanan Udang Goreng = 0\n";
		udang=0;
	}
	cout<<"Pesan Cumi Goreng ?(y/t) ";
	cin>>d;

	if (d=='y') {
		cout<<"Masukkan Jumlah Pesanan : ";
		cin>>cumi;
		cout<<"Jumlah Harga  = "<<cumi*20000<<endl;
	}
	else {
		cout<<"Pesanan Ayam Goreng = 0\n";
		cumi=0;
	}
	
	cout<<"Pesan Ayam Bakar  ?(y/t) ";
	cin>>e;
	if (e=='y') {
		cout<<"Masukkan Jumlah Pesanan : ";
		cin>>bakar;
		cout<<"Jumlah Harga  = "<<bakar*17000<<endl;
	}
	else {
		cout<<"Pesanan Ayam Bakar  = 0\n";
		bakar=0;
	}

 	biaya=(geprek*21000)+(goreng*17000)+(udang*19000)+(cumi*20000)+(bakar*21000);
	cout<<"Total Pesanan : "<<endl;
	cout<<"1. Ayam Geprek  : "<<geprek*21000<<endl;
	cout<<"2. Ayam Goreng  : "<<goreng*17000<<endl;
	cout<<"3. Udang Goreng : "<<udang*19000<<endl;
  	cout<<"4. Cumi Goreng  : "<<cumi*20000<<endl;
	cout<<"5. Ayam Bakar   : "<<bakar*21000<<endl;
	cout<<"_____________________________________"<<endl;
	cout<<"Total Harga    : "<<biaya<<endl;
	
	cout<<"Masukkan Jarak Pengantaran : ";
	cin>>jarak;
	
	if(jarak>3) {
		pajakjarak=25000;
	}
	else {
		pajakjarak=15000;
	}  
	
  	if(biaya>=25000)  
      	{  
           diskon=pajakjarak-3000;  
      	}  
  	else if(biaya>=50000)  
      	{  
           diskon=0.15*biaya+(pajakjarak-5000);  
      	}
	else if (biaya>=150000){
		diskon=0.35*biaya+(pajakjarak-8000);
		
	}  
 	 biayatotal=biaya-diskon; 
	
	

  	cout<<"-------------------------"<<endl;  
  	cout<<"  WARUNG AYAM   "<<endl;  
  	cout<<"-------------------------"<<endl<<endl;  

	cout<<"RINCIAN PEMBAYARAN:   "<<endl;  
  	cout<<"1. Ayam Goreng  : "<<goreng*17000<<endl;
	cout<<"2. Ayam Bakar   : "<<bakar*21000<<endl; 
	cout<<"3. Udang Goreng : "<<udang*19000<<endl;
  	cout<<"4. Cumi Goreng  : "<<cumi*20000<<endl;
	cout<<"5. Ayam Bakar   : "<<bakar*21000<<endl; 
  	cout<<"         ______________________ x"<<endl;  
  	cout<<"Biaya      	   = "<<biaya<<endl;
	cout<<"Jarak		   = "<<jarak<<endl;
  	cout<<"Diskon          = "<<diskon<<endl;  
  	cout<<"         ______________________ -"<<endl;  
  	cout<<"Biaya Total     = "<<biayatotal<<endl;  
  	cout<<"Bayar     	   = "; cin>>bayar; kembalian=bayar-biayatotal;  
  	cout<<"         ______________________"<<endl;  
  	cout<<"Uang Kembalian  = "<<kembalian<<endl; 

	myFile<<"Nota Pembayaran:   "<<endl;  
    myFile<<"1. Ayam Goreng  : "<<goreng*17000<<endl;
	myFile<<"2. Ayam Bakar   : "<<bakar*21000<<endl; 
	myFile<<"3. Udang Goreng : "<<udang*19000<<endl;
  	myFile<<"4. Cumi Goreng  : "<<cumi*20000<<endl;
	myFile<<"5. Ayam Bakar   : "<<bakar*21000<<endl; 
  	myFile<<"         ______________________ x"<<endl;  
  	myFile<<"Biaya      	 = "<<biaya<<endl;
	myFile<<"Jarak		     = "<<jarak<<endl;
  	myFile<<"Diskon          = "<<diskon<<endl;  
  	myFile<<"         ______________________ -"<<endl;  
  	myFile<<"Biaya Total     = "<<biayatotal<<endl;  
  	myFile<<"Bayar     	     = "<<bayar; kembalian=bayar-biayatotal;  
  	myFile<<"         ______________________"<<endl;  
  	myFile<<"Uang Kembalian  = "<<kembalian<<endl;   
}
