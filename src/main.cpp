#include "application.hpp"

int main() {
    ApplicationSpecification specification;

    specification.windowSize = { 700, 400};
    specification.name = "Hedean";
    specification.windowIcon = { 0 };

    Application application(specification);

    application.Run();

    return 0;
}