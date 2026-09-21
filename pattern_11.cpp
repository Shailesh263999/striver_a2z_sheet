class Solution {
public:
    void pattern11(int n) {
       for(int i = 0; i < n; i++) {

            int value;

            if(i % 2 == 0)
                value = 1;
            else
                value = 0;

            for(int j = 0; j <= i; j++) {

                cout << value << "";

                
                value = 1 - value;
            }

            cout << endl;
        }

    }
};
