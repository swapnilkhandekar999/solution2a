#include"header.h"
#include "unity.h"
#include "unity_internals.h"


/**
 * @brief Unit testing for reading,opening and storing the contents of the CSV file, further sorting its contents.
 * 
 */

FILE *fptr;

/* Required by the unity test framework */
void setUp()
{
}
/* Required by the unity test framework */
void tearDown()
{
}

void test_fileopen(void)
{
    TEST_ASSERT_EQUAL(fileOpenUtil("data.csv","r", &fptr), OK);
	TEST_ASSERT_EQUAL(fileOpenUtil("Empty_test.csv","r", &fptr), NO_FILE);
}


