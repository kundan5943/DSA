#include<iostream>
#include<queue>
using namespace std;
/*Important:- matrix.size() its gives no of rows in matrix
             matrix[i].size() its tell how many columns are there in a row
*/
class Row
{

    public:
    int rowindx;
    int soldiercount;
    Row(int rowindx,int soldiercount)
    {
        this->rowindx=rowindx;
        this->soldiercount=soldiercount;
    }

    bool operator <(const Row & obj)
    const
    {
        if(this->soldiercount==obj.soldiercount)
        {
            return this->rowindx>obj.rowindx;
        }

        return this->soldiercount>obj.soldiercount;
    }
};
void WeakestSoldier(vector<vector<int>> matrix,int k)
{
   vector<Row>rows;

   for(int i=0;i<matrix.size();i++)
   {
    int count=0;
    for(int j=0;j<matrix[i].size()&&matrix[i][j]==1;j++)
    {

        if(matrix[i][j]==1)
        {
           count+=1;
        }
    }
    rows.push_back(Row(i,count));
   }
   priority_queue<Row>pq(rows.begin(),rows.end());

   for(int i=0;i<k;i++)
   {
    cout<<"Row- "<<pq.top().rowindx<<endl;
    pq.pop();
   }

}
int main(){
    vector<vector<int>>matrix={{1,0,0,0,0},//row1 or city1 ,Soldier is denoted by 1 and surveliance (people) are denoted by 0 
                               {1,1,1,1,1},
                               {1,0,0,0,0},
                               {1,1,1,1,0}};

    WeakestSoldier(matrix,3);
    
    return 0;
}