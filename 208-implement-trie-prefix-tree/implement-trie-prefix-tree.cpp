struct Node{
    Node* links[26];
    bool flag = false;
    
    bool containKey(char ch){
        return (links[ch-'a'] != NULL);
    }

    void put(char ch , Node* node){
        links[ch-'a'] = node;
    }

    Node* get(char ch){
        return links[ch-'a'];
    }

    void setEnd(){
        flag = true;
    }

    bool isEnd(){
        return flag;
    }
};
class Trie {
private: Node* root;    
public:
    Trie() {
        root = new Node();
    }
    
    void insert(string word) {
        Node* t = root;
        for(int i = 0 ; i < word.size() ; i++){
            if(!t->containKey(word[i])){
                t->put(word[i],new Node());
            }
            t = t->get(word[i]);
        }
        t->setEnd();
    }
    
    bool search(string word) {
        Node* t = root;
        for(int i = 0 ; i < word.size() ; i++){
            if(!t->containKey(word[i])){
                return false;
            }
            t = t->get(word[i]);
        }
        return t->isEnd();
    }
    
    bool startsWith(string prefix) {
        Node* t = root;
        for(int i = 0 ; i < prefix.size() ; i++){
            if(!t->containKey(prefix[i])){
                return false;
            }
            t = t->get(prefix[i]);
        }
        return true;
    }
};