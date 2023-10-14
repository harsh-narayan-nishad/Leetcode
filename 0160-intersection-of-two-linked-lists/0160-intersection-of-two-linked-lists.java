/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode(int x) {
 *         val = x;
 *         next = null;
 *     }
 * }
 */
public class Solution {
    public ListNode getIntersectionNode(ListNode headA, ListNode headB) {
         
        //  Set<ListNode> set= new HashSet<>();
        //  ListNode temp1=headA;
        //  while(temp1!=null){
        //      set.add(temp1);
        //      temp1=temp1.next;
        //  }

        //  ListNode temp2=headB;
        //  while(temp2!=null){
        //      if(set.contains(temp2)){
        //          return temp2;
        //      }
        //      temp2=temp2.next;
        //  }
        //  return null;

        // yeh hai bhaiya doosara tareeka

//         ListNode temp1=headA;
        
//         while(temp1!=null){
// ListNode temp2=headB;
// while(temp2!=null){
//     if(temp2==temp1){
//         return temp2;
//     }
//     else {
//         temp2=temp2.next;
//     }
// }
// temp1=temp1.next;
//         }
//         return null;

// yeh ha bhaiya joi teesara solution

 ListNode temp1 = headA;
        ListNode temp2 = headB;

        int l1 =0, l2 = 0;

        while(temp1!=null){
            temp1 = temp1.next;
            l1++;
        }
        while(temp2!=null){
            temp2 = temp2.next;
            l2++;
        }
temp1=headA;
temp2=headB;
        int size = 0;
        int flag=0;

        if(l1<l2){
        flag=2;
            
            size = l2-l1;
            
        }

        if(l1>l2){
            flag=1;
            size = l1-l2;
        }

        if(flag == 2){
            while(size>0){
                temp2 = temp2.next;
                size--;
            }
        }
        if(flag == 1){
            while(size>0){
                temp1 = temp1.next;
                size--;
            }
        }

        while(temp1!=null){
            if(temp1 == temp2){
                return temp1;
            }
            else{
                temp1 = temp1.next;
                temp2 = temp2.next;
            }
        }

        return null;


    }
}