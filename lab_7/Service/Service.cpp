//
// Created by 70000 on 4/14/2022.
//

#include "Service.h"

Service::Service(const Repo &repo) {
    this->repo = repo;
}

void Service::add_entity(Entity e) {
    repo.add_Entity(e);
}

vector<Entity> Service::get_all_entities() {
    repo.get_all();
}

Repo Service::update_entity(Entity e) {
    repo.update_entity(e);
}

Repo Service::delete_entity(int d) {
    repo.delete_entity(d);
}

Repo Service::filter_type_entities(char* n) {
    repo.filter_type_entities(n);
}

void Service::get_all2() {
    repo.get_all2();
}

Repo Service::filter_type2_entities(char *n, int val) {
    repo.filter_type2_entities(n,val);
}

Repo Service::filter_type3_entities(char *n, int val) {
    repo.filter_type3_entities(n,val);
}

int Service::sum_of_types(char *n) {
    return repo.sum_of_types(n);
}


