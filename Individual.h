class Individual{
public:
    Individual();
    Individual(Individual &&) = default;
    Individual(const Individual &) = default;
    Individual &operator=(Individual &&) = default;
    Individual &operator=(const Individual &) = default;
    ~Individual();

    int getSize(){
        return size;
    }
    int setSize(int size){
        this->size = size;
    }

private: 
    int size = 10;
};