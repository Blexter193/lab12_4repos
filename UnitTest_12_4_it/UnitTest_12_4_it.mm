//
//  UnitTest_12_4_it.m
//  UnitTest_12_4_it
//
//  Created by USER on 03.05.2023.
//

#import "Header.h"
#import <XCTest/XCTest.h>

@interface UnitTest_12_4_it : XCTestCase

@end

@implementation UnitTest_12_4_it

- (void)testExample {

    Node* head2 = NULL;
    addToEnd(head2, 1);
    addToEnd(head2, 2);
    addToEnd(head2, 5);
    addToEnd(head2, 4);
    addToEnd(head2, 3);
    XCTAssert(isSorted(head2) == false);
    
    Node* head3 = NULL;
    XCTAssert(isSorted(head3) == true);
}



@end
