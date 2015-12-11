#ifndef GAMEOBJECT_H_
#define GAMEOBJECT_H_
#include <string>
using std::string;
class GameObject
{
private:
	const string kName;
protected:
	GameObject(const string&);
public:
	~GameObject();
	string getName(void);
	int getCount();

};

#endif