class ICubes
{
public:
    virtual int throwCube() = 0;
    virtual ~ICubes()= default;
};
    
class Cubes: public ICubes
{
public:
Cubes()
{
    srand(time(0));
}

int throwCube() override
{
    auto throw1 = onceThrow();
    auto throw2 = onceThrow();
    if (throw1 == throw2)
    {
       throw1 += onceThrow();
       throw2 += onceThrow();
    }
    auto result = throw1 + throw2;

    std::cout << "Rolled " << result << std::endl;
    return result;
}
private:
    int onceThrow()
    {
        return rand() % 5 + 1;
    }

};
