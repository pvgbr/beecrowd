#include <stdio.h>
#include <stack>
#include <queue>

using namespace std;

int main() {
    int n,i,cmd,x;

    while (scanf("%d", &n) != EOF) {
        stack<int> st;
        queue<int> q;
        priority_queue<int> pq;
        bool pilha = true;
        bool fila = true;
        bool pfila = true;

        for(i=0;i<n;i++){
            scanf("%d", &cmd);
            if(cmd == 1){
                scanf("%d", &x);
                st.push(x);
                q.push(x);
                pq.push(x);
            }
            else{
                if(cmd == 2){
                    scanf("%d",&x);

                    if(pilha){
                        if(st.empty() || st.top() != x){
                            pilha = false;
                        }
                        else{
                            st.pop();
                        }
                    }

                    if(fila){
                        if(q.empty() || q.front() != x){
                            fila = false;
                        }
                        else{
                            q.pop();
                        }
                    }

                    if(pfila){
                        if(pq.empty() || pq.top() != x){
                            pfila = false;
                        }
                        else{
                            pq.pop();
                        }
                    }
                }
            }
        }

        if(pilha + fila + pfila > 1){
            printf("not sure\n");
        }
        else{
            if(pilha){
                printf("stack\n");
            }
            else{
                if(fila){
                    printf("queue\n");
                }
                else{
                    if(pfila){
                        printf("priority queue\n");
                    }
                    else{
                        printf("impossible\n");
                    }
                }
            }
        }
    }

    return 0;
}
