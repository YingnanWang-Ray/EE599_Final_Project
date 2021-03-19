#include "src/lib/solution.h"
#include "gtest/gtest.h"
#include <vector>

TEST(Expect0, Return0) {
  const std::vector<int> input = {1,2,3,6,5};
  int i = -1;
  SinglyLinkedList sll(input,i);
  EXPECT_EQ(5, sll.size());
  EXPECT_EQ(false, sll.empty());

  sll.push_back(7);
  EXPECT_EQ(7, sll.back());

  sll.push_front(8);
  EXPECT_EQ(7, sll.back());

  sll.push_front(0);
  EXPECT_EQ(0, sll.front());

  sll.push_back(9);
  EXPECT_EQ(0, sll.front());

  sll.pop_front();
  EXPECT_EQ(8,sll.front());

  sll.pop_back();
  EXPECT_EQ(7,sll.back());

  ListNode *f = new ListNode(3);
  sll.insert_after(f,4);
  ListNode *test = new ListNode(0);
  test = sll.head_;
  while(test->val!=f->val)
  {
    test = test->next;
  }
  EXPECT_EQ(4,test->val);

  ListNode *ff = new ListNode(6);

  ListNode *test1 = new ListNode(0);
  test1 = sll.head_;
  while(test1->next->val!=ff->val)
  {
    test1 = test1->next;
  }
  sll.erase(ff);
  EXPECT_EQ(4,test1->val);
  EXPECT_EQ(5,test1->next->val);
    
  int ith = 4;
  EXPECT_EQ(7,sll.GetBackPointer()->val);
  EXPECT_EQ(3,sll.GetIthPointer(ith)->val);
}

TEST(Expect1, Return1) {
  const std::vector<int> input = {1,10,3,6,11};
  int i = 11;
  SinglyLinkedList sll(input,i);
  EXPECT_EQ(5, sll.size());
  EXPECT_EQ(false, sll.empty());

  sll.push_back(7);
  EXPECT_EQ(7, sll.back());

  sll.push_front(8);
  EXPECT_EQ(7, sll.back());

  sll.push_front(0);
  EXPECT_EQ(0, sll.front());

  sll.push_back(9);
  EXPECT_EQ(0, sll.front());

  sll.pop_front();
  EXPECT_EQ(8,sll.front());

  sll.pop_back();
  EXPECT_EQ(7,sll.back());

  ListNode *f = new ListNode(3);
  sll.insert_after(f,4);
  ListNode *test = new ListNode(0);
  test = sll.head_;
  while(test->val!=f->val)
  {
    test = test->next;
  }
  EXPECT_EQ(4,test->val);

  ListNode *ff = new ListNode(6);

  ListNode *test1 = new ListNode(0);
  test1 = sll.head_;
  while(test1->next->val!=ff->val)
  {
    test1 = test1->next;
  }
  sll.erase(ff);
  EXPECT_EQ(4,test1->val);
  EXPECT_EQ(11,test1->next->val);
    
  int ith = 4;
  EXPECT_EQ(7,sll.GetBackPointer()->val);
  EXPECT_EQ(3,sll.GetIthPointer(ith)->val);
}
