#define EXPORT __declspec(dllexport)

extern "C"
{
   EXPORT int add2(int num) { return num + 2; }
}