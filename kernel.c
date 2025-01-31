#include "include/kernel.h"
#include "include/utils.h"
#include "include/char.h"
#include "include/reqs.h"
#include "usr/shell.h"



// kernel entery point !!
void kernel_up(){

  // color of terminal(you can change it if you want :D )
  init_vga(WHITE, BLUE);
  logo();


  for (int i = 0; i < 40; i++){
    sleep(0x2FAFFFE); // sleep for logo to load ;;
  }
  //color set to green and black
  init_vga(WHITE, BLACK);
  newline_on_terminal();

  // input() for   infinity loop (terminal loop infinity)
  print_on_terminal("# ");

  while (1){
    char keycode = 0;
    keycode = get_input_prompt();
    input();
    if (keycode == KEY_ENTER){next_line_index =next_line_index-2;}
        
  }

}
