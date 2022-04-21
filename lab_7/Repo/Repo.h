//
// Created by 70000 on 4/7/2022.
//

#ifndef LAB_7_REPO_H
#define LAB_7_REPO_H

#include "../Entity/Entity.h"
#include <vector>

class Repo {
private:

    Entity v[10];
    int no_elems;

public:
    /*
     * Constructor
     */
    Repo();

    /*
     *  Adds an entity to the repo
     *  @param e
     */
    void add_Entity(Entity e);

    /*
     *  Gets all entities
     *  @return all entities
     */
    vector<Entity> get_all();

    /*
     * Gets an entity by name
     * @param n the entity name
     * @return the entity
     */
    Entity& get_entity(char* n,int day);

    /*
     * Returns the number of entities from the repo
     * @return number of entities
     */
    int get_size();

    /*
     *  Returns an entity updated
     *  @return the entity updated
     */
    Entity& update_entity(Entity e);

    /*
     * Deletes an entity from the list of entities
     * @return the list without the entity
     */
    void delete_entity(int day);

    /*
     *  Gets all entities
     *  @return all entities
     */
    void get_all2();

    /*
     *  Filters the list for specific entities
     *  @return the specific entities
     */
    void filter_type_entities(char* n);

    /*
     *  Filters the list for specific entities
     *  @return the specific entities
     */
    void filter_type2_entities(char* n, int val);


    /*
     *  Filters the list for specific entities
     *  @return the specific entities
     */
    void filter_type3_entities(char* n, int val);

    /*
     * Return the sum of specific entities
     * @return the sum
     */
    int sum_of_types(char* n);

    /*
     * Deconstructor
     */
    ~Repo();
};

#endif //LAB_7_REPO_H
