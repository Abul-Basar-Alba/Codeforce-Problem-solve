
#include <bits/stdc++.h>
using namespace std;
using vi = vector<int>;
std::mt19937 rng((unsigned)chrono::high_resolution_clock::now().time_since_epoch().count());


bool USE_RANDOM_START = false;
int initialBoardArr[8][8] = {
    {1,0,0,0,0,0,0,0},
    {0,0,0,0,1,0,0,0},
    {0,0,0,0,0,0,1,0},
    {0,0,0,0,0,1,0,0},
    {0,0,0,0,0,0,0,0},
    {0,0,1,0,0,0,0,0},
    {1,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0}
};

void printBoardCols(const vi &cols)
{
    for(int r=0;r<8;++r)
    {
        for(int c=0;c<8;++c)
        {
            cout << (cols[c]==r ? 1 : 0) << " ";
        }
        cout << "\n";
    }
}

int conflicts(const vi &cols)
{
    int cnt=0;
    for(int i=0;i<8;++i)
    {
        for(int j=i+1;j<8;++j)
        {
            if(cols[i]==cols[j]) 
            ++cnt;
            else if(abs(cols[i]-cols[j])==abs(i-j)) 
            ++cnt;
        }
    }
    return cnt;
}

int conflictsFor(const vi &cols,int col,int row)
{
    int cnt=0;
    for(int c=0;c<8;++c)
    {
        if(c==col) 
        continue;
        int r=cols[c];
        if(r==row) 
        ++cnt;
        else if(abs(r-row)==abs(c-col)) 
        ++cnt;
    }
    return cnt;
}

vi randomState()
{
    vi cols(8);
    for(int c=0;c<8;++c) 
    cols[c]=rng()%8;
    return cols;
}

vi fromGrid(int grid[8][8])
{
    vi cols(8,-1);
    for(int c=0;c<8;++c)
    {
        for(int r=0;r<8;++r)
        {
            if(grid[r][c]==1)
            { 
                cols[c]=r; 
                break; 
            }
        }
        if(cols[c]==-1) 
        cols[c]=rng()%8; 
    }
    return cols;
}


pair<bool,vi> hillClimbSolve(const vi &start,
                            int maxRestarts = 1000,
                            int maxStepsPerRestart = 1000,
                            int maxSideways=100)
{
    for(int restart=0; restart<maxRestarts; ++restart){
        vi cols = (restart==0 ? start : randomState());
        int sidewaysCount = 0;

        for(int step=0; step<maxStepsPerRestart; ++step){
            int h = conflicts(cols);
            if(h==0) return {true, cols};

            int bestDelta = INT_MAX;
            vector<pair<int,int>> bestMoves; 
            for(int c=0;c<8;++c){
                int curRow = cols[c];
                int curConf = conflictsFor(cols,c,curRow);
                for(int r=0;r<8;++r){
                    if(r==curRow) continue;
                    int candConf = conflictsFor(cols,c,r);
                    int delta = candConf - curConf;
                    if(delta < bestDelta){
                        bestDelta = delta;
                        bestMoves.clear();
                        bestMoves.push_back({c,r});
                    } else if(delta == bestDelta){
                        bestMoves.push_back({c,r});
                    }
                }
            }

            if(bestMoves.empty()) break;
            if(bestDelta > 0) break; 

            auto mv = bestMoves[rng()%bestMoves.size()];
            int chosenCol = mv.first, chosenRow = mv.second;
            int oldRow = cols[chosenCol];
            cols[chosenCol] = chosenRow;

            if(bestDelta == 0){
                ++sidewaysCount;
                if(sidewaysCount > maxSideways) break;
            } else {
                sidewaysCount = 0;
            }
        }
    }
    return {false, {}};
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vi start;
    if(USE_RANDOM_START){
        start = randomState();
 
        printBoardCols(start);
    } 
    else 
    {
        start = fromGrid(initialBoardArr);
 
        printBoardCols(start);
    }

    auto res = hillClimbSolve(start, 1000, 1000, 100);
    if(res.first)
    {
        cout << "\nSolution found (board with queens=1):\n";
        printBoardCols(res.second);
        cout << "Conflicts: " << conflicts(res.second) << "\n";
    } 
    else 
    {
        cout << "\nNo solution found after restarts. Try enabling random restarts or change initial board.\n";
    }
    return 0;
}
