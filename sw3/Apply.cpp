//
//  Apply.cpp
//
//  Created by 정지현 on 2023/05/26.
//

#include "Apply.h"

Apply::Apply() {
    ApplyUI = new ApplyUI(this);
}

ApplyUI* Apply::getInterfaceInstance() {
    return applyUI;
}