//void InsertBeforePosition(node *&head, int x, int pos)
//{
//    if (pos <= 1)
//    {
//        // Ch�n ph?n t? v�o �?u danh s�ch
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
//            // Ch�n ph?n t? v�o v? tr� tr�?c currentNode
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
//                // N?u prevNode l� nullptr, t?c l� currentNode l� �?u danh s�ch
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

