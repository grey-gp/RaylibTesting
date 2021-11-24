#prama once

#include "raylib.h"
#include "Component.h"
#include <string>
#include <list>

class Entity
{
    Vector2 position;
    std::string name;
    std::string description;
    std::list<Component> childComponents;
};