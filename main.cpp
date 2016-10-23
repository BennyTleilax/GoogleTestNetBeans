#include <cstdlib>
#include <gtest/gtest.h>

using namespace std;

int main(int argc, char** argv){
    ::testing::InitGoogleTest(&argc, argv);
    int nResult = RUN_ALL_TESTS();
    
    return 0;
}