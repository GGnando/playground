
class Memes {
private:
    std::string name;
    static int memesMade;
public:
    Memes();
    ~Memes();
    virtual std::string getName() const = 0;

};
