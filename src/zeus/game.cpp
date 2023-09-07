#include "stdafx.hpp"

#include "game.hpp"

namespace zeus {
	char* game::ModuleBase = (char*)GetModuleHandle(NULL);
	game::tGetXAssetSize game::DB_GetXAssetTypeSize = NULL;
	XAsset* game::DB_XAssetPool = NULL;

	XAsset* game::GetXAssetPool(int index)
	{
		if (!game::DB_XAssetPool)
		{
			game::DB_XAssetPool = reinterpret_cast<XAsset*>(PTR_GET_XASSET_POOL);
		}
		return &game::DB_XAssetPool[index];
	}

	void game::ResizeAssetLimits(int index, int newSize)
	{
		auto structSize = GetXAssetSize(index);
		auto assetPool = GetXAssetPool(index);

		if (structSize != -1 && assetPool != 0 && assetPool->maximum < newSize)
		{
			auto newBlock = (LinkedListEntry*)calloc(static_cast<size_t>(newSize) - assetPool->maximum, structSize);
			if (newBlock != 0)
			{
				LinkedListEntry* nextBlockPtr = newBlock;
				if (!assetPool->firstEntry)
				{
					assetPool->firstEntry = newBlock;
					nextBlockPtr = (LinkedListEntry*)((uint8_t*)nextBlockPtr + structSize);
				}

				LinkedListEntry* blockPtr = (LinkedListEntry*)assetPool->firstEntry;

				auto size_c = newSize - 1;
				do
				{
					if (!blockPtr->next)
					{
						blockPtr->next = nextBlockPtr;
						blockPtr = nextBlockPtr;
						nextBlockPtr = (LinkedListEntry*)((uint8_t*)nextBlockPtr + structSize);
					}
					else
					{
						blockPtr = (LinkedListEntry*)((uint8_t*)blockPtr + structSize);
					}
					--size_c;
				} while (size_c);
				assetPool->maximum = newSize;
			}
		}
	}
}