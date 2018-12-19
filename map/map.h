#include <iostream>
#include <cstring>
using namespace std;

template <class keyTemp, class valueTemp>
class Map {
private:

	struct node {
		node *next;
		keyTemp key;
		valueTemp val;

		node() {
			next = NULL;
		}

		node(const node &neww) {
			key = neww.key;
			val = neww.val;
			next = NULL;
		}
	};

	node *head;

	void swap(Map &l) {
		node *neww = head;
		head = l.head;
		l.head = neww;
	}

	void clearTable() {
		node *current = head, *next;
		while (current != NULL)
		{
			next = current->next;
			delete current;
			current = next;
		}
	}


public:

	Map() {
		head = NULL;
	}

	Map(const Map &l) {
		head = NULL;
		node *current = l.head, **neww = &head;
		while(current)
		{
			*neww = new node(*current);
			current = current->next;
			neww = &((*neww)->next);
		}
	}

	~Map() {
		clearTable();
	}

	Map &operator= (const Map &l) {
		if(&l == this)
			return *this;
		else {
			Map pom(l);
			swap(pom);
		}
		return *this;
	}


	void add(keyTemp key, valueTemp value) {
		node* neww = new node();
		neww->val = value;
		neww->key = key;
		neww->next = head;
		head = neww;
	}

	valueTemp *find(const keyTemp key) {
		node *pom = head;
		while(pom) {
			if (key == pom->key)
				return &pom->val;
			pom = pom->next;
		}
		return NULL;
	}

	friend std::ostream& operator<< (std::ostream& out, const Map& mapValue) {
		node *current = mapValue.head;
		while (current != NULL) {
			out << current->val;
			current = current->next;
		}
		return out;
	}
};
