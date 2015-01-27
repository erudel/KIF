//
//  KIFUIViewActor.h
//  KIF
//
//  Created by Alex Odawa on 1/21/15.
//
//

#import <KIF/KIF.h>

#define viewTester KIFActorWithClass(KIFUIViewTestActor)


@interface KIFUIViewTestActor : KIFTestActor

@property (nonatomic, strong, readonly) UIView *view;
@property (nonatomic, strong, readonly) UIAccessibilityElement *element;
@property (nonatomic, strong, readonly) NSPredicate *predicate;
@property (nonatomic, assign, readonly) BOOL hasMatch;

- (instancetype)usingPredicateWithFormat:(NSString *)predicateFormat, ...;
- (instancetype)usingAccessibilityLabel:(NSString *)label;
- (instancetype)usingAccessibilityIdentifier:(NSString *)identifier;
- (instancetype)usingExpectedClass:(Class)expectedClass;
- (instancetype)usingTraits:(UIAccessibilityTraits)traits;
- (instancetype)usingValue:(NSString *)value;

- (void)tap;
- (void)longPress;
- (void)longPressWithDuration:(NSTimeInterval)duration;
- (void)tapScreenAtPoint:(CGPoint)screenPoint;

- (void)waitForView;
- (void)waitToBecomeTappable;
- (void)waitToBecomeFirstResponder;

- (void)enterText:(NSString *)text;
- (void)enterText:(NSString *)text expectedResult:(NSString *)expectedResult;
- (void)enterTextIntoCurrentFirstResponder:(NSString *)text;

- (void)clearText;
- (void)clearAndEnterText:(NSString *)text;
- (void)clearAndEnterText:(NSString *)text expectedResult:(NSString *)expectedResult;

@end
