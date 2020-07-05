class Weapon
{
protected:
    int strength;
    char type;
public:
    int modified;

    int return_strength()
    {
        return strength;
    }

    char return_type()
    {
        return type;
    }

    void setPower (int val)
    {
        strength = val;
        return;
    }
};



class Rock: public Weapon
{

public:
    Rock()
    {
        type='r';
    }
    bool battle(Weapon w)
    {
        if(w.return_type() == 'p' ) {
            this->modified = this->strength / 2;
            w.modified = w.return_strength() * 2;
        }else if(w.return_type() == 's' ) {
            this->modified = this->strength * 2;
            w.modified = w.return_strength() / 2;
        }
            
        return this->modified > w.modified;
    }

};

class Paper: public Weapon
{

public:
    Paper()
    {
        type='p';
    }
    bool battle(Weapon w)
    {
        if(w.return_type() == 'r' ) {
            this->modified = this->strength * 2;
            w.modified = w.return_strength() / 2;
        }else if(w.return_type() == 's' ) {
            this->modified = this->strength / 2;
            w.modified = w.return_strength() * 2;
        }
            
        return this->modified > w.modified;
    }

};

class Scissors: public Weapon
{

public:
    Scissors()
    {
        type='s';
    }
    bool battle(Weapon w)
    {
        
        if(w.return_type() == 'p' ) {
            this->modified = this->strength * 2;
            w.modified = w.return_strength() / 2;
        }else if(w.return_type() == 'r' ) {
            this->modified = this->strength / 2;
            w.modified = w.return_strength() * 2;
        }
            
        return this->modified > w.modified;
    }

};
