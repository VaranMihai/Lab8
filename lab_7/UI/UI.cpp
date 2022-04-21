//
// Created by 70000 on 4/14/2022.
//

#include "UI.h"

using namespace std;

void UI::print_options() {
    cout << "1. Read Entity" << endl;
    cout << "2. Show all entities" << endl;
    cout << "0. Exit" << endl;
}

/*
UI::UI(const Service &service) {
    this->service = service;
}
 */

void UI::read_entity(Entity e) {
    service.add_entity(e);
}

void UI::display_all_entities() {
    service.get_all_entities();
}

void UI::run_menu() {

    bool to_run = true;
    while (to_run) {
        int option;
        print_options();
        cout << "type option: ";
        cin >> option;

        switch (option) {
            case 0: {
                to_run = false;
                break;
            }
            case 1: {
                Entity e;
                cin >> e;
                read_entity(e);
                break;
            }
            case 2: {
                service.get_all2();
                break;
            }
            default: {
                cout << "Invalid option, try again!";
                break;
            }
        }
    }

}

