#pragma once

struct MemoryPoolMain 
{
	void* start;
	void* bookKeepingListStart;
	void* allocableMemoryStart;

	size_t allocableSize;
	size_t bookKeepingListSize;
};

class MemoryPool
{

public:
	MemoryPool();
	~MemoryPool();
};

