#include <Regn.h>
#include <iostream>

class PointCloudApp : public Regn::Application
{
public:
    PointCloudApp() {}
    ~PointCloudApp() {}
    void Run()
    {
		Application::Run();
		std::cout << "PointCloudApp is running!" << std::endl;
    }
};

struct Point
{
    float x;
    float y;
};  // 必须有分号

namespace PointCloud
{
    // ...
}


// ...

Regn::Application* Regn::CreateApplication()
{
	return new PointCloudApp();
}