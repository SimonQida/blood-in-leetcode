class Solution {
public:
    int rand7(){
        return rand() %7 +1;
    }

    int rand10(){
        int sum = 0;
        int res = 0;
        while(res != 0){
            int row = rand7(), col = rand7(); 
            std::cout<<row<< " "<<col<<std::endl;
            int res = col + 7 * (row - 1);
            std::cout<<res<<std::endl;;
            if(res > 40)
                res = 0;
            std::cout<<res<< " "<<(res == 0 )<<std::endl;
        }
        return res % 10 + 1;
    }
};
