template<typename T>
class unique_ptr {

private:
    T* d;

public:
    
    unique_ptr(T * dIn) : d(dIn)     {}
    unique_ptr()        : d(nullptr) {} 
    
    ~unique_ptr() { delete d; }

    unique_ptr(const unique_ptr & other) = delete;
    
    unique_ptr & operator=(const unique_ptr & other) = delete;
    
    T & operator*() {
        return *d;
    }
    
    T * operator->() {
        return d;
    }
    
    unique_ptr(unique_ptr && other)
        : d(other.d) {
        other.d = nullptr;
    }
    
    unique_ptr & operator=(unique_ptr && other) {
        
        delete d;
        d = other.d;        
        other.d = nullptr;
        
        return *this;
    }
    
    operator bool() {
        return (d != nullptr);
    }
    
};

