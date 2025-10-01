class Solution {
public:
    long long minCost(vector<int>& basket1, vector<int>& basket2) {
        

        unordered_map<int,int>mp1;
        unordered_map<int,int>mp2;
        long long ans=0;
        unordered_set<int>s1;
        unordered_set<int>s2;

        for(int i=0;i<basket1.size();i++)
        {
          
            if(mp1.count(basket1[i]))
            {
                mp1[basket1[i]]++;
            }
            else
            {
                mp1[basket1[i]]=1;
            }
            
              if(mp2.count(basket2[i]))
            {
                mp2[basket2[i]]++;
            }
            else
            {
                mp2[basket2[i]]=1;
            }

        }

        if(mp1==mp2)
        {
            return ans;
        }

        for(int i=0;i<basket1.size();i++)
        {

            if(s1.find(basket1[i])!=s1.end()&&s2.find(basket2[i])!=s2.end())
            {
               
               mp1[basket1[i]]--;
               mp2[basket2[i]]--;
               
               if(mp1.count(basket2[i]))
               {
                  mp1[basket2[i]]++;
               }
               else
               { 
                 mp1[basket2[i]]=1;
                
               }

               if(mp2.count(basket1[i]))
               {
                  mp2[basket1[i]]++;
               }
               else
               {
                mp2[basket1[i]]=1;
               }
               ans+=min(basket1[i],basket2[i]);

               if(mp1==mp2)
               {
                 return ans;
               }
              

           
            }
            else
            {
                s1.insert(basket1[i]);
                s2.insert(basket2[i]);
            }
        }
        
        return -1;


    }
};