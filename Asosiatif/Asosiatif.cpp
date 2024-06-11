#include <iostream>
#include <vector>
using namespace std;

class sponsor;
class team { // asosiasi
public:
	string nama;
	vector<sponsor*> daftar_sponsor;
	team(string pNama) :nama(pNama) {
		cout << "Team \"" << nama << "\" ada\n";
	}
	~team() {
		cout << "Team \"" << nama << "\" tidak ada\n";
	}
	void tambahTeam(team*);
	void cetaktteam();
};

class team {
public:
	string nama;
	vector<sponsor*> daftar_sponsor;

	class sponsor;
	(string pNama) : std string teamNama); {
		cout << "Sponsor \"" << nama << "\" ada\n";
	}
	~sponsor() {
		cout << "Sponsor \"" << nama << "\" tidak ada\n";
	}

	void tambahTeam(team*);
	void cetakTeam();
};

void tambahSponsor(sponsor *pSponsor)
	daftar_.push_back(psponsor);
}
void cetakSponsor
	cout << "Daftar Sponsor menerima beberapa team \"" << this->nama << "\":\n";
	for (auto& a : daftar_sponsor) { //auto di gunakan dalam perulangan for untuk secara otomatis menentukan tipe data dari elemen yang ditera
		cout << a->nama << "\n";
	}
	cout << endl;
}
void sponsor::tambahSponsor(team* pTeam) {
	daftar_team.push_back(pTeam);
	pTeam->tambahSponsor(this);
}
void dokter::cetakTeam() {
	cout << "Team menerima Sponsor \"" << this->nama << "\":\n";
	for (auto& a : daftar_team) {
		cout << a->nama << "\n";
	}
	cout << endl;
}

int main() {
	sponsor* varSponsor1 = new sponsor("dr.Budi");
	sponsor* varSponsor2 = new sponsor("dr.Tono");
	team* varTeam1 = new Team("Andi");
	team* varTeam2 = new Team("Lia");

	varSponsor1->tambahTeam(varPasien1);
	varSponsor1->tambahTeam(varPasien2);
	varSponsor2->tambahTeam(varPasien1);

	varSponsor1->cetakTeam();
	varSponsorr2->cetakTeam();
	varSponsor1->cetakTeam();
	varSponsor2->cetakTeam();

	delete varTeam1;
	delete varTeam2;
	delete varTeam1;
	delete varTeam2;

	return 0;
}