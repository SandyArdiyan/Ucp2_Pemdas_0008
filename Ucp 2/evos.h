#ifndef EVOS_H
#define EVOS_H
#include <vector>

class evos {
public:
	string nama;
	vector<onic*> daftar_onic;

	evos(string pNama) :nama(pNama) {
		cout << "Evos \"" << nama << "\"ada\n;
	}
	~evos() {
		cout << "Evos \"" << nama << "\" tidak ada\n";
	}
	void tambahOnic(onic*);
	void cetakOnic();
};
void evos::tambahOnic(onic* pOnic {
	daftar_onic.push_back(pOnic);
}
void evos::cetakOnic() {
	cout << "Daftar Onic dari Evos \"" << this->nama << "\":\n";
	/*for (auto& a : daftar_anak) {
		cout << a->nama << "\n";
	}*/
	for (int i = 0; i < daftar_Onic.size(); i++) {
		cout << daftar_onic[i]->nama << endl;
	}