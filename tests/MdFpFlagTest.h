#ifndef _MDFPFLAGTEST_H_
#define _MDFPFLAGTEST_H_

#include "Test.h"
#include "Align16.h"
#include "MemoryFunction.h"

class CMdFpFlagTest : public CTest
{
public:
						CMdFpFlagTest();
	virtual				~CMdFpFlagTest();

	void				Compile(Jitter::CJitter&);
	void				Run();

private:
	struct CONTEXT
	{
		uint32			dstIsNegative0;
		uint32			dstIsNegative1;
		uint32			dstIsNegative2;

		uint32			dstIsZero0;
		uint32			dstIsZero1;
		uint32			dstIsZero2;

		ALIGN16

		float			src0[4];
		float			src1[4];
		float			src2[4];
	};

	CMemoryFunction		m_function;
};

#endif
