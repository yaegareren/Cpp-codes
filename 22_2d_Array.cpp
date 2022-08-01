#include<bits/stdc++.h>
using namespace std;

int main(){
    // datatype arrayname[rows][columns]

    int A[10][10]; //declaration
    int B[2][2]={1,2,3,4}; //declaration with initialization
    int C[3][3]={{1,1,1},{2,2,2},{3,3,3}}; //declaration with initialization
    for(int i=0;i<3;i++){

        for(int j=0;j<3;j++){

            cout<<C[i][j]<<" ";
        }
            cout<<endl;
    }

    cout<<"\nEnter values of a 2x2 matrix: "<<endl;
        for(int i=0;i<2;i++){

        for(int j=0;j<2;j++){

            cin>>B[i][j];
        }

    }

    cout<<"\nValues of a 2x2 matrix: "<<endl;
        for(int i=0;i<2;i++){

        for(int j=0;j<2;j++){

            cout<<B[i][j]<<" ";
        }
            cout<<endl;
    }

    int A1[2][2],B1[2][2],add[2][2],sub[2][2];
        cout<<"\nEnter values of 2-d array A1: "<<endl;
        for(int i=0;i<2;i++){

        for(int j=0;j<2;j++){

            cin>>A1[i][j];
        }

    }

        cout<<"\nEnter values of 2-d array B1: "<<endl;
        for(int i=0;i<2;i++){

        for(int j=0;j<2;j++){

            cin>>B1[i][j];
        }

    }

        for(int i=0;i<2;i++){

        for(int j=0;j<2;j++){

            add[i][j]=A1[i][j]+B1[i][j];
        }
        }

        for(int i=0;i<2;i++){

        for(int j=0;j<2;j++){

            sub[i][j]=A1[i][j]-B1[i][j];
        }

    }

        cout<<"\nAddition result: "<<endl;
        for(int i=0;i<2;i++){

        for(int j=0;j<2;j++){

            cout<<add[i][j]<<" ";
        }
        cout<<"\n";

    }

        cout<<"\nSubtraction result: "<<endl;
        for(int i=0;i<2;i++){

        for(int j=0;j<2;j++){

            cout<<sub[i][j]<<" ";
        }
        cout<<"\n";

    }
    return 0;
}
