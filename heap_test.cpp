#include "heap.cpp"
#include <gmock/gmock.h>
#include <gtest/gtest.h>
#include <vector>

using namespace std;
using namespace testing;

GTEST_API_ int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}

typedef vector<int> IntVector;

TEST(HEAP, HEAPFIY_TEST) {
    vector<int> a = { 12, 42, 30 };
    MAX_HEAPIFY(a, 0, a.size() - 1);
    EXPECT_THAT(a, ElementsAre(42, 12, 30));
    // IntVector in3 = { 5, 8, 12, 19, 28, 20, 15, 22, 3 };
    // MAX_HEAPIFY(in3, 0, in3.size() - 1);
    // EXPECT_THAT(a, ElementsAre(3, 5, 12, 8, 28, 20, 15, 22, 19));
}

TEST(HEAP, BUILD_HEAP) {
    // 已经是一个堆了
    vector<int> h1 = { 75, 45, 65, 30, 15, 25, 20, 10 };
    BUILD_HEAPIFY(h1);
    EXPECT_THAT(h1, ElementsAre(75, 45, 65, 30, 15, 25, 20, 10));
    IntVector h2 = { 46, 79, 56, 38, 40, 84 };
    BUILD_HEAPIFY(h2);
    EXPECT_THAT(h2, ElementsAre(84, 79, 56, 38, 40, 46));
    IntVector h3 = { 23, 40, 28, 19, 20, 42 };
    BUILD_HEAPIFY(h3);
    EXPECT_THAT(h3, ElementsAre(42, 40, 28, 19, 20, 23));
    IntVector h4 = { 93, 35, 48, 53, 45, 30, 18, 36, 15 };
    BUILD_HEAPIFY(h4);
    EXPECT_THAT(h4, ElementsAre(93, 53, 48, 36, 45, 30, 18, 35, 15));
    IntVector h5 = { 5, 11, 7, 2, 3, 17 };
    BUILD_HEAPIFY(h5);
    EXPECT_THAT(h5, ElementsAre(17, 11, 7, 2, 3, 5));
}
