// 參考 https://alrightchiu.github.io/SecondRound/graph-breadth-first-searchbfsguang-du-you-xian-sou-xun.html
#include <iostream>
#include "graph.h"

using namespace std;



// void Graph::BFS(int Start){

//     color = new int[num_vertex];
//     predecessor = new int[num_vertex];
//     distance = new int[num_vertex];

//     for (int i = 0; i < num_vertex; i++) {  // 初始化，如圖二(b)
//         color[i] = 0;                       // 0:白色;
//         predecessor[i] = -1;                // -1表示沒有predecessor
//         distance[i] = num_vertex+1;         // num_vertex個vertex, 
//     }                                       // 最長距離 distance = num_vertex -1條edge

//     std::queue<int> q;
//     int i = Start;

//     for (int j = 0; j < num_vertex; j++) {  // j從0數到num_vertex-1, 因此j會走過graph中所有vertex
//         if (color[i] == 0) {                // 第一次i會是起點vertex, 如圖二(c)
//             color[i] = 1;                   // 1:灰色
//             distance[i] = 0;                // 每一個connected component的起點之距離設成0
//             predecessor[i] = -1;            // 每一個connected component的起點沒有predecessor
//             q.push(i);
//             while (!q.empty()) {
//                 int u = q.front();                  // u 為新的搜尋起點
//                 for (std::list<int>::iterator itr = AdjList[u].begin();        // for loop 太長
//                      itr != AdjList[u].end(); itr++) {                         // 分成兩段
//                     if (color[*itr] == 0) {                // 若被「找到」的vertex是白色
//                         color[*itr] = 1;                   // 塗成灰色, 表示已經被「找到」
//                         distance[*itr] = distance[u] + 1;  // 距離是predecessor之距離加一
//                         predecessor[*itr] = u;             // 更新被「找到」的vertex的predecessor
//                         q.push(*itr);                      // 把vertex推進queue
//                     }
//                 }
//                 q.pop();        // 把u移出queue
//                 color[u] = 2;   // 並且把u塗成黑色
//             }
//         }
//         // 若一次回圈沒有把所有vertex走過, 表示graph有多個connected component
//         // 就把i另成j, 繼續檢查graph中的其他vertex是否仍是白色, 若是, 重複while loop
//         i = j;
//     }
// }

// my easy version of BFS

void Graph::BFS(int Start){
    color =  new int[num_vertex]; // visited array
    std::queue<int> q;
    for (int i = 0; i < num_vertex; i++) {
        color[i] = 0; // unvisited
    }

    for (int i = Start; i < num_vertex; i = Start) {
        if (color[i] == 0) {
            color[i] = 1; 
            
        }
    }

    
}

int main(){

    Graph g = sample_graph();
    g.BFS(0);

    for (int i = 0; i < sizeof(g.predecessor); i++) {
        cout << g.predecessor[i];
    }

    return 0;
}