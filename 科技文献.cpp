//本程序是使用Dijkstra算法实现求解最短路径问题并使用优先队列优化了Dijkstra算法
//利用vector表示邻接表存储图，但实现起来比链式存储的要简单的多，相当于是N个边数组
#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<algorithm>
#include<cmath>
#include<string>
#include<stack>
#include<queue>
#include<cstring>
#include<map>
#include<iterator>
#include<list>
#include<set>
#include<functional>
#include<memory.h>
#include <ctime>

using namespace std;

typedef pair<int, int> Pair;//first代表权值，second代表顶点序号。
const int maxn = 105;//最大顶点数。
const int M = 1e4;//最大边数。
int n, m;//实际顶点数和边数。
const int inf = 0x3f3f3f3f;//表示无穷大。
int dis[maxn];//存储源点到其余的最短距离。
bool visited[maxn];//判断是否已经确定最短距离
typedef struct Edge {
	int to; //边的终点顶点编号。
	int w;//边权值
}Edge;
void init() {
	memset(dis, inf, sizeof(dis));
	memset(visited, false, sizeof(visited));
}
vector<Edge> graph[maxn];//利用vector表示邻接表graph[i]对应的就是以起点为i的边向量，那么若起点i没有边，则该向量自然为空

void dijkstra(int S) {
	priority_queue<Pair, vector<Pair>, greater<Pair> > q;//优先队列，算法实现核心
	q.push(Pair(0, S));//将起点入队。
	while (!q.empty()) {
		Pair temp = q.top();//注意这里是要用top函数，在优先队列中没有front函数。
		q.pop();//出队。
		int v = temp.second;//取该最短路径的边的终点序号。
		if (visited[v])continue;//如果已经确定了就不能往下更新。为了避免重复更新。
		visited[v] = true;
		//以v为点开始遍历它的边，
		Edge e;//临时变量，存储点和边。
		for (int i = 0; i < graph[v].size(); i++) {
			//遍历
			e = graph[v][i];
			if (!visited[e.to] && dis[e.to] > dis[v] + e.w) {
				dis[e.to] = dis[v] + e.w;
				q.push(Pair(dis[e.to], e.to));//入队。
			}
		}
	}
	return;
}
int main()
{
	time_t begin, end;
	double ret;
	begin = clock();

	cout << "输入图的顶点个数和边的条数：" << endl;
	while (cin >> n >> m) {
		init();
		cout << "输入边的信息：" << endl;
		int u, v, w;
		Edge temp1, temp2;
		for (int i = 0; i < m; i++) {
			cin >> u >> v >> w;//如果m太大了，一定要使用scanf输入，不然可能会超时。
			temp1.to = v; temp2.to = u;
			temp1.w = temp2.w = w;
			graph[u].push_back(temp1);
			graph[v].push_back(temp2);//加边，同样如果是有向图只加一条边，且方向要对。
		}
		int S, E;
		cout << "输入起点和终点：" << endl;
		cin >> S >> E;//起点和终点
		dis[S] = 0; //将起点的dis置为0，实现Dijkstra算法的时候S就为源点，也就是将起点的最短路径置为0，其余都为inf，这样就可以使得dis数组是其余顶点到源点的最短距离了。
		dijkstra(S);
		cout << "最短路径长度为：" << endl;
		cout << dis[E] << endl;
		break;
	}
	
	end = clock();
	ret = double(end - begin) / CLOCKS_PER_SEC;
	cout << "runtime:   " << ret << endl;
	return 0;
}
//test 1
/*
6 8
1 3 10
1 5 30
1 6 100
2 3 5
3 4 50
4 6 10
5 6 60
5 4 20
*/
//#include<iostream>
//#include<string>
//#include <ctime>
//using namespace std;
//
///*
//本程序是使用Dijkstra算法实现求解最短路径并显示具体路径
//采用的邻接矩阵来存储图
//*/
////记录起点到每个顶点的最短路径的信息
//struct Dis {
//    string path;
//    int value;
//    bool visit;
//    Dis() {
//        visit = false;
//        value = 0;
//        path = "";
//    }
//};
//
//class Graph_DG {
//private:
//    int vexnum;   //图的顶点个数
//    int edge;     //图的边数
//    int** arc;   //邻接矩阵
//    Dis* dis;   //记录各个顶点最短路径的信息
//public:
//    //构造函数
//    Graph_DG(int vexnum, int edge);
//    //析构函数
//    ~Graph_DG();
//    // 判断我们每次输入的的边的信息是否合法
//    //顶点从1开始编号
//    bool check_edge_value(int start, int end, int weight);
//    //创建图
//    void createGraph();
//    //打印邻接矩阵
//    void print();
//    //求最短路径
//    Dis* Dijkstra(int begin);
//    //打印最短路径
//    void print_path(int);
//};
//
//
//
//
//
////构造函数
//Graph_DG::Graph_DG(int vexnum, int edge) {
//    //初始化顶点数和边数
//    this->vexnum = vexnum;
//    this->edge = edge;
//    //为邻接矩阵开辟空间和赋初值
//    arc = new int* [this->vexnum];
//    dis = new Dis[this->vexnum];
//    for (int i = 0; i < this->vexnum; i++) {
//        arc[i] = new int[this->vexnum];
//        for (int k = 0; k < this->vexnum; k++) {
//            //邻接矩阵初始化为无穷大
//            arc[i][k] = INT_MAX;
//        }
//    }
//}
////析构函数
//Graph_DG::~Graph_DG() {
//    delete[] dis;
//    for (int i = 0; i < this->vexnum; i++) {
//        delete this->arc[i];
//    }
//    delete arc;
//}
//
//// 判断我们每次输入的的边的信息是否合法
////顶点从1开始编号
//bool Graph_DG::check_edge_value(int start, int end, int weight) {
//    if (start<1 || end<1 || start>vexnum || end>vexnum || weight < 0) {
//        return false;
//    }
//    return true;
//}
//
//void Graph_DG::createGraph() {
//    cout << "请输入每条边的起点和终点（顶点编号从1开始）以及其权重" << endl;
//    int start;
//    int end;
//    int weight;
//    int count = 0;
//    while (count != this->edge) {
//        cin >> start >> end >> weight;
//        //首先判断边的信息是否合法
//        while (!this->check_edge_value(start, end, weight)) {
//            cout << "输入的边的信息不合法，请重新输入" << endl;
//            cin >> start >> end >> weight;
//        }
//        //对邻接矩阵对应上的点赋值
//        arc[start - 1][end - 1] = weight;
//        //无向图添加上这行代码
//        //arc[end - 1][start - 1] = weight;
//        ++count;
//    }
//}
//
//void Graph_DG::print() {
//    cout << "图的邻接矩阵为：" << endl;
//    int count_row = 0; //打印行的标签
//    int count_col = 0; //打印列的标签
//    //开始打印
//    while (count_row != this->vexnum) {
//        count_col = 0;
//        while (count_col != this->vexnum) {
//            if(count_row==count_col)
//                cout << "0 " << " ";
//            else if (arc[count_row][count_col] == INT_MAX)
//                cout << "∞" << " ";
//            else
//                cout << arc[count_row][count_col] << " ";
//            ++count_col;
//        }
//        cout << endl;
//        ++count_row;
//    }
//}
//Dis* Graph_DG::Dijkstra(int begin) {
//    //首先初始化我们的dis数组
//    int i;
//    for (i = 0; i < this->vexnum; i++) {
//        //设置当前的路径
//        dis[i].path = "v" + to_string(begin) + "-->v" + to_string(i + 1);
//        dis[i].value = arc[begin - 1][i];
//    }
//    //设置起点的到起点的路径为0
//    dis[begin - 1].value = 0;
//    dis[begin - 1].visit = true;
//
//    int count = 1;
//    //计算剩余的顶点的最短路径（剩余this->vexnum-1个顶点）
//    while (count != this->vexnum) {
//        //temp用于保存当前dis数组中最小的那个下标
//        //min记录的当前的最小值
//        int temp = 0;
//        int min = INT_MAX;
//        for (i = 0; i < this->vexnum; i++) {
//            if (!dis[i].visit && dis[i].value < min) {
//                min = dis[i].value;
//                temp = i;
//            }
//        }
//        //cout << temp + 1 << "  "<<min << endl;
//        //把temp对应的顶点加入到已经找到的最短路径的集合中
//        dis[temp].visit = true;
//        ++count;
//        for (i = 0; i < this->vexnum; i++) {
//            //注意这里的条件arc[temp][i]!=INT_MAX必须加，不然会出现溢出，从而造成程序异常
//            if (!dis[i].visit && arc[temp][i] != INT_MAX && (dis[temp].value + arc[temp][i]) < dis[i].value) {
//                //如果新得到的边可以影响其他为访问的顶点，那就就更新它的最短路径和长度
//                dis[i].value = dis[temp].value + arc[temp][i];
//                dis[i].path = dis[temp].path + "-->v" + to_string(i + 1);
//            }
//        }
//    }
//    return dis;
//}
//void Graph_DG::print_path(int begin) {
//    string str;
//    str = "v" + to_string(begin);
//    cout << "以" << str << "为起点的图的最短路径为：" << endl;
//    for (int i = 0; i != this->vexnum; i++) {
//        
//        if(dis[i].value<0){
//            cout << dis[i].path << "是无最短路径的" << endl;
//        }
//        else if (dis[i].value != INT_MAX )
//            cout << dis[i].path << "=" << dis[i].value << endl;
//        else {
//            cout << dis[i].path << "是无最短路径的" << endl;
//        }
//    }
//}
//
//
////顶点数和边数的关系是：((Vexnum*(Vexnum - 1)) / 2) < edge
//bool check(int Vexnum, int edge) {
//    if (Vexnum <= 0 || edge <= 0 || ((Vexnum * (Vexnum - 1)) / 2) < edge)
//        return false;
//    return true;
//}
//int main() {
// time_t begin, end;
//	double ret;
//	begin = clock();
//    int vexnum; int edge;
//
//    cout << "输入图的顶点个数和边的条数：" << endl;
//    cin >> vexnum >> edge;
//    while (!check(vexnum, edge)) {
//        cout << "输入的数值不合法，请重新输入" << endl;
//        cin >> vexnum >> edge;
//    }
//    Graph_DG graph(vexnum, edge);
//    graph.createGraph();
//    graph.print();
//    
//    int a;
//    printf("\n输入起点：");
//    scanf("%d", &a);
//   
//    Dis* dis=graph.Dijkstra(a);
//    graph.print_path(a);
//    int b[3],i,j=0;
//    /*printf("\n输入优先级：");
//    scanf("%d %d %d", &b[0],&b[1],&b[2]);
//    for (; i != vexnum,j<3; j++) {
//        i = b[j]-1;
//        if(dis[i].value<0){
//            cout << dis[i].path << "是无最短路径的" << endl;
//        }
//        else if (dis[i].value != INT_MAX )
//            cout << dis[i].path << "=" << dis[i].value << endl;
//        else {
//            cout << dis[i].path << "是无最短路径的" << endl;
//        }
//    }*/
//end = clock();
//	ret = double(end - begin) / CLOCKS_PER_SEC;
//	cout << "runtime:   " << ret << endl;
//    system("pause");
//    return 0;
//}

//输入：
//
//test 1
/*
6 8 
1 3 10
1 5 30
1 6 100
2 3 5
3 4 50
4 6 10
5 6 60
5 4 20
*/
//test 2
/*
8 26
1 2 20
1 3 30
1 4 20
2 1 20
2 3 20
2 5 30
3 1 30
3 2 20
3 4 10
3 6 40
4 1 20
4 3 10
4 7 30
5 2 30
5 6 20
5 8 20
6 3 40
6 5 10
6 7 10
6 8 20
7 4 30
7 6 10
7 8 50
8 5 20
8 6 20
8 7 50
*/
