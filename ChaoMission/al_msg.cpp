#include "al_msg.h"

extern "C" {
	void AlMsgWinAddLineC(KinderCoMessageThing* a2, const char* a1, bool a3)
	{
		dword_1A267D0 = -1;
		__asm
		{
			push[a3]
			mov ebx, [a1]
			mov esi, [a2]
			call sub_579E30Ptr
			add esp, 4
		}
	}
}