//
// Created by andy on 18-5-28.
//
class father {
public:
    int pub_ele = 0;

    void pub_fun() {

    }

protected:
    int pro_ele = 1;

    void pro_fun() {}

private:
    int pri_ele = 2;

    void pri_fun() {}
};

class pub_son : public father {
    void access() {
        this->pub_ele = 0;
        this->pub_fun();
        this->pro_ele = 0;
        this->pro_fun();
        this->pri_ele = 0;
        this->pri_fun();
    }
};

class pro_son : protected father {
    void access() {
        this->pub_ele = 0;
        this->pub_fun();
        this->pro_ele = 0;
        this->pro_fun();
        this->pri_ele = 0;
        this->pri_fun();
    }
};

class pri_son : private father {
    void access() {
        this->pub_ele = 0;
        this->pub_fun();
        this->pro_ele = 0;
        this->pro_fun();
        this->pri_ele = 0;
        this->pri_fun();
    }
};

void test(){
    pub_son *in = new pub_son();
    in->pub_ele = 0;
    in->pub_fun();
    in->pro_ele = 0;
    in->pro_fun();
    in->pri_ele = 0;
    in->pri_fun();
}

void test2(){
    pro_son *in = new pro_son();
    in->pub_ele = 0;
    in->pub_fun();
    in->pro_ele = 0;
    in->pro_fun();
    in->pri_ele = 0;
    in->pri_fun();
}
void test3(){
    pri_son *in = new pri_son();
    in->pub_ele = 0;
    in->pub_fun();
    in->pro_ele = 0;
    in->pro_fun();
    in->pri_ele = 0;
    in->pri_fun();
}