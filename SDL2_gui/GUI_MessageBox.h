//
//  GUI_MessageBox.hpp
//  GUI_App
//
//  Created by Panutat Tejasen on 24/1/2562 BE.
//  Copyright © 2562 Jimmy Software Co., Ltd. All rights reserved.
//

#ifndef GUI_MessageBox_hpp
#define GUI_MessageBox_hpp

#include <stdio.h>

#include <stdio.h>
#include "GUI_PopupView.h"

class GUI_MessageBox : public GUI_DialogView {
protected:
public:
    static GUI_MessageBox *create( GUI_View *parent, const char *title, const char *message, int x, int y, int width, int height,
                                 std::function<void(GUI_View*)>callbackFunction = NULL );
    GUI_MessageBox(GUI_View *parent, const char *title, const char *message, int x, int y, int width, int height,
                  std::function<void(GUI_View*)>callbackFunction = NULL );
    virtual ~GUI_MessageBox();
};

#endif /* GUI_MessageBox_hpp */
