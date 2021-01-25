#ifndef PROPELECTRIC_H
#define PROPELECTRIC_H

#include <string>
/* ************CLASS PropElectric****************
   **********************************************
   **********************************************
   This superclass let create Prop in Electric
   materials

*/
class PropElectric
{
protected:
    std::string Type; //Property type e.g Type: conductivity

public:
    PropElectric();
    PropElectric(std::string _Type);

    virtual void SetType(std::string _Type);
};

#endif // PROPELECTRIC_H
