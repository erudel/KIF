//
//  ViewWaitForViewTests.m
//  KIF
//
//  Created by Alex Odawa on 1/26/15.
//
//


#import <KIF/KIF.h>

@interface ViewWaitForViewTests : KIFTestCase
@end

@implementation ViewWaitForViewTests

- (void)testWaitingForViewWithAccessibilityLabel
{
    [[viewTester usingAccessibilityLabel:@"Test Suite"] waitForView];
}

- (void)testWaitingForViewWithTraits
{
    [[[viewTester usingAccessibilityLabel:@"Test Suite"] usingTraits:UIAccessibilityTraitStaticText] waitForView];
}

- (void)testWaitingForViewWithValue
{
    [[[[viewTester usingAccessibilityLabel:@"Switch 1"] usingValue:@"1"] usingTraits:UIAccessibilityTraitNone] waitForView];
}

@end
