
    
    bool isArmstrong(int n) {
            if( n < 0) return false;
            int sum;
            int temp = n;
            int revNum =0;
            while( n > 0){
                sum = n % 10;
                revNum = revNum + (sum*sum*sum);
                n = n/10;
            }

            return temp == revNum;
    }