#define XStr(...) [NSString stringWithFormat:__VA_ARGS__]
#define XLog(...) RLog(@"[%@:%@:%d] %@", @"AppShortcut", [NSString stringWithUTF8String:__FILE__], __LINE__, XStr(__VA_ARGS__))
#define XEq(a, b) (a != nil && b != nil && [a isEqualToString:b])
#define XIsEmpty(a) (a == nil || [a length] == 0)
#define XAlertBtnHandler(title, h) [UIAlertAction actionWithTitle:title style:UIAlertActionStyleDefault handler:h]
#define XAlertBtn(title) XAlertBtnHandler(title, nil)
#define XAlertTitle(title, msg) [UIAlertController alertControllerWithTitle:title message:msg preferredStyle:UIAlertControllerStyleAlert]
#define XAlert(msg) XAlertTitle(kName, msg)