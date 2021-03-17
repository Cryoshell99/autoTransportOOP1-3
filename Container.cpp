#include "Container.h"

Container::Container()
{
	Next = this;
	L = NULL;
}

void Container::In(ifstream& ifst)
{
	while (!ifst.eof())
	{
		Container* temp = new Container;
		if ((this == this->Next) && (!ifst.tellg()))
		{
			this->L = Transport::In(ifst);
		}
		else
		{	
			Container* counter = this->Next;
			while (counter->Next != this)
			{
				counter = counter->Next;
			}

			counter->Next = temp;
			temp->L = Transport::In(ifst);
			temp->Next = this;
		}
	}

}; // ����

void Container::Out(ofstream& ofst)
{
	if (this->Next != nullptr)
	{
		ofst << "Container contains that elements:" << endl;
		Container* temp;
		temp = this;
		int i = 0;
		do
		{
			ofst << i << ": ";
			if (temp->L == NULL)
			{
				ofst << "Incorrect type of transport!!!" << endl;
			}
			else
			{
				temp->L->Out(ofst);
			}
			temp = temp->Next;
			i++;
		} while (temp != this);
	}
	else
	{
		ofst << "Container is empty!" << endl;

	}
}; // �����

void Container::Clear()
{
	Container* temp;
	temp = this->Next;
	while (temp != this)
	{
		this->Next = temp->Next;
		delete temp;
		temp = this->Next;
	}
	this->Next = nullptr;
};

void Container::Swap(Container* first, Container* second)
{
	Transport* temp;
	temp = first->L;
	first->L = second->L;
	second->L = temp;
};

void Container::Sort()
{
	//if container contains 1 element, do nothing
	if (this == this->Next)
	{
		return;
	}
	Container* current = this;
	bool flag = false;
	Transport* temp;
	//buble sort
	do
	{
		current = this;
		//if we didnt swap elements container is sorted
		flag = false;
		do
		{
			if (current->L->Compare(*current->Next->L))
			{
				Swap(current, current->Next);
				flag = true;
			}
			current = current->Next;

		} while (current->Next != this);
	} while (flag);
};

void Container::OutBus(ofstream& ofst)
{
	if (this->Next != nullptr)
	{
		ofst << endl << "Only Bus transports:" << endl;
		Container* temp;
		temp = this;
		int i = 0;
		do
		{
			ofst << i << ": ";
			if (temp->L == NULL)
			{
				ofst << "Incorrect type of transport!!!" << endl;
			}
			else
			{
				temp->L->OutBus(ofst);
			}
			temp = temp->Next;
			i++;
		} while (temp != this);
	}
	else
	{
		ofst << "Container is empty!" << endl;

	}
}; // �����