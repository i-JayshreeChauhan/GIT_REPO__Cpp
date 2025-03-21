/*
Abstract base classes in C++ can only be used as base classes. Thus, they are allowed to have virtual member functions without definitions.

A cache is a component that stores data so future requests for that data can be served faster. The data stored in a cache might be the results of an earlier computation, or the duplicates of data stored elsewhere. A cache hit occurs when the requested data can be found in a cache, while a cache miss occurs when it cannot. Cache hits are served by reading data from the cache which is faster than recomputing a result or reading from a slower data store. Thus, the more requests that can be served from the cache, the faster the system performs.

One of the popular cache replacement policies is: "least recently used" (LRU). It discards the least recently used items first.

For example, if a cache with a capacity to store 5 keys has the following state(arranged from most recently used key to least recently used key) -

5 3 2 1 4
Now, If the next key comes as 1(which is a cache hit), then the cache state in the same order will be -

1 5 3 2 4
Now, If the next key comes as 6(which is a cache miss), then the cache state in the same order will be -

6 1 5 3 2
You can observe that 4 has been discarded because it was the least recently used key and since the capacity of cache is 5, it could not be retained in the cache any longer.

Given an abstract base class Cache with member variables and functions:

mp - Map the key to the node in the linked list
cp - Capacity
tail - Double linked list tail pointer
head - Double linked list head pointer
set() - Set/insert the value of the key, if present, otherwise add the key as the most recently used key. If the cache has reached its capacity, it should replace the least recently used key with a new key.
get() - Get the value (will always be positive) of the key if the key exists in the cache, otherwise return -1.

You have to write a class LRUCache which extends the class Cache and uses the member functions and variables to implement an LRU cache.


Input Format
-------------

First line of input will contain the N number of lines containing get  or set commands followed by the capacity M of the cache.
The following N lines can either contain set or get commands.
An input line starting with get will be followed by a key to be found in the cache. An input line starting with set will be followed by the key and value respectively to be inserted/replaced in the cache.

constraints
-----------
1 <= N <= 500000
1 <= M <= 1000
1 <= key <= 20
1 <= value <= 2000

Output Format
-------------

The code provided in the editor will use your derived class LRUCache to output the value whenever a get command is encountered.

Sample Input
-------------

3 1
set 1 2
get 1
get 2

Sample Output
--------------

2
-1

Explanation
-----------

Since, the capacity of the cache is 1, the first set results in setting up the key 1 with it's value 2. The first get results in a cache hit of key 1, so 2 is printed as the value for the first get. The second get is a cache miss, so -1 is printed.


*/

#include <iostream>
#include <vector>
#include <map>
#include <string>
#include <algorithm>
#include <set>
#include <cassert>
using namespace std;

struct Node{
   Node* next;
   Node* prev;
   int value;
   int key;
   Node(Node* p, Node* n, int k, int val):prev(p),next(n),key(k),value(val){};
   Node(int k, int val):prev(NULL),next(NULL),key(k),value(val){};
};

class Cache{
   
   protected: 
   map<int,Node*> mp; //map the key to the node in the linked list
   int cp;  //capacity
   Node* tail; // double linked list tail pointer
   Node* head; // double linked list head pointer
   virtual void set(int, int) = 0; //set function
   virtual int get(int) = 0; //get function

};


class LRUCache : public Cache
{

    public:
        struct Node** arr; 

        LRUCache(int c)
        {
            if(c<=20) cp=c;
            else cp=20;
            

            //---------- now creating map and making 

            for(int i=0;i<cp ;i++)
            {
                mp.insert( pair<int,Node*> ( (i+21) , new Node((i+21),0) ) ) ;   
                
            }

            ///-----------linking them

            auto it = mp.begin();
            Node* prevNode = NULL; // To keep track of the previous node
            
            while (it != mp.end()) 
            {
                if (it == mp.begin()) 
                {  
                    head = it->second;  // First element becomes the head
                    head->prev = NULL;  // Head has no previous node
                } 
                else 
                {  
                    it->second->prev = prevNode;  
                    prevNode->next = it->second;  
                }
            
                prevNode = it->second; // Move the prevNode pointer
                ++it;  // Move to the next element
            }
            
            // Set tail pointer
            if (!mp.empty()) 
            {
                tail = prevNode;  // The last node is the tail
                tail->next = NULL;  // Tail should point to NULL
            }

            //linkedlisttraversal(head);
            
        }

