class Primitive;

#include "Primitive.h"

#include <math.h>
#include "vector/GenVector.h"
#include "RayGenerator.h"
#include "HitPoint.h"
#include "Material.h"

class Primitive {
private:

public:
	virtual float intersect(Ray* r) {
		return -1;
	}
	virtual Vector3 getNormal(Ray* r, HitPoint* hp) {
		return Vector3(0, 1, 0);
	}

	virtual Material* getMaterial() {
		return new Material();
	}

	virtual Vector3 getMinimumPoint() {
		return Vector3(0, 0, 0);
	}

	virtual Vector3 getMaximumPoint() {
		return Vector3(0, 0, 0);
	}
};