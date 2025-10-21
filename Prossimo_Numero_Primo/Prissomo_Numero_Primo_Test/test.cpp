#include "pch.h"
#include "..\Prossimo_Numero_Primo\Prossimo_Numero_Primo.h"

namespace Prissomo_Numero_Primo_Test {

	TEST(Prossimo_Numero_Primo_Test, Test1) {
		EXPECT_EQ(Prossimo_Numero_Primo(14), 17);
	}

}