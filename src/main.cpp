// You will write all your code for this tutorial here!
#include <bn_backdrop.h>
#include <bn_color.h>
#include <bn_core.h>
#include <bn_keypad.h>
int main(){
    bn::core::init();
    bn::backdrop::set_color(bn::color(15, 31, 31));
    

    while(true){
    bn::core::update();

        if(bn::keypad::a_pressed()){
        
        }
    }


}