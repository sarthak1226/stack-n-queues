# Algorithm: Stack Using Linked List

 1. Start

 2. Create a structure `node`
- `data`
- Structure pointer `next`
3. Create a structure pointer `head = NULL`
  4. End


# Push Function

1. Start

2. In push function, take value `val` as argument.

3. Create a structure node pointer `newnode`.

4. Initialize `newnode` using dynamic memory allocation.

5. newnode->data = val

6. newnode->next = head

7. `head = newnode`

8. End


# IsEmpty Function
1. Start
2. Check head.
3. If` head == NULL`, `return 1`.
4. Otherwise, `return 0`.
5. End

# Pop Function

1. Start

2. Check `head`.

3. If `head == NULL`:
- Print/return `-1`.

4. Initialize data = head->data.

5. Declare a structure node pointer `temp`.

6. Initialize temp = head.

7. head = head->next

8. Free `temp` pointer.

9. Return `data`.

10. End



#  Peek Function
1. Start
2. Check head.
3. If `head == NULL`:
4. Print/`return -1`.
5. Otherwise, return `head->data`.
6. End

# Display Function

1. Start

2. Create a structure node pointer `temp`.

3. Initialize `temp = head`.

4. Check if `head == NULL`:
- Print Stack Empty.
- Return.

5. Repeat while `temp != NULL`:
- Print temp->data.
- temp = temp->next.

6. End

# Size Function

1. Start

2. Initialize `count = 0`.

3. Create a structure node pointer `temp`.

4. Initialize `temp = head`.

5. Repeat while `temp != NULL`:
- Increment `count`.
- temp = temp->next.

6. Return  count.

7. End


# Clear Function

1. Start

2. Declare a structure node pointer `temp`.

3. Repeat while `head != NULL`:
- temp = head
- head = head->next
- Free `temp` pointer.

4. End