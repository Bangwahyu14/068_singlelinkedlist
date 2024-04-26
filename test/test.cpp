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
}