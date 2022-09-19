 #include<iostream>
  #include "complexe.h"
using namespace std;

        void complexe::set_reel(int r){
            reel=r;
        };
        void complexe::set_img(int i){
            img=i;
        };
        void complexe::print(){
        cout<<"["<<reel<<"i"<<img<<"]"<<endl;
        };