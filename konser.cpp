#include <iostream>
#include <string>
#include <limits>

using namespace std;

struct pesanData{
	string nama;
	string nik;
};

int menu();
void daftarBand();
void sponsor();
void pesanTiket();

int main(){

	int pilih = menu();
	int jmlhtiket = 3;
	char lanjutkan;
	enum urutan {PESAN = 1, TIKET, BAND, SPONSOR, FINISH}; 
	while(pilih != FINISH){
		switch(pilih){
			case PESAN:
			jmlhtiket--;
			if (pilih == 2){
			cout << jmlhtiket << endl;
		}
			else if (jmlhtiket < 0){
				cout << "\nMaaf Tiket sudah habis..!!\n" << endl;
				break;
			}else{
			pesanTiket();
			break;

			}
			case TIKET:
			if (jmlhtiket < 0){
				cout << "Tiket habis..!!" << endl;
			}
			else{
			cout << "\nTiket tersedia : " << jmlhtiket << endl;
			cout << endl;
		}
			break;
			
			case BAND:
			daftarBand();
			break;

			case SPONSOR:
			sponsor();
			break;

			default:
			cout << "Input tidak di temukan !!" << endl;
			cout << "Masukan nomor di daftar menu !!" << endl;
			break;
		}

		lanjut:
		cout << "lanjutkan? [y/n]> ";
		cin >> lanjutkan;
		if ((lanjutkan == 'y') | (lanjutkan == 'Y')){
			pilih = menu();
		}
		else if ((lanjutkan == 'n') | (lanjutkan == 'N')){
			cout << "Terimakasih :)" << endl;
			break;
		}
		else {
			cout << "Masukan Y / N !!" << endl;
			goto lanjut;
		}
	}


}

int menu(){
	int input;
	system("cls");

	cout << "  -- PEMESANAN TIKET KONSER --" << endl;
	cout << "-------------------------" << endl;
	cout << "| 1.) Pesan Tiket        |" << endl;
	cout << "| 2.) Cek Tiket          |" << endl;
	cout << "| 3.) Cek Band           |" << endl;
	cout << "| 4.) Sponsor            |" << endl;
	cout << "| 5.) Exit               |" << endl;
	cout << " ------------------------" << endl;
	cout << "Masukan pilihan [1-5]>";
	cin >> input;
	cin.ignore(numeric_limits<streamsize>::max(), '\n');
	return input;
}

void daftarBand(){
 int jmlhbnd = 4;
 string band[] = {"Iwan Fals", "NOAH", "For Revenge", "Greenday"};
 double waktu[5] = {17.35, 18.35, 19.35, 20.35};
 cout << "\n--- DFTAR BAND ---\n" << endl;
 for (int i = 0; i < jmlhbnd; i++){
 cout << band[i] << " \nPukul : " << waktu[i] << " WIB" << endl;
 cout << "------------------------" << endl;
}
cout << endl;
}

void sponsor(){
	cout << "\nKONSER SEMARAK MERIAH BANGET" << endl;
	cout << "------------------------------" << endl;
	cout << "Konser ini di sponsori oleh : " << endl;
	cout << "- Distro kw super" << endl;
	cout << "- Orang terdekat" << endl;
	cout << "- Orang dalam\n" << endl;

}

void pesanTiket(){
	int pesan;
	pesanData dataP;

	cout << "Masukan nama : ";
	getline(cin, dataP.nama);
	cout << "Masukan NIK : ";
	getline(cin, dataP.nik);

	cout << "\n---------------------" << endl;
	cout << "Pesanan berhasil..!!" << endl;
	cout << "Silahkan ke Kasir untuk pembayaran dan mencetak tiket..!!" << endl;
	cout << "\n---------------------" << endl;
	cout << "Kode tiket : " << rand() << endl;
	cout << "----------------------\n" << endl;	
}
