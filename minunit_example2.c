#include "minunit.h"

MU_TEST(test_assert) {
   mu_assert_int_eq(5 * 5, 25);
}

MU_TEST(test_check) {
   mu_check(1 != 1);
}

MU_TEST(test_string) {
   mu_assert_string_eq("abcd", NULL);
}

MU_TEST(test_string2) {
   mu_assert_string_eq(NULL, NULL);
}

MU_TEST_SUITE(test_example2) {
   MU_RUN_TEST(test_assert);
   MU_RUN_TEST(test_check);
   MU_RUN_TEST(test_string);
   MU_RUN_TEST(test_string2);
}
