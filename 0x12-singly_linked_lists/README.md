# Data Structure and Algorithms - Linked List

# Data Structure and Algorithms - Linked List

```
A linked list is a sequence of data structures, which are connected together via links.
```
```
A linked list is a sequence of data structures, which are connected together via links.
```
```
Linked List is a sequence of links which contains items. Each link contains a connection to another link.
```
```
Linked List is a sequence of links which contains items. Each link contains a connection to another link.
```
```
Linked list is the second most-used data structure after array. Following are the important terms to
```
```
Linked list is the second most-used data structure after array. Following are the important terms to
```
```
understand the concept of Linked List.
```
```
understand the concept of Linked List.
```
```
LinkLink − Each link of a linked list can store a data called an element. − Each link of a linked list can store a data called an element.
```
```
NextNext − Each link of a linked list contains a link to the next link called Next. − Each link of a linked list contains a link to the next link called Next.
```
```
LinkedList
```
```
LinkedList
− A Linked List contains the connection link to the first link called First.
```
```
− A Linked List contains the connection link to the first link called First.
```
## Linked List Representation

## Linked List Representation

```
Linked list can be visualized as a chain of nodes, where every node points to the next node.
```
```
Linked list can be visualized as a chain of nodes, where every node points to the next node.
```
```
As per the above illustration, following are the important points to be considered.
```
```
As per the above illustration, following are the important points to be considered.
```
```
Linked List contains a link element called first.
```
```
Linked List contains a link element called first.
```
```
Each link carries a data field(s) and a link field called next.
```
```
Each link carries a data field(s) and a link field called next.
```
```
Each link is linked with its next link using its next link.
```
```
Each link is linked with its next link using its next link.
```
```
Last link carries a link as null to mark the end of the list.
```
```
Last link carries a link as null to mark the end of the list.
```
## Types of Linked List

## Types of Linked List

```
Following are the various types of linked list.Following are the various types of linked list.
```
```
Simple Linked ListSimple Linked List − Item navigation is forward only − Item navigation is forward only..
```
```
Doubly Linked ListDoubly Linked List − Items can be navigated forward and backward. − Items can be navigated forward and backward.
```

```
Circular Linked List
```
```
Circular Linked List
− Last item contains link of the first element as next and the first element
```
```
− Last item contains link of the first element as next and the first element
```
```
has a link to the last element as previous.has a link to the last element as previous.
```
## Basic OperationsBasic Operations

```
Following are the basic operations supported by a list.Following are the basic operations supported by a list.
```
```
InsertionInsertion − Adds an element at the beginning of the list. − Adds an element at the beginning of the list.
```
```
Deletion
```
```
Deletion
− Deletes an element at the beginning of the list.
```
```
− Deletes an element at the beginning of the list.
```
```
Display
```
```
Display
− Displays the complete list.
```
```
− Displays the complete list.
```
```
Search
```
```
Search
− Searches an element using the given key.
```
```
− Searches an element using the given key.
```
```
Delete
```
```
Delete
− Deletes an element using the given key.
```
```
− Deletes an element using the given key.
```
## Insertion Operation

## Insertion Operation

```
Adding a new node in linked list is a more than one step activity. We shall learn this with diagrams here.
```
```
Adding a new node in linked list is a more than one step activity. We shall learn this with diagrams here.
```
```
First, create a node using the same structure and find the location where it has to be inserted.First, create a node using the same structure and find the location where it has to be inserted.
```
```
Imagine that we are inserting a node
```
```
Imagine that we are inserting a node
B
```
### B

```
(NewNode), between
```
```
(NewNode), between
A
```
### A

```
(LeftNode) and
```
```
(LeftNode) and
C
```
### C

```
(RightNode). Then
```
```
(RightNode). Then
```
```
point B.next to C −
```
```
point B.next to C −
```
```
NewNode.next −> RightNode;
```
```
NewNode.next −> RightNode;
```
```
It should look like this −
```
```
It should look like this −
```

```
Now, the next node at the left should point to the new node.
```
```
Now, the next node at the left should point to the new node.
```
```
LeftNode.next −> NewNode;
```
```
LeftNode.next −> NewNode;
```
```
This will put the new node in the middle of the two. The new list should look like this −
```
```
This will put the new node in the middle of the two. The new list should look like this −
```
```
Similar steps should be taken if the node is being inserted at the beginning of the list. While inserting it at
```
```
Similar steps should be taken if the node is being inserted at the beginning of the list. While inserting it at
```
```
the end, the second last node of the list should point to the new node and the new node will point to
```
```
the end, the second last node of the list should point to the new node and the new node will point to
```
### NULL.

### NULL.

## Deletion Operation

## Deletion Operation

```
Deletion Deletion is also a more than one step process. is also a more than one step process. We shall learn with pictorial We shall learn with pictorial representation. representation. First, locateFirst, locate
```
```
the target node to be removed, by using searching algorithms.
```
```
the target node to be removed, by using searching algorithms.
```

```
The left (previous) node of the target node now should point to the next node of the target node −The left (previous) node of the target node now should point to the next node of the target node −
```
```
LeftNode.next −> TargetNode.next;
```
```
LeftNode.next −> TargetNode.next;
```
```
This will remove the link that was pointing to the target node. Now, using the following code, we will
```
```
This will remove the link that was pointing to the target node. Now, using the following code, we will
```
```
remove what the target node is pointing at.
```
```
remove what the target node is pointing at.
```
```
TargetNode.next −> NULL;
```
```
TargetNode.next −> NULL;
```
```
We need to use the deleted node. We can keep that in memory otherwise we can simply deallocate
```
```
We need to use the deleted node. We can keep that in memory otherwise we can simply deallocate
```
```
memory and wipe off the target node completely.
```
```
memory and wipe off the target node completely.
```
## Reverse Operation

## Reverse Operation


This operation is a thorough one. We need to make the last node to be pointed by the head node and

This operation is a thorough one. We need to make the last node to be pointed by the head node and

reverse the whole linked list.reverse the whole linked list.

First, we traverse to the end of the list. It should be pointing to NULL. Now, we shall make it point to its

First, we traverse to the end of the list. It should be pointing to NULL. Now, we shall make it point to its

previous node −

previous node −

We have to make sure that the last node is not the last node. So we'll have some temp node, which

We have to make sure that the last node is not the last node. So we'll have some temp node, which

looks like the head node pointing to the last node. Now, we shall make all left side nodes point to their

looks like the head node pointing to the last node. Now, we shall make all left side nodes point to their

previous nodes one by one.

previous nodes one by one.

Except the node (first node) pointed by the head node, all nodes should point to their predecessor,

Except the node (first node) pointed by the head node, all nodes should point to their predecessor,

making them their new successor. The first node will point to NULL.

making them their new successor. The first node will point to NULL.

We'll make the head node point to the new first node by using the temp node.

We'll make the head node point to the new first node by using the temp node.


The linked list is now reversed. To see linked list implementation in C programming language, please

The linked list is now reversed. To see linked list implementation in C programming language, please



