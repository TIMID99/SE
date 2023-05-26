//
//  Apply.h
//
//  Created by 정지현 on 2023/05/26.
//

#ifndef Apply_h
#define Apply_h

class ApplyUI;
class Apply {
private:
    ApplyUI* applyUI;

public:
    Apply();
    ApplyUI* getInterfaceInstance();

};

#endif /* Apply_h */