        void linkedlisttraversal(struct Node *ptr);

        void set(int k, int v) ;
        int get(int k);

};


void LRUCache :: linkedlisttraversal(struct Node *ptr)
{
     while(ptr!=NULL)
     {
        cout<<"The key = "<<ptr->key <<"   and  val = "<<ptr->value<<endl;
        ptr = ptr->next;
     }

     cout<<endl;
}

void LRUCache :: set(int k, int v)               // k=key , v = value
{

     /*
        case 1 : value doesnt exist
            --> identify tail key from tail->key
            --> update tail to point to prev element of current tail and make next of pprev point to NULL
            --> find last element of map using key and first delete it->second (pointer) and then mp.erase(key)
            --> add new element at head and make head point to it
            --> update new element in map
        
        case 2 : value exists
            --> remove that matched element from link and connect its prev and next link to each other
            --> add it at head and make head point to it
            --> update its val

     

     */

    //--------- searching should be done in map

    auto it = mp.find(k);

    if( it == mp.end() )    ///-------------value doesnt exist --> execute case 1
    {
        int temp_key = tail->key;

        //---update tail to point to prev element of current tail and make next of pprev point to NULL
       
       
        if (tail->prev) 
        {   // Ensure tail->prev exists before modifying
            tail = tail->prev;
            tail->next = NULL;
        } 
        else 
        {  // If only one element exists, reset head and tail to NULL
            head = NULL;
            tail = NULL;
        }


        //---find last element in map using key and first delete it->second (pointer) and then mp.erase(key)
        
        auto it1 = mp.find(temp_key);
        Node* tempNode = it1->second; // Store pointer
        mp.erase(it1); // Erase before deleting
        delete tempNode; // Now safe to delete
        

        //---update new element in map and generate node pointer as well + make it head + make it point to current head 
        mp.insert( pair<int,Node*> ( k , new Node(k,v) ) ) ;
        it1 = mp.find(k);

        if(head == NULL)
        {
            head = it1->second;
            tail = it1->second; 
        }
        else
        {
            head->prev = it1->second;

            it1->second->prev = NULL;
            it1->second->next = head ; 
    
            head = it1->second;

        }


  



    }
    else    ///-------------value exists --> execute case 2
    {
        //----remove that matched element from link and connect its prev and next link to each other
       
       
        if (it->second->prev) // Check if prev exists
        it->second->prev->next = it->second->next;
    
        if (it->second->next) // Check if next exists
        it->second->next->prev = it->second->prev;
    


        //---add it at head and make head point to it
        head->prev = it->second;

        it->second->prev = NULL;
        it->second->next = head ; 

        head = it->second;   //head pointer now points to current pointer

        //---update its val
        it->second->value = v ;

    }

    //cout<<endl;
    //linkedlisttraversal(head);
    //cout<<endl;


}

int LRUCache :: get(int k)
{
        //----- search element 
        auto it = mp.find(k);


        if(it != mp.end())            //element is available
        {
            //---return val of that node pointer
    
            int node_value = it->second->value ;
    
            return node_value;
        }
        else
        {
            return -1;
        }
}

int main() {
   int n, capacity,i;
   cin >> n >> capacity;
   LRUCache l(capacity);
   for(i=0;i<n;i++) {
      string command;
      cin >> command;
      if(command == "get") {
         int key;
         cin >> key;
         cout << l.get(key) << endl;
      } 
      else if(command == "set") {
         int key, value;
         cin >> key >> value;
         l.set(key,value);
      }
   }
   return 0;
}
