#include <iostream>
#include "Repo/Repo.h"
#include "Tests/Tests.h"
#include "Service/Service.h"
#include "UI/UI.h"

using namespace std;

int main() {
    run_tests();

    Repo repo;
    Service service(repo);

    Entity e1((char*) "internet", 10, 20);
    Entity e2((char*) "mancare", 13, 30);
    Entity e3((char*) "mancare", 17, 40);
    Entity e4((char*) "utilitati", 9, 100);
    Entity e5((char*) "haine", 5, 80);

    service.add_entity(e1);
    service.add_entity(e2);
    service.add_entity(e3);
    service.add_entity(e4);
    service.add_entity(e5);

    service.get_all2();

    cout << "----------" << endl;

    cout << service.sum_of_types((char*)"mancare") << endl;

    cout << "----------" << endl;

    service.filter_type_entities((char*)"mancare");


    return 0;
}
