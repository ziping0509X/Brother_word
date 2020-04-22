#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main(void){
    int num;
    while(cin>>num){
        vector<string>word;
        vector<string>vec;
        string tmp;
        for(int i=0;i<num;i++){
            cin>>tmp;
            word.push_back(tmp);
            tmp="";
        }
        sort(word.begin(),word.end());

//        for(int i=0;i<473;i++){
//            cout<<word[i]<<endl;
//        }

        string find;
        cin>>find;//dacbb

        int len=word.size();
        int size=find.size();//size是find的长度
        for(int i=0;i<len;i++){
            if(word[i].size()!=size)
                continue;
            //如果长度相等，开始下面的判断
            else{
                int shuzu[len];
                for(int h=0;h<len;h++){
                    shuzu[h]=0;
                }
                for(int j=0;j<size;j++){
                    for(int k=0;k<size;k++){
                        if(find[j]==word[i][k]){
                            shuzu[j]=1;
                        }
                    }
                }
                int count=0;
                for(int l=0;l<len;l++){
                    count=count+shuzu[l];
                }
                if(count==len){
                    if(find!=word[i]){
                        vec.push_back(word[i]);
                        //cout<<word[i]<<endl;
                    }

                }
            }

        }

//        for(int i=0;i<vec.size();i++){
//            cout<<vec[i]<<endl;
//        }

        if(vec.size()>0){
            cout<<vec.size()<<endl;
            int index;
            cin>>index;
            if(index<=vec.size()){
                cout<<vec[index-1]<<endl;
            }
        }
    }
}//兄弟单词的判别方法上有问题，尝试使用github的更新功能