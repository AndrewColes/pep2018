class Either {

public:

    int * a;
    

    Either(const int num) {
        a = new int(num);
        a = ((int*) ((uintptr_t) a) + 1);
    }

    Either(const double num) {
        a = (int*) new double(num);
        a = ((int*) ((uintptr_t) a) + 0);
    }

    bool isAnInt() const {
        return ((uintptr_t) a) & 1;
    }

    int * getIntPtr() {
        return ((int*) ((uintptr_t) a) - 1);
    }

    double * getDoublePtr() {
        return (double*) a;
    }
};

int main() {

    

}
