class Ant
{
public:
    Ant();
    Ant(Ant &&) = default;
    Ant(const Ant &) = default;
    Ant &operator=(Ant &&) = default;
    Ant &operator=(const Ant &) = default;
    ~Ant();

    void readFeromone();
    void writeFeromone();

private:
    
};