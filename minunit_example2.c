#include "minunit.h"

MU_TEST(test_assert) {
   mu_assert_int_eq(5 * 5, 25);
   mu_assert(0, "zero isn't true");
}

MU_TEST(test_check) {
   mu_check(1 != 1);
}

MU_TEST_SUITE(test_example2) {
   MU_RUN_TEST(test_assert);
   MU_RUN_TEST(test_check);
}
