#pragma once

void* operator new(size_t size)
{

}

void* operator new[](size_t size)
{

}

void operator delete(void* memoryPtr)
{

}

void operator delete[](void* memoryPtr)
{

}

class MemoryManager
{
public:
	MemoryManager();
	~MemoryManager();

	void* allocate(size_t size);
	void  free(void* memoryPtr);
};

