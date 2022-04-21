//
// Created by 70000 on 4/14/2022.
//

#ifndef LAB_7_SERVICE_H
#define LAB_7_SERVICE_H

#include "../Repo/Repo.h"

class Service {
private:
    Repo repo;

public:

    Service(const Repo &repo);

    void add_entity(Entity e);

    vector<Entity> get_all_entities();

    void get_all2();

    Repo update_entity(Entity e);

    Repo delete_entity(int d);

    Repo filter_type_entities(char* n);

    Repo filter_type2_entities(char* n, int val);

    Repo filter_type3_entities(char* n, int val);

    int sum_of_types(char* n);
};

#endif //LAB_7_SERVICE_H
