class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {

        int m=nums1.size();
        int n=nums2.size();
        int i=0,j=0,steps=0,target;

        int a=0,b;


        if((n+m) %2){
            target=(n+m)/2;
        }
        else
            target=ceil((n+m)/2);

        if(n==0)
        {
            while (steps !=target+1){
                    b=a;
                    a=nums1[i];
                    i++;


                steps++;
            }
        }
        else if(m==0)
        {
            while (steps !=target+1){
                b=a;
                a=nums2[j];
                j++;


                steps++;
            }
        }
        else {
            int aa,bb;

            while (steps != target + 1) {
                aa=(i < m )? nums1[i]:INT32_MAX;
                bb=(j < n )? nums2[j]:INT32_MAX;
                if ( aa <= bb) {
                    b = a;
                    a = nums1[i];
                    i++;
                } else {
                    if (j < n) {
                        b = a;
                        a = nums2[j];
                        j++;
                    }

                }
                steps++;

            }
        }
        if((n+m) % 2){
            return (double )a;
        }
        else
            return (a+b)/2.0;

    }
};