#include "./Shader.h"
#include "./Ray.h"

int main(int argc, char* argv[]) {
  Ray* r = new Ray(Vector3(2, 3, 4), Vector3(1, 1, 0));
  Vector3 hp =  Vector3(4, 5, 4);
  Vector3 normal = Vector3 (-1, 0, 0);
  Ray* reflected = r->reflect(hp, normal);
  printf("Original Ray:\n");
  r->printRay();
  printf("\nHit point:\n");
  Ray(hp, normal).printRay();
  printf("\nReflected Ray:\n");
  reflected->printRay();
  delete(r);
  delete(reflected);
  return 0;
}
