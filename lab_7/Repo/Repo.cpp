//
// Created by 70000 on 4/7/2022.
//

#include "Repo.h"
#include <iostream>
#include "string.h"

Repo::Repo() {
    this->no_elems = 0;
}

void Repo::add_Entity(Entity e) {
    this->v[this->no_elems++] = e;
}

vector<Entity> Repo::get_all() {
    vector<Entity> vec;
    for (Entity e: v) {
        if (e.get_name() != nullptr) {
            vec.push_back(e);
        }
    }
    return vec;
}


Entity &Repo::get_entity(char *n,int day) {
    for(Entity& e: v) {
        if(strcmp(e.get_name(),n) == 0 || e.get_day() == day) {
            return e;
        }
    }
    throw std::runtime_error("No entity with specified name found");
}

int Repo::get_size() {
    return no_elems;
}

Repo::~Repo() {}

Entity &Repo::update_entity(Entity e) {
    char *n = nullptr;
    int d = 0;
    Entity& to_update = get_entity(e.get_name(), e.get_day());
    cout << "Old type: " << e.get_name() << endl << "New type: ";
    cin >> n;
    to_update.set_name((char*) n);
    cout << "Old day: " << e.get_day() << endl << "New day: ";
    to_update.set_day(d);

    return to_update;
}

void Repo::delete_entity(int day) {
    for (Entity to_delete: v) {
        if(day == to_delete.get_day()) {

        }
        /*
        if(strcmp(e.get_name(),to_delete.get_name()) == 0) {
            delete[] this;
        }
         */
    }
}

void Repo::get_all2() {
    for(Entity e: v) {
        if(e.get_name() != nullptr) {
            cout << e << endl;
        }
    }
}

void Repo::filter_type_entities(char* n) {
    for(Entity e: v) {
        if(e.get_name()) {
            if(strcmp(e.get_name(),n) == 0) {
                cout << e << endl;
            }
        }
    }
}

void Repo::filter_type2_entities(char* n,int val) {
    for(Entity e: v) {
        if(e.get_name()) {
            if (strcmp(e.get_name(),n) == 0 && e.get_sum() > val) {
                cout << e << endl;
            }
        }
    }
}

void Repo::filter_type3_entities(char* n, int val) {
    for(Entity e: v) {
        if(e.get_name()) {
            if (strcmp(e.get_name(),n) == 0 && e.get_sum() == val) {
                cout << e << endl;
            }
        }
    }
}

int Repo::sum_of_types(char* n) {
    int s = 0;
    for(Entity e: v) {
        if(e.get_name()) {
            if(strcmp(e.get_name(),n) == 0) {
                s = s + e.get_sum();
            }
        }
    }
    return s;
}

