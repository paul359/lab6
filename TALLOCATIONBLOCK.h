#ifndef TALLOCATIONBLOCK_H
#define TALLOCATIONBLOCK_H 
#include <cstdlib>
#include "TStack.h"
class TAllocationBlock { 
public:  
	TAllocationBlock(size_t size,size_t count);   //создание блока
	void *allocate(); //выделение блока
	void deallocate(void *pointer);  //освобождение блока
	bool has_free_blocks();     // проверка на наличие свобожных блоков   
	virtual ~TAllocationBlock(); 
private:  
	size_t _size;  // размер блоков в байтах
	size_t _count; // количество блоков
	char  *_used_blocks;  // используемый указатель на область памяти использ. блоков 
	TStack  _free_blocks; // стэк с адресами свободных блоков
	size_t _free_count; // кол-во свободных блоков

		
 };

#endif /* TALLOCATIONBLOCK_H */ 