#ifndef ANIMAL_H
#define ANIMAL_H
class animal
{
protected:
        string name;
        string color;
public:
    animal():name (" ") , color(" "){}
    animal (string a,string b): name(a), color(b){}
    void setname(string a)
    {
        this->name=a;
    }
    void setcolor(string b)
    {
        this->color=b;
    }
    string getcolor()
    {
        return this->color;
    }
    string getten()const
    {
        return this->name;
    }
    string speak()
    { 
		string a;
        a=this->name;
        return a;
    }

};


#endif
