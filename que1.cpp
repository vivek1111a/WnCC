#include<iostream>
using namespace std;

class student{
    public:
    string name;
    int html;
    int python;
    int dsa;
    int java;
    int sql;
    bool flag;
    student(string nam,int htm,int pytho,int ds,int jav,int sq){
        name=nam;
        html=htm;
        python=pytho;
        dsa=ds;
        java=jav;
        sql=sq;
        bool flag=true;
    }
    student(){};
    void print(){
        cout<<name<<" "<<html<<" "<<python<<" "<<dsa<<" "<<java<<" "<<sql<<endl;
    }
};

class course{
    public:
    string name;
    int html;
    int python;
    int dsa;
    int java;
    int sql;
    course(string nam,int htm,int pytho,int ds,int jav,int sq){
        name=nam;
        html=htm;
        python=pytho;
        dsa=ds;
        java=jav;
        sql=sq;
    }
    course(){};
     void print(){
        cout<<name<<" "<<html<<" "<<python<<" "<<dsa<<" "<<java<<" "<<sql<<endl;
    }
};

int main(){
    int n;
    cin>>n;
    student arr[n];
    for(int i=0;i<n;i++){
        string name;
        int html,python,dsa,java,sql;
        cin>>name>>html>>python>>dsa>>java>>sql;
        arr[i]={name,html,python,dsa,java,sql};
    }
    // for(int i=0;i<n;i++){
    //     arr[i].print();
    // }
    int m;
    cin>>m;
    course soc[m];
    for(int i=0;i<m;i++){
        string name;
        int html,python,dsa,java,sql;
        cin>>name>>html>>python>>dsa>>java>>sql;
        soc[i]={name,html,python,dsa,java,sql};
    }
    // for(int i=0;i<m;i++){
    //     soc[i].print();
    // }
    int count=0;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if((arr[i].html>=soc[j].html) && (arr[i].python>=soc[j].python) && (arr[i].dsa>=soc[j].dsa) && (arr[i].java >=soc[j].java)){
                arr[i].flag=false;
                count++;
            }
        }
    }
    cout<<count<<endl;
    return 0;
}