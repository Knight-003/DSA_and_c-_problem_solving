class Solution {
 int myFab(int n){
     if(n==1){
         return 1;
     }
     if(n==0){
         return 0;
     }
     return myFab(n-2)+myFab(n-1);

 }





public:
    int fib(int n) {

        return myFab(n);



        
    }
};