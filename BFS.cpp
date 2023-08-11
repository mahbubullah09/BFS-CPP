 #include <iostream>

using namespace std;

int n, m, k, i, j, graph[10][10], v;
int visited[10], step=1, connection[10];
int Queue[10], rear, Front;

int main()
{
    cout<<"Enter the number of vertices: ";
    cin>>n;
    cout<<"Enter the number of edges: ";
    cin>>m;
    cout<<"EDGES\n";

    for(k=1; k<=m; k++)
    {
        cin>>i>>j;
        graph[i][j]=1;
    }
    cout<<"Enter the starting vertex: ";
    cin>>v;
    cout<<"DFS ORDER: ";
    cout<<v<<" ";

    visited[v] = 1;

    while(step<n)
    {
        for(j=1; j<=n; j++)
        {
            if(graph[v][j]!=0 && visited[j]!=1 && connection[j]!=1)
            {
                connection[j]=1;
                Queue[rear] = j;
                rear++;
            }
        }
        v = Queue[Front];
        Front++;
        cout<<v<<" ";
        visited[v]=1;
        connection[v] = 0;
        step++;
    }
}
