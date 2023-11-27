#include <iostream>
#include <string>

struct ball{
	protected:
		float radius; 
		float mass;
		int id;

	public: 
		ball(){	
			this->radius = 1;
			this->mass = 1;
			this->id = -1;
		}

		ball(float r, float m, int prev_id){
			this->radius = r;
			this->mass = m;
			this->id = prev_id+1;
		}

		float getRadius(){
			return radius;
		}

		float getMass(){
			return mass;
		}
};

int main(){
	
	ball b(2,3,1);
	std::cout << b.getRadius() << std::endl;	
	return 0;
}
