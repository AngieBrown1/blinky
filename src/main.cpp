// You will write all your code for this tutorial here!
#include <bn_backdrop.h>
#include <bn_color.h>
#include <bn_core.h>
#include <bn_keypad.h>
int main(){
    bn::core::init();
    bn::backdrop::set_color(bn::color(15, 31, 31));
    bool color_change;

    while(true){
        if(bn::keypad::a_held()){
            bn::backdrop::set_color(bn::color(31,21,22));
            color_change = true;
        }

        if(bn::keypad::a_released() && color_change == true){
            bn::backdrop::set_color(bn::color(15, 31, 31));
        }
        
        if(bn::keypad::b_held()){
            bn::backdrop::set_color(bn::color(23,5,23));
            color_change = true;
        }

        if(bn::keypad::b_released() && color_change == true){
            bn::backdrop::set_color(bn::color(15, 31, 31));
        }

        bn::core::update();
    }


}