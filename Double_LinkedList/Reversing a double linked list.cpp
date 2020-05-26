 Node<T>* reverselist(){
            Node<T>* current=this->head;
            Node<T>* temp;
         while(current!=nullptr){
           temp=current->previous;
           current->previous=current->next;
           current->next=temp;
           current=current->previous;
         }
          temp=this->head;
          this->head=this->tail;
          this->tail=temp;
          return temp;
         }