#include <gtest/gtest.h>
#include "singly_linked_list.h"

TEST(SanityCheck, BasicMath) {
    EXPECT_EQ(2 + 2, 4);
}

TEST(SinglyLinkedList, PlaceAtHeadIntoEmptyList) {
    SinglyLinkedList list;

    list.insertAtHead(10);

    EXPECT_FALSE(list.empty());
    EXPECT_EQ(list.size, 1);
    EXPECT_EQ(list.front(), 10);
}
