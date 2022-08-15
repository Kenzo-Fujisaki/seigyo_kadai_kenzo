#include <iostream>

//連結リスト
typedef struct list{
    int data;
    struct list *prev;
    struct list *next;
}list;

bool judge = false;
//リストが存在するか確かめる関数
int check_list(list *checker) { 
    if (checker == nullptr) {
        judge = true;
        return judge;
    } else {
        return 0;
    }
}

//最後尾までlistをたどる
list *search_list(list *searcher){
    while(searcher -> next != nullptr){
        searcher = searcher -> next;
    }
    return searcher;
}

//リストを末尾に追加する
list *add_list(list *list_head,int data){
    int check;
    list* receiver = nullptr;
    list* creater = nullptr;
    check = check_list(list_head); //リストが存在するかチェック
    if(check == judge){
        creater = new list;
        creater -> data = data;
        creater -> prev = nullptr;
        creater -> next = nullptr;
        return creater;
    }
    //最後尾まで辿った後に追加する
    else{
        receiver = search_list(list_head);//最後尾までアドレスを辿り最後尾の要素のアドレスを受け取る
        creater = new list;//動的な領域を確保
        creater -> data = data;
        creater -> prev = receiver;
        creater -> next = nullptr;
        receiver -> next = creater; //追加したリストの要素と最後尾の要素の連結
        return list_head;
    }
}
//リストを先頭から最後まで走査して全件表示
void show_list(list *show){
    while(show != nullptr){
        std::cout << show -> data << ",";
        show = show -> next;
    }
    std::cout << " " <<std::endl;
}
//リストを全件削除する
void del_list(list *deleter){
    //辿った後に消す
    while(deleter -> next != nullptr){
        deleter = deleter -> next;
        delete deleter -> prev;
    }
    delete deleter;
    std::cout << "削除しました" << std::endl;
}
//main関数
int main(){
    list *main_list = nullptr;
    int N;
    std::cout << "入力数を決めてください" << std::endl;
    std::cin >> N;
    //追加
    for(int i=0;i<N;i++){
        int num;
        std::cout << i+1 <<"つ目：";
        std::cin >> num;
        main_list = add_list(main_list,num);
    }
    //先頭から最後まで走査して出力
    show_list(main_list);
    //削除
    del_list(main_list);
}



