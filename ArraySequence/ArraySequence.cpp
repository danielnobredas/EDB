//
//  ArraySequence.cpp
//
//  Created by Eiji Adachi Medeiros Barbosa
//

#include "Sequence.h"
#include "Node.h"

Node **content;
const int SIZE = 7;
unsigned int init;
unsigned int end;

Sequence::Sequence()
{
    content = new Node*[SIZE];
    this->quantity = 0;
    init = 0;
    end = 0;
}

Sequence::~Sequence()
{
    // TO - DO

    delete [] content;
}

/**
 Returns the i-th element in this sequence.
 */
Node* Sequence::get(int i)
{
    return content[i-1];
}

/**
 Inserts the element in this sequence.
 After inserting, the element must be in the i-th position.
 */
void Sequence::insert(int i, Node* element)
{
    // TO - DO
    for(int j=end;j>0;j--){
        content[i] = content[i-1];
    }    
    content[i]=element;
    quantity++;

}

/**
 Inserts the element in the begin of this sequence.
 After inserting, the element will be the first in the sequence.
 */
void Sequence::insertBegin(Node* element)
{
    for(int i=end;i>0;i--){
        content[i] = content[i-1];
    }
    content[0]=element;
    end++;
    quantity++;

}

/**
 Inserts the element in the end position of this sequence.
 After inserting, the element will be the last in the sequence.
 */
void Sequence::insertEnd(Node* element)
{
    // TO - DO

    content[end]= element;
    ++end;
    ++quantity;

} 

/**
 Removes the element in the i-th position of this sequence.
 Returns the removed element.
 */
Node* Sequence::remove(int i)
{
    // TO - DO



    return nullptr;
}

/**
 Removes the first element in this sequence.
 Returns the removed element.
 */
Node* Sequence::removeBegin()
{
    // TO - DO
    return nullptr;
}

/**
 Removes the last element in this sequence.
 Returns the removed element.
 */
Node* Sequence::removeEnd()
{
    // TO - DO
    content[end] = nullptr;

    return nullptr;
}

bool Sequence::isEmpty()
{
    return this->getQuantity()==0;
}

int Sequence::getQuantity()
{
    return this->quantity;
}
