#include <iostream>
#include <fstream>
using namespace std;  
        
int main() {  
  fstream myFile;
	myFile.open("Struk.txt", ios::out);
  	long ayamgeprek, ayamgoreng, udanggoreng, cumigoreng, ayambakar, biaya, diskon, biayatotal, bayar, kembalian;  
  	int jumlah;  
  	char a,b,c,d,e,paket;  
   
  	cout<<"-------------------------"<<endl;  
  	cout<<"  WARUNG AYAM   "<<endl;  
  	cout<<"-------------------------"<<endl<<endl;  
   
  	cout<<"MENU PAKET:       "<<endl;  
  	cout<<"A. Ayam Geprek : Rp. 21000 "<<endl;  
  	cout<<"B. Ayam Goreng  : Rp. 17000 "<<endl;  
  	cout<<"C. Udang Goreng  : Rp. 19000 "<<endl;
  	cout<<"D. Cumi Goreng  : Rp. 20000 "<<endl;
  	cout<<"E. Ayam Bakar  : Rp. 25000 "<<endl;
 
	cout<<"Pesan Ayam Geprek ?(y/t) ";
	cin>>a;
	
	if (a=='y') {
		cout<<"Masukkan Jumlah Pesanan : ";
		cin>>ayamgeprek;
		cout<<"Jumlah Harga  = "<<ayamgeprek*21000<<endl;
	}
	else {
		cout<<"Pesanan Ayam geprek = 0\n";
		ayamgeprek=0;
	}
	
	cout<<"Pesan Ayam goreng  ?(y/t) ";
	cin>>b;
	if (b=='y') {
		cout<<"Masukkan Jumlah Pesanan : ";
		cin>>ayamgoreng;
		cout<<"Jumlah Harga  = "<<ayamgoreng*17000<<endl;
	}
	else {
		cout<<"Pesanan Ayam goreng  = 0\n";
		ayamgoreng=0;
	}
	
	cout<<"Pesan udang goreng  ?(y/t) ";
	cin>>c;
	if (c=='y') {
		cout<<"Masukkan Jumlah Pesanan : ";
		cin>>udanggoreng;
		cout<<"Jumlah Harga  = "<<udanggoreng*19000<<endl;
	}
	else {
		cout<<"Pesanan udang goreng  = 0\n";
		udanggoreng=0;
	}
	
	cout<<"Pesan cumi goreng  ?(y/t) ";
	cin>>d;
	if (d=='y') {
		cout<<"Masukkan Jumlah Pesanan : ";
		cin>>cumigoreng;
		cout<<"Jumlah Harga  = "<<cumigoreng*20000<<endl;
	}
	else {
		cout<<"Pesanan cumi goreng  = 0\n";
		cumigoreng=0;
	}
	
	cout<<"Pesan ayam bakar  ?(y/t) ";
	cin>>e;
	if (e=='y') {
		cout<<"Masukkan Jumlah Pesanan : ";
		cin>>ayambakar;
		cout<<"Jumlah Harga  = "<<ayambakar*25000<<endl;
	}
	else {
		cout<<"Pesanan ayam bakar  = 0\n";
		ayambakar=0;
	}
	
	 	biaya=(geprek*21000)+(goreng*17000)+(udang*19000)+(cumi*20000)+(bakar*21000);
	cout<<"Total Pesanan : "<<endl;
	cout<<"1. Ayam Geprek  : "<<geprek*21000<<endl;
	cout<<"2. Ayam Goreng  : "<<goreng*17000<<endl;
	cout<<"3. Udang Goreng : "<<udang*19000<<endl;
  	cout<<"4. Cumi Goreng  : "<<cumi*20000<<endl;
	cout<<"5. Ayam Bakar   : "<<bakar*21000<<endl;
	cout<<"_____________"<<endl;
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
	
	
	return 0;
}
