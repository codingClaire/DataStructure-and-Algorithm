class RecentCounter {
public:
    
	queue<int> q;

	RecentCounter()
	{
	
	}
	int ping(int t)
	{
		while(!q.empty()&&q.front()<t-3000)
			q.pop();
		q.push(t);
		return q.size(); 
	}
}



/*用C写的什么玩意...*/ 
typedef struct 
{
    int lastcounter;
    int last;
} RecentCounter;

RecentCounter* recentCounterCreate() 
{
    RecentCounter a;
    lastcounter=0;
   
}

int recentCounterPing(RecentCounter* obj, int t) 
{
    int gap1=t-obj.last;
    for(int i=0;gap1)
}

void recentCounterFree(RecentCounter* obj) 
{
    for(int i=0;i<10000;i++)
        obj.request[i]=0;
}

/**
 * Your RecentCounter struct will be instantiated and called as such:
 * struct RecentCounter* obj = recentCounterCreate();
 * int param_1 = recentCounterPing(obj, t);
 * recentCounterFree(obj);
 */
