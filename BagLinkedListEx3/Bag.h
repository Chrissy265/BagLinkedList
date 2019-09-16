
struct Node
{
	int info;		//element stored in this node
	Node* next;		//link to next node
	Node* prev;
	Node** head;
};

class Bag
{
public: 
	Bag(); 
	~Bag(); 
	bool isEmpty(); 
	void print();
	int getSize(); 
	void clear(); 
	void add(char item);
	void remove(char item); 
	int count(char item); 


private: 
	Node* first; //pointer point to a dummy node
	char item; 

};
