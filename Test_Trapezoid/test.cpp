#include "pch.h"
#include "../Trap/Trap.h"
#include <stdexcept>

TEST(TestTrap, square) { //проверка результатов площади тропеции

	Trap t(15, 6, 2, 3);
	EXPECT_NEAR(t.square(), 67.1617, 0.00005);


	Trap b(6, 4, 6, 3);
	EXPECT_NEAR(b.square(), 20.927, 0.00005);
}

TEST(TestTrap, perimeter) {  //проверка результатов периметра тропеции

	Trap t(17, 11, 5, 4);
	EXPECT_NEAR(t.perimeter(), 37, 0.00005);

	Trap b(12, 4, 9, 2);
	EXPECT_NEAR(b.perimeter(), 27, 0.00005);

}

TEST(TestTrap, Side) {  //проверка конструктора без параметров 

	Trap t1;

	t1.set_trap(2, 3, 24, 35);

	EXPECT_EQ(t1.get_ab(), 2);
	EXPECT_EQ(t1.get_bc(), 3);
	EXPECT_EQ(t1.get_cd(), 24);
	EXPECT_EQ(t1.get_ad(), 35);

	Trap b1;

	b1.set_trap(6, 3, 14, 10);

	EXPECT_EQ(b1.get_ab(), 6);
	EXPECT_EQ(b1.get_bc(), 3);
	EXPECT_EQ(b1.get_cd(), 14);
	EXPECT_EQ(b1.get_ad(), 10);
}