# EE599HW3
EE599 Homework 3
This is Yingnan Wang (ID#4616805578) Homework 3

The question 1 is in the pdf file, named quetion 1.

Question 2:
	Because I used map.find, the runtime is O(logn). A for loop which is O(n)
	So the total runtime is O(n+logn) 


Question 3:
  	O(1)   SinglyLinkedList();
  	O(n) <- O(n+i)   SinglyLinkedList(const std::vector<int>, int);
  	O(1)   ~SinglyLinkedList(){delete head_;}
	O(1)   bool empty();
	O(n)   int size();
	O(n)   void push_back(int i);
	O(1)   void push_front(int i);
	O(m)   void insert_after(ListNode* p, int i);    //m depends on the location of *p. If *p points to the last element, m is equal to n.
	O(m)   void erase(ListNode* p);     //m depends on the location of *p.
	O(1)   void pop_front();
	O(n)   void pop_back();
	O(n)   int back();
	O(1)   int front();
	O(n)   ListNode* GetBackPointer();
	O(i)   ListNode* GetIthPointer(int i);
	O(n)   void print();


Questino 4:
	I just push each "(", "[", "{" into the stack, if I find the ")", "]", "}" which is match to the top element of the stack, I will pop the "(", "[" or "{" out.
So I need to read all the characters.
	Runtime is O(n)


Question 5:
	O(1)  AcademicRecord();
	O(n)  AcademicRecord(int, int, int);
	O(1)  ~AcademicRecord(){};
	O(n)  AcademicRecord operator++(int);
	O(n)  AcademicRecord operator--(int);
	O(n)  AcademicRecord operator+=(int in);
	O(n)  AcademicRecord operator-=(int dec);
	O(n)  AcademicRecord operator=(AcademicRecord& obj);
	O(n)  bool operator==(AcademicRecord& obj);
	O(n)  void print();
	Actually even the runtime is O(n), the struct only has 3 parameters. So the runtime is very close to O(1)


Question 6:
	All the functions are O(1).  And the output file named output.txt is in the 3-6 folder.