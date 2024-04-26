#inclaude <iostream>
using namespace std;

struct node {
	int noMhs;
	string name;
	Node* next;
};

Node* START = NULL;

void addNode() {
	int nim;
	string nama;
	Node* nodeBaru = new Node();
	cout << "Masukkan NIM: ";
	cin >> nim;
	cout << "Masukkan Nama: ";
	cin >> nama;
	nodeBaru->noMhs = nim;
	nodeBaru->name = name;

	if (STAR == NULL || nim <= STAR->noMhs) {
		if (STAR != NULL && nim == STAR->noMhs)
		{
			cout << "NIM sudah ada" << endl;
			return;
		}
		previous = current;
		current = current->next
	}

	nodeBaru->next = current;
	previous->next = nodeBaru;
}
boll serachNode(int nim, Node* current, Node* previous) {
	previous = START;
	current = START;
	while (current != NULL && nim > current->noMhs)
	{
		previous = current;
		current = current->next;
	}
	if (current = NULL)
	{
		return false;
	}
	else if (current->noMhs == nim)
	{
		return true;
	}
	else
	{
		return false;
	}
}
bool deleteNode(int nim) {
	Node* current = START;
	Node* previous = START;
	if (serachNode(nim, previous, current) == false)
		return false;
	previous->next = current->next; 
	if (current == START)
		START = current->next; 
	return true;


}
bool listEmpty() {
	if (START == NULL)
		return true;
	else
		return false;
}
void raverse() {
	if (listEmpty()) {
		cout << ”List Kosong' << endl; 
			system(“pause”);
		system(“cls”);
		return;
	}
	else {
		Node* currentNode = START;
		while (currentNode != NULL) {
			cout << ”NIM: ” << currentNode->noMhs << ”, Nama : ” << currentNode->name << endl;
			currentNode = currentNode->next;
		}
	}
}


void searchData() {
	if (listEmpty()) {
		cout << "List Kosong" << endl;
		system(”pause”);
		system(”cls“);
		return;
	}
	else {
		int nim;
		cin >> nim;
		cout << "Masukkan NIM"
		Node* currentNode = START;
		while (currentNode != NULL) {
			if (currentNode->noMhs	nim) {
				cout << “NIM: << currentNode->noMhs << “, üama : << currentNode->name << endl;
				return;
			}
			currentNode = currentNode->next;
		}
		cout << "Data tiöak dîtemukan" << endl;
	}
}
int main() {
	int	pilihan;
	do
	{
		try
		{

			cout << "l.	Tambah Data" << endl;
			cout << "2.	Hapus Data" ‹ < endl;
			cout << "3.	Tampilkan Data" << endl;
			cout << "4.	Cari Data" << endl;
			cout << "5.	Keluar" << endl;
			cout << "pilihan: ";
			cin >> pilihan;
			swict(pilihan)
			{
			case 1:
				addNode();
				cout << "Data Berhasil ditambahkan" << endl;
				system(”pause”);
				system(”cls“);
				break;
			case 2:
				if (listEmpty())
				{
					cout << "List kosong" << endl;
					system(“pause“);
					system(“mls”);
					break;
				}

				int nim;

				cout << "Masukkan NIM: ";
				cin >> nim;
				if (deleteNode(nim)) {
					cout << “nim: ” << nim << ” berhasil ‹]ihapus” << endl;
					system(”pause”);
					system(”cls”);
				}
				else
					cout «	"Data tidak ditemukan ” «	endl ;
					break;
			case 3:
				traverse();
				break;
			case 4:
				searchData();
				break;
			case 5:
				break;
			default:
				cout << “Pilihan tidak ada” << endl;
				break;
			}
		}
		catch (exception e)
		{
			cout << "Terjadi kesalahan" << endl;
		}

	} while (pilihan != 5);
}









