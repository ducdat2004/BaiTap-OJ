//void InsertBeforePosition(node *&head, int x, int pos)
//{
//    if (pos <= 1)
//    {
//        // Chèn ph?n t? vào ð?u danh sách
//        node *newNode = new node;
//        newNode->data = x;
//        newNode->next = head;
//        head = newNode;
//    }
//    else
//    {
//        int p = 1;
//        node *prevNode = NULL;
//        node *currentNode = head;
//
//        while (currentNode != NULL && p < pos)
//        {
//            prevNode = currentNode;
//            currentNode = currentNode->next;
//            p++;
//        }
//
//        if (p == pos)
//        {
//            // Chèn ph?n t? vào v? trí trý?c currentNode
//            node *newNode = new node;
//            newNode->data = x;
//            newNode->next = currentNode;
//
//            if (prevNode != NULL)
//            {
//                prevNode->next = newNode;
//            }
//            else
//            {
//                // N?u prevNode là nullptr, t?c là currentNode là ð?u danh sách
//                head = newNode;
//            }
//        }
//        else
//        {
//            
//            return; 
//        }
//    }
//}